# About this module

This module adds Science Metadata related paragraph bundles to the DKAN dataset content type, and Dkan Sci Search index logic.

## Metadata Paragraph Bundles
- Science Author: Includes Author ID, Author ID Type (ORCID, Google Scholar, ResearcherID, Scopus Author ID, USDA), Author Name, and Is Organization fields. Validates ORCID IDs and retrieve biography information to populate name field.

## Submodules
### DKAN Sci search (modules/dkan_sci_search)
- Provides solr index that allows for file attachment indexing. At present, the metadata source content type is the only node type
having files indexed. These attachments are associated with dataset content nodes via entityreferences.
