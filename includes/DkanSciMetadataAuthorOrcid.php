<?php

/**
 * Class DkanSciMetadataAuthorOrcid.
 *
 * Provides ORCID query/validation functions.
 */
class DkanSciMetadataAuthorOrcid extends DkanSciMetadataAuthor {
  const AUTHOR_ID_TYPE = 'orcid';
  const AUTHOR_TAXONOMY_NAME = 'ORCID';

  /**
   * Validates ORCID based on identifier and identifier kind.
   *
   * @param string $id
   *   ORCID ID
   *
   * @return string
   *   Error message, or NULL if successful.
   */
  public static function validate($id) {
    // First do a regex based validation in order to avoid an http request.
    $exp = '/^[0-9]{4}\-[0-9]{4}\-[0-9]{4}\-([0-9]{4}|[0-9]{3}X)$/';
    if (!preg_match($exp, $id)) {
      return t(
        'ORCID value must be of the @form form',
        array(
          '@form' => '0000-0002-8870-7099',
        )
      );
    }
    else {
      // If regex validation pass, then do a search against the orcid api.
      $search = self::query($id);
      if (!isset($search['name'])) {
        return t('Error validating ORCID ID @id. Please contact us if you believe the ORCID is valid.', array('@id' => $id));
      }
    }
    return NULL;
  }

  /**
   * Query ORCID API for ID.
   *
   * @param string $id
   *   ORCID ID
   *
   * @return array
   *   Array of ORCID data.
   */
  private static function query($id) {
    $search = t('https://pub.orcid.org/v2.1/@orcid_id/person', array('@orcid_id' => $id));
    $headers = array('Accept: application/orcid+json');
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $search);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($ch, CURLOPT_HTTPHEADER, $headers);
    $search = curl_exec($ch);
    curl_close($ch);
    $search = drupal_json_decode($search);
    return $search;
  }

  /**
   * Get Author's name from ORCID person entry.
   *
   * @param string $id
   *   ORCID ID
   *
   * @return string
   *   Author's name, or empty string if cannot be found.
   */
  public static function getName($id) {
    $author_name = '';
    $search = self::query($id);
    if (!empty($search) && isset($search['name'])) {
      $author_name = $search['name']['path'];
    }
    return $author_name;
  }
}
