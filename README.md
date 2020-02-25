# DKAN Science Metadata

This module adds Science Metadata related paragraph bundles to the DKAN dataset content type, and Dkan Sci Search index logic.

More documentation coming soon...

## Submodules

### DKAN Sci Author (modules/dkan_sci_author)

- Provides a child paragraph bundle for adding authors. Includes Author ID, Author ID Type (ORCID, Google Scholar, ResearcherID, Scopus Author ID, USDA), Author Name, and Is Organization fields. Validates ORCID IDs and retrieve biography information to populate name field. ORCID IDs

### DKAN Sci Citation (modules/dkan_sci_citation)

- Support for DOI-based citations. Adds a citation bundle that allows adding via either a free text field or a DOI. If DOI is used, the full citation is retrieved from CrossRef and displayed properly on the dataset page. See module README for details.

This module is the result of a joint partnership between [CivicActions](https://civicactions.com) and the [US Department of Agriculture](https://usda.gov), as part of the development of the [Ag Data Commons](https://data.nal.usda.gov/).