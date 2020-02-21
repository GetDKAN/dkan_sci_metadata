# DKAN Science Citations

Add citations via DOI, Bibtex or free text.

## Installation

You must install some dependencies with [Composer](https://getcomposer.org/) for this module to work. Please run 

```
composer install
```

from the dkan_sci_citation root folder (probably _sites/all/modules/contrib/dkan_sci_metadata/modules/dkan_sci_citation_ in your site docroot) before using.

## Adding additional styles

This module supports citation rendering in many common styles. We are working on a better way to change the list of available styles, but currently we recommend: 

- Create a fork of https://github.com/citation-style-language/styles-distribution.git
- Remove all csl files except the ones you want to use
- Update this module's composer.json to pull the styles-distribution library from your fork.

## Attribution

The citation styling tools used in this module come from [CitationStyles.org](http://citationstyles.org/).