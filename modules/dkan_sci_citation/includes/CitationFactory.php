<?php

namespace CitationFactory;

use AudioLabs\BibtexParser;
use Seboettg\CiteProc\StyleSheet;
use Seboettg\CiteProc\CiteProc;

include drupal_get_path('module', 'dkan_sci_citation') . '/includes/vendor/autoload.php';

/**
 * Class CitationFactory.
 */
class CitationFactory {

  /**
   * Return styled html citation.
   *
   * @param string $data
   *   Citation items.
   *
   * @return string
   *   Formatted Html data.
   */
  private function styleCitation($data) {
    $cite_style = variable_get('dkan_sci_citation_style', 'apa');

    $data = self::convertMods($data, $cite_style);

    $style = StyleSheet::loadStyleSheet($cite_style);
    $proc = new CiteProc($style);
    return $proc->render(array($data), "bibliography");
  }

  /**
   * Alters the APA style data array.
   *
   * @param string $data
   *   Citation items.
   *
   * @param string $style
   *   Citation style.
   *
   * @return string
   *   Formatted Html data.
   */
  private function convertMods($data, $style) {
    // Apa is an outlier in structure..
    if ($style === 'apa') {
      $ct = $data->{'container-title'}[0];
      $data->{'container-title'} = $ct;
      $title = $data->title[0];
      $data->title = $title;
    }

    return $data;
  }

  /**
   * Parses json to html.
   *
   * @param string $data
   *   JSON data.
   *
   * @return string
   *   Formatted Html data.
   */
  public function convertData($data) {
    if (!empty($data) && $data !== 'null') {
      $citation = json_decode($data);

      return self::styleCitation($citation);

    }
    return '';
  }

  /**
   * Parses json to html.
   *
   * @param string $data
   *   JSON data.
   *
   * @return string
   *   Formatted Html data.
   */
  public function convertBibtex($data) {
    // Bibtex JSON array isn't like Doi JSON array - different handling required;
    $rendered = '';
    $client = new BibtexParser\BibtexParser();

    // Make sure we have our JSON.
    try {
      $work = $client->parse_string($data);
    } catch (Exception $e) {
      watchdog_exception('dkan_sci_metadata', $e, $message = NULL, $variables = array(), $severity = WATCHDOG_ERROR, $link = NULL);
    }

    if (!empty($work[0]['reference'])) {
      foreach ($work as $ref) {
        // Get rid of the noise.
        $baddies = array('=', '{', '}');
        $replacements = array(':', '', '');
        $str_replace_pass = str_replace($baddies, $replacements, $ref['reference']);
        $str_explode_pass = explode(',', $str_replace_pass);

        // Pull out the white space and key our items.
        $citeproc_feed = (object) array();
        foreach ($str_explode_pass as $item) {
          $exploded = explode(':', $item);
          $exploded_value = explode(' ', $exploded[1]);
          $key = trim($exploded[0]);
          $subject = trim($exploded[1]);

          if (!empty($subject)) {
            $citeproc_feed->$key = trim($exploded[1]);
          }

          // These require special handling before feeding to citeproc-php.
          switch ($key) {
            case 'url':
              $citeproc_feed->{'URL'} = trim($exploded[1]) . ':' . trim($exploded[2]);

              break;

            case 'journal':
              $citeproc_feed->{'container-title'} = array(trim($exploded[1]));

              break;

            case 'title':
              $citeproc_feed->title = array(trim($exploded[1]));

              break;

            case 'year':
              $citeproc_feed->year = (object) array(
                'date-parts' => array(
                  array(
                    trim($exploded[1]),
                  ),
                ),
              );

              break;

            case 'author':
              $author = (object) array();
              $author->given = trim($exploded_value[1]);
              $author->family = trim($exploded_value[2]);
              $citeproc_feed->$key = array($author);

              break;
          }

        }
      }

      return json_encode($citeproc_feed);

    }

    return '';
  }

}
