# DKAN Science Citations

Add citations via DOI, Bibtex or free text.

## Installation

You must install some dependencies with [Composer](https://getcomposer.org/) for this module to work. Please run 

```
composer install
```

from the dkan_sci_citation root folder (probably _sites/all/modules/contrib/dkan_sci_metadata/modules/dkan_sci_citation_ in your site docroot) before using.

## Adding additional styles

This module supports citation rendering in many common styles. Too add additional styles in .csl format:

- Add item name as indicated by `.csl` file to form options array in `dkan_sci_citation_form()`
- Add `.csl` file to `./includes/vendor/citation-style-language/styles-distribution`
