<?php
/**
 * @file
 * dkan_sci_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dkan_sci_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_pages
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets__panel_context_5d1ff0cd-89a3-4719-8889-310bedcf90e7"] = (object) array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'page_datasets__panel_context_5d1ff0cd-89a3-4719-8889-310bedcf90e7',
      'task' => 'page',
      'subtask' => 'datasets',
      'handler' => 'panel_context',
      'weight' => -2,
      'conf' => array(
        'title' => 'DKAN Sci',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'body_classes_to_remove' => '',
        'body_classes_to_add' => '',
        'css_id' => '',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(),
        'access' => array(
          'logic' => 'and',
          'plugins' => array(
            0 => array(
              'name' => 'php',
              'settings' => array(
                'description' => 'dkan_topics is enabled',
                'php' => 'if(module_exists(\'dkan_topics\')) {
                                                                            return TRUE;
                                                                            }',
              ),
              'not' => FALSE,
            ),
          ),
        ),
        'name' => '',
        'display' => unserialize('O:14:"panels_display":18:{s:4:"args";a:0:{}s:7:"content";a:10:{s:40:"new-21da7e02-6a15-4def-bab9-9ab9c7c97696";O:8:"stdClass":14:{s:3:"pid";s:40:"new-21da7e02-6a15-4def-bab9-9ab9c7c97696";s:5:"panel";s:11:"contentmain";s:4:"type";s:11:"views_panes";s:7:"subtype";s:28:"dkan_sci_search-panel_pane_1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:0:{}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"21da7e02-6a15-4def-bab9-9ab9c7c97696";}s:40:"new-2c932ced-19c0-4924-9061-7e468951f10f";O:8:"stdClass":14:{s:3:"pid";s:40:"new-2c932ced-19c0-4924-9061-7e468951f10f";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-zzisZMGGR0R4x7GT1t5dgYr6o4TxahQ4";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:22:"Filter by Content Type";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"2c932ced-19c0-4924-9061-7e468951f10f";}s:40:"new-9bb5e53e-ba51-4521-9f72-47dbed64510b";O:8:"stdClass":14:{s:3:"pid";s:40:"new-9bb5e53e-ba51-4521-9f72-47dbed64510b";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-fW7nO9zfJJdVSfIrHovvto8cPDt857bs";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:19:"Filter by Publisher";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:1;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9bb5e53e-ba51-4521-9f72-47dbed64510b";}s:40:"new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11";O:8:"stdClass":14:{s:3:"pid";s:40:"new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-fgJd3L6zhrCtitSOlWH7kb2eqHjjZmc6";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:34:"Filter by Ag Data Commons Keywords";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:2;s:5:"locks";a:0:{}s:4:"uuid";s:36:"2e30ce9c-f94c-4d1f-9eee-e945acc6fc11";}s:40:"new-ef95d96f-7859-412f-a127-05384769ed81";O:8:"stdClass":14:{s:3:"pid";s:40:"new-ef95d96f-7859-412f-a127-05384769ed81";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-AXUHJ471FXXJhKllDC1HUakiZC11qo8v";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:24:"Filter by Funding Source";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:3;s:5:"locks";a:0:{}s:4:"uuid";s:36:"ef95d96f-7859-412f-a127-05384769ed81";}s:40:"new-fc832d2f-9b2e-4d3d-978f-3d4689712036";O:8:"stdClass":14:{s:3:"pid";s:40:"new-fc832d2f-9b2e-4d3d-978f-3d4689712036";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-XqPO2VhjVQge73r6F1jfMBlm1t1Dz4E1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:25:"Filter by Resource Format";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:4;s:5:"locks";a:0:{}s:4:"uuid";s:36:"fc832d2f-9b2e-4d3d-978f-3d4689712036";}s:40:"new-581a76c1-09f6-430c-9504-6ec56f7d526d";O:8:"stdClass":14:{s:3:"pid";s:40:"new-581a76c1-09f6-430c-9504-6ec56f7d526d";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-aHfXVeMRImNbarH00aqILB20kpCfO6gU";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:28:"Filter by User Supplied Tags";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:5;s:5:"locks";a:0:{}s:4:"uuid";s:36:"581a76c1-09f6-430c-9504-6ec56f7d526d";}s:40:"new-449181e5-af96-493d-84a2-9d206509e490";O:8:"stdClass":14:{s:3:"pid";s:40:"new-449181e5-af96-493d-84a2-9d206509e490";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-LeKDPflArwbla6ejaP5WRlVMKEnP2jW8";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:16:"Filter by Author";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:6;s:5:"locks";a:0:{}s:4:"uuid";s:36:"449181e5-af96-493d-84a2-9d206509e490";}s:40:"new-60069629-8fc1-450d-bc04-42275f841874";O:8:"stdClass":14:{s:3:"pid";s:40:"new-60069629-8fc1-450d-bc04-42275f841874";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-bfw0tqJwZnrMbJ7WJ2MIh322HZssSUED";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:17:"Filter by License";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:7;s:5:"locks";a:0:{}s:4:"uuid";s:36:"60069629-8fc1-450d-bc04-42275f841874";}s:40:"new-9dccb6e4-180b-4c99-8037-c7a9fd9229de";O:8:"stdClass":14:{s:3:"pid";s:40:"new-9dccb6e4-180b-4c99-8037-c7a9fd9229de";s:5:"panel";s:7:"sidebar";s:4:"type";s:5:"block";s:7:"subtype";s:41:"facetapi-S1UOZGxHcdgLDtZaE4EL8f74GzrzoY3q";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:3:{s:14:"override_title";i:1;s:19:"override_title_text";s:24:"Filter by Funding Source";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:8;s:5:"locks";a:0:{}s:4:"uuid";s:36:"9dccb6e4-180b-4c99-8037-c7a9fd9229de";}}s:6:"panels";a:2:{s:11:"contentmain";a:1:{i:0;s:40:"new-21da7e02-6a15-4def-bab9-9ab9c7c97696";}s:7:"sidebar";a:9:{i:0;s:40:"new-2c932ced-19c0-4924-9061-7e468951f10f";i:1;s:40:"new-9bb5e53e-ba51-4521-9f72-47dbed64510b";i:2;s:40:"new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11";i:3;s:40:"new-ef95d96f-7859-412f-a127-05384769ed81";i:4;s:40:"new-fc832d2f-9b2e-4d3d-978f-3d4689712036";i:5;s:40:"new-581a76c1-09f6-430c-9504-6ec56f7d526d";i:6;s:40:"new-449181e5-af96-493d-84a2-9d206509e490";i:7;s:40:"new-60069629-8fc1-450d-bc04-42275f841874";i:8;s:40:"new-9dccb6e4-180b-4c99-8037-c7a9fd9229de";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:12:"radix_bryant";s:15:"layout_settings";a:1:{s:5:"items";a:5:{s:6:"canvas";a:4:{s:4:"type";s:3:"row";s:8:"contains";s:6:"column";s:8:"children";a:1:{i:0;s:4:"main";}s:6:"parent";N;}s:4:"main";a:5:{s:4:"type";s:6:"column";s:5:"width";i:100;s:10:"width_type";s:1:"%";s:8:"children";a:1:{i:0;s:8:"main-row";}s:6:"parent";s:6:"canvas";}s:8:"main-row";a:4:{s:4:"type";s:3:"row";s:8:"contains";s:6:"region";s:8:"children";a:2:{i:0;s:12:"sidebar_left";i:1;s:6:"center";}s:6:"parent";s:4:"main";}s:6:"center";a:5:{s:4:"type";s:6:"region";s:5:"title";s:6:"Center";s:5:"width";i:50;s:10:"width_type";s:1:"%";s:6:"parent";s:8:"main-row";}s:12:"sidebar_left";a:6:{s:4:"type";s:6:"region";s:5:"title";s:12:"sidebar-left";s:5:"width";i:50;s:10:"width_type";s:1:"%";s:6:"parent";s:8:"main-row";s:5:"class";s:0:"";}}}s:14:"panel_settings";a:2:{s:14:"style_settings";a:8:{s:7:"default";N;s:6:"center";N;s:12:"sidebar_left";N;s:4:"left";N;s:6:"middle";N;s:5:"right";N;s:11:"contentmain";N;s:7:"sidebar";N;}s:7:"sidebar";a:1:{s:5:"style";s:5:"naked";}}s:5:"cache";a:0:{}s:5:"title";s:0:"";s:4:"uuid";s:36:"b1ebec5e-aed7-4ebc-82de-7e9eac72c35a";s:12:"storage_type";s:12:"page_manager";s:10:"storage_id";s:65:"page_datasets__panel_context_5d1ff0cd-89a3-4719-8889-310bedcf90e7";s:10:"hide_title";i:0;s:10:"title_pane";s:1:"0";}'),
      ),
    );
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-0541c9a5-2e8c-488f-8db4-4cd064bdc903|position"] = 6;
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-1ee5d84c-1ea4-4726-ba4d-291779f9c493|access|plugins"] = array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 1,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  );
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8"] = (object) array(
      'pid' => 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8',
      'panel' => 'sidebar',
      'type' => 'block',
      'subtype' => 'facetapi-wsVI1ENUXwf4Rz08n9fg2WvfQ0Gs5h2a',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 1,
        'override_title_text' => 'Author',
        'override_title_heading' => 'h2',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => array(
          'pane_title' => '%title',
          'pane_collapsed' => 1,
          'pane_empty_check' => 0,
        ),
        'style' => 'collapsible',
      ),
      'css' => array(
        'css_id' => '',
        'css_class' => 'pane-facetapi pane-block',
      ),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '51f2a5b5-ab6a-474a-b0f8-4a0b297160a8',
    );
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|content|new-a5e9ea2e-539e-45aa-89de-f94f927b22ab"] = (object) array(
      'pid' => 'new-a5e9ea2e-539e-45aa-89de-f94f927b22ab',
      'panel' => 'contentmain',
      'type' => 'views_panes',
      'subtype' => 'dkan_datasets-panel_pane_2',
      'shown' => TRUE,
      'access' => array(
        'plugins' => array(
          0 => array(
            'name' => 'role',
            'settings' => array(
              'rids' => array(
                0 => 2,
                1 => 200153887,
                2 => 3,
                3 => 48325815,
                4 => 110661005,
                5 => 210770034,
                6 => 190180509,
                7 => 169051924,
                8 => 57821158,
                9 => 190826733,
                10 => 5747148,
                11 => 228587613,
              ),
            ),
            'context' => 'logged-in-user',
            'not' => FALSE,
          ),
        ),
      ),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'a5e9ea2e-539e-45aa-89de-f94f927b22ab',
    );
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|contentmain|1"] = 'new-a5e9ea2e-539e-45aa-89de-f94f927b22ab';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|sidebar|5"] = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|panels|sidebar|6"] = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $overrides["page_manager_pages.datasets.default_handlers|page_datasets_panel_context|conf|display|title"] = '';

  // Exported overrides for: search_api_index
  $overrides["search_api_index.datasets.options|fields|field_metadata_extended:field_sci_author_id_type:name"] = array(
    'type' => 'list<string>',
  );
  $overrides["search_api_index.datasets.options|fields|field_metadata_extended:field_sci_author_name"] = array(
    'type' => 'list<string>',
  );

 return $overrides;
}
