<?php
/**
 * @file
 * dkan_sci_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dkan_sci_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Datasets';
  $page->admin_description = '';
  $page->path = 'search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel_context_9cd2f118-768d-4992-a490-2bbb021a0137';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
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
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar_left' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1ebec5e-aed7-4ebc-82de-7e9eac72c35a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search__panel_context_9cd2f118-768d-4992-a490-2bbb021a0137';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-21da7e02-6a15-4def-bab9-9ab9c7c97696';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dkan_sci_search-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '21da7e02-6a15-4def-bab9-9ab9c7c97696';
  $display->content['new-21da7e02-6a15-4def-bab9-9ab9c7c97696'] = $pane;
  $display->panels['contentmain'][0] = 'new-21da7e02-6a15-4def-bab9-9ab9c7c97696';
  $pane = new stdClass();
  $pane->pid = 'new-2c932ced-19c0-4924-9061-7e468951f10f';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-zzisZMGGR0R4x7GT1t5dgYr6o4TxahQ4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Content Type',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2c932ced-19c0-4924-9061-7e468951f10f';
  $display->content['new-2c932ced-19c0-4924-9061-7e468951f10f'] = $pane;
  $display->panels['sidebar'][0] = 'new-2c932ced-19c0-4924-9061-7e468951f10f';
  $pane = new stdClass();
  $pane->pid = 'new-9bb5e53e-ba51-4521-9f72-47dbed64510b';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fW7nO9zfJJdVSfIrHovvto8cPDt857bs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Publisher',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9bb5e53e-ba51-4521-9f72-47dbed64510b';
  $display->content['new-9bb5e53e-ba51-4521-9f72-47dbed64510b'] = $pane;
  $display->panels['sidebar'][1] = 'new-9bb5e53e-ba51-4521-9f72-47dbed64510b';
  $pane = new stdClass();
  $pane->pid = 'new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fgJd3L6zhrCtitSOlWH7kb2eqHjjZmc6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Ag Data Commons Keywords',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2e30ce9c-f94c-4d1f-9eee-e945acc6fc11';
  $display->content['new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11'] = $pane;
  $display->panels['sidebar'][2] = 'new-2e30ce9c-f94c-4d1f-9eee-e945acc6fc11';
  $pane = new stdClass();
  $pane->pid = 'new-fc832d2f-9b2e-4d3d-978f-3d4689712036';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-XqPO2VhjVQge73r6F1jfMBlm1t1Dz4E1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Resource Format',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fc832d2f-9b2e-4d3d-978f-3d4689712036';
  $display->content['new-fc832d2f-9b2e-4d3d-978f-3d4689712036'] = $pane;
  $display->panels['sidebar'][3] = 'new-fc832d2f-9b2e-4d3d-978f-3d4689712036';
  $pane = new stdClass();
  $pane->pid = 'new-581a76c1-09f6-430c-9504-6ec56f7d526d';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-aHfXVeMRImNbarH00aqILB20kpCfO6gU';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by User Supplied Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '581a76c1-09f6-430c-9504-6ec56f7d526d';
  $display->content['new-581a76c1-09f6-430c-9504-6ec56f7d526d'] = $pane;
  $display->panels['sidebar'][4] = 'new-581a76c1-09f6-430c-9504-6ec56f7d526d';
  $pane = new stdClass();
  $pane->pid = 'new-60069629-8fc1-450d-bc04-42275f841874';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-bfw0tqJwZnrMbJ7WJ2MIh322HZssSUED';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by License',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '60069629-8fc1-450d-bc04-42275f841874';
  $display->content['new-60069629-8fc1-450d-bc04-42275f841874'] = $pane;
  $display->panels['sidebar'][5] = 'new-60069629-8fc1-450d-bc04-42275f841874';
  $pane = new stdClass();
  $pane->pid = 'new-dcb7c7c7-9578-49c4-80f4-600f77381504';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-VQzzjrVwjXM8Tz7lMfnLPawwB6ICa1Kn';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Collection',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'dcb7c7c7-9578-49c4-80f4-600f77381504';
  $display->content['new-dcb7c7c7-9578-49c4-80f4-600f77381504'] = $pane;
  $display->panels['sidebar'][6] = 'new-dcb7c7c7-9578-49c4-80f4-600f77381504';
  $pane = new stdClass();
  $pane->pid = 'new-11bb3fdb-dee3-4c9d-a8b9-b91a38ae0ee0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-YCus5IXtq7RwGRYVZ14KKrDlgl7Vmo5U';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Filter by Author',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '11bb3fdb-dee3-4c9d-a8b9-b91a38ae0ee0';
  $display->content['new-11bb3fdb-dee3-4c9d-a8b9-b91a38ae0ee0'] = $pane;
  $display->panels['sidebar'][7] = 'new-11bb3fdb-dee3-4c9d-a8b9-b91a38ae0ee0';
  $pane = new stdClass();
  $pane->pid = 'new-1d8b0e30-9657-4556-a1ea-1fbc5d5295b3';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-EC1nOjhUH4DrgbAef3R9cRq69GpW9HtT';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Funding Source',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '1d8b0e30-9657-4556-a1ea-1fbc5d5295b3';
  $display->content['new-1d8b0e30-9657-4556-a1ea-1fbc5d5295b3'] = $pane;
  $display->panels['sidebar'][8] = 'new-1d8b0e30-9657-4556-a1ea-1fbc5d5295b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel_context_1e323e28-07e3-4426-b553-506139caac2e';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'With Topics',
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
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar_left' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1ebec5e-aed7-4ebc-82de-7e9eac72c35a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search__panel_context_1e323e28-07e3-4426-b553-506139caac2e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dkan_datasets-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
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
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $display->content['new-1ee5d84c-1ea4-4726-ba4d-291779f9c493'] = $pane;
  $display->panels['contentmain'][0] = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $pane = new stdClass();
  $pane->pid = 'new-a5e9ea2e-539e-45aa-89de-f94f927b22ab';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dkan_datasets-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
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
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a5e9ea2e-539e-45aa-89de-f94f927b22ab';
  $display->content['new-a5e9ea2e-539e-45aa-89de-f94f927b22ab'] = $pane;
  $display->panels['contentmain'][1] = 'new-a5e9ea2e-539e-45aa-89de-f94f927b22ab';
  $pane = new stdClass();
  $pane->pid = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-guaQewLU3YsZiLS2mGWJqmw8ycXAVT0R';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Content Types',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 0,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $display->content['new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd'] = $pane;
  $display->panels['sidebar'][0] = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $pane = new stdClass();
  $pane->pid = 'new-51b9a740-77dd-44f7-8aa8-57d1728afbe7';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-EwrOFrHh7WdVteFiBTQYXfGlscW50MbI';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Topics',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 0,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '51b9a740-77dd-44f7-8aa8-57d1728afbe7';
  $display->content['new-51b9a740-77dd-44f7-8aa8-57d1728afbe7'] = $pane;
  $display->panels['sidebar'][1] = 'new-51b9a740-77dd-44f7-8aa8-57d1728afbe7';
  $pane = new stdClass();
  $pane->pid = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-dqCRnp6cKP1cSzAsNB6zqFtY9AVEa0mp';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $display->content['new-af542600-62f2-4baf-b2c3-12b9ee1d59ba'] = $pane;
  $display->panels['sidebar'][2] = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $pane = new stdClass();
  $pane->pid = 'new-549159dd-e073-4e10-9307-b13fad742409';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-yW6mJ3GaJF0LypnLPa433Bf9GI8QdWd9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Format',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '549159dd-e073-4e10-9307-b13fad742409';
  $display->content['new-549159dd-e073-4e10-9307-b13fad742409'] = $pane;
  $display->panels['sidebar'][3] = 'new-549159dd-e073-4e10-9307-b13fad742409';
  $pane = new stdClass();
  $pane->pid = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-VBBDnNWYupC3PxCnXOq4e4ds4sAU4W7s';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Publisher',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $display->content['new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345'] = $pane;
  $display->panels['sidebar'][4] = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $pane = new stdClass();
  $pane->pid = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-wsVI1ENUXwf4Rz08n9fg2WvfQ0Gs5h2a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Author',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $display->content['new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8'] = $pane;
  $display->panels['sidebar'][5] = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $pane = new stdClass();
  $pane->pid = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-y0bmt1wN50B9oCuMeoazc1hpKiMkSQ2A';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'License',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $display->content['new-0541c9a5-2e8c-488f-8db4-4cd064bdc903'] = $pane;
  $display->panels['sidebar'][6] = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel_context_bd7ca252-7a66-4813-9993-e486a36daa87';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Without Topics',
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
            'description' => 'dkan_topics is disabled',
            'php' => 'if(!module_exists(\'dkan_topics\')) {
return TRUE;
}',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar_left' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1ebec5e-aed7-4ebc-82de-7e9eac72c35a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search__panel_context_bd7ca252-7a66-4813-9993-e486a36daa87';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'dkan_datasets-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $display->content['new-1ee5d84c-1ea4-4726-ba4d-291779f9c493'] = $pane;
  $display->panels['contentmain'][0] = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
  $pane = new stdClass();
  $pane->pid = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-guaQewLU3YsZiLS2mGWJqmw8ycXAVT0R';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Content Types',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 0,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $display->content['new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd'] = $pane;
  $display->panels['sidebar'][0] = 'new-1946db71-2c78-4c13-8d68-fa4eb5d7b8fd';
  $pane = new stdClass();
  $pane->pid = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-dqCRnp6cKP1cSzAsNB6zqFtY9AVEa0mp';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Tags',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $display->content['new-af542600-62f2-4baf-b2c3-12b9ee1d59ba'] = $pane;
  $display->panels['sidebar'][1] = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
  $pane = new stdClass();
  $pane->pid = 'new-549159dd-e073-4e10-9307-b13fad742409';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-yW6mJ3GaJF0LypnLPa433Bf9GI8QdWd9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Format',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '549159dd-e073-4e10-9307-b13fad742409';
  $display->content['new-549159dd-e073-4e10-9307-b13fad742409'] = $pane;
  $display->panels['sidebar'][2] = 'new-549159dd-e073-4e10-9307-b13fad742409';
  $pane = new stdClass();
  $pane->pid = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-VBBDnNWYupC3PxCnXOq4e4ds4sAU4W7s';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Publisher',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $display->content['new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345'] = $pane;
  $display->panels['sidebar'][3] = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
  $pane = new stdClass();
  $pane->pid = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-wsVI1ENUXwf4Rz08n9fg2WvfQ0Gs5h2a';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Author',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $display->content['new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8'] = $pane;
  $display->panels['sidebar'][4] = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
  $pane = new stdClass();
  $pane->pid = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-y0bmt1wN50B9oCuMeoazc1hpKiMkSQ2A';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'License',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_title' => '%title',
      'pane_collapsed' => 1,
      'pane_empty_check' => 0,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-facetapi pane-block',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $display->content['new-0541c9a5-2e8c-488f-8db4-4cd064bdc903'] = $pane;
  $display->panels['sidebar'][5] = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
