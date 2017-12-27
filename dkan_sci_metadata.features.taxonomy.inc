<?php
/**
 * @file
 * dkan_sci_metadata.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dkan_sci_metadata_taxonomy_default_vocabularies() {
  return array(
    'sci_author_id_type' => array(
      'name' => 'Author ID Type',
      'machine_name' => 'sci_author_id_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
