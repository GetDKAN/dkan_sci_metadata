<?php
/**
 * @file
 * dkan_sci_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dkan_sci_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dkan_sci_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function dkan_sci_search_default_search_api_index() {
  $items = array();
  $items['dkan_sci_search'] = entity_import('search_api_index', '{
    "name" : "DKAN Sci Search",
    "machine_name" : "dkan_sci_search",
    "description" : null,
    "server" : "nal_solr_local",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "book", "dataset", "metadata", "news", "page", "resource" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_adc_hierarchy" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dkan_ispartof_ref" : { "type" : "integer", "entity_type" : "node" },
        "field_file_content" : { "type" : "text" },
        "field_fundref_project:field_fundref" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_harvest_source_ref" : { "type" : "integer", "entity_type" : "node" },
        "field_license" : { "type" : "string" },
        "field_metadata_extended:field_funding_sources:field_funding_sources" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "paragraphs_item"
        },
        "field_metadata_extended:field_funding_sources:field_name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_metadata_extended:field_funding_sources:field_sci_author_name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_metadata_extended:field_funding_sources:field_sci_fundref" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_metadata_extended:field_sci_author" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "paragraphs_item"
        },
        "field_metadata_extended:field_sci_author:field_name" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "field_metadata_extended:field_sci_author:field_sci_author" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "paragraphs_item"
        },
        "field_metadata_extended:field_sci_author:field_sci_author_name" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "field_metadata_extended:field_sci_author_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_metadata_extended:field_sci_fundref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resources:author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_resources:field_author" : { "type" : "list\\u003Cstring\\u003E" },
        "field_resources:field_format" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_resources:field_license" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "og_group_ref" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 0
          }
        },
        "panelizer" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "mode" : "search_result" }
        }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : { "fields" : [], "exceptions" : "texan=texa" }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong class=\\u0022highlight-yellow\\u0022\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
