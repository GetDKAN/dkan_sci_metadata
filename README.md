# DKAN Science Metadata

This module adds Science Metadata related paragraph bundles to the DKAN dataset content type, and Dkan Sci Search index logic.

More documentation coming soon...

## Submodules

### DKAN Sci Author (modules/dkan_sci_author)

- Provides a child paragraph bundle for adding authors. Includes Author ID, Author ID Type (ORCID, Google Scholar, ResearcherID, Scopus Author ID, USDA), Author Name, and Is Organization fields. Validates ORCID IDs and retrieve biography information to populate name field. ORCID IDs

### DKAN Sci Citation (modules/dkan_sci_citation)

- Support for DOI-based citations. Adds a citation bundle that allows adding via either a free text field or a DOI. If DOI is used, the full citation is retrieved from CrossRef and displayed properly on the dataset page. See module README for details.

## License

DKAN and related modules are freely-available under the ["GNU General Public License, version 3 or any later version"](https://www.gnu.org/licenses/gpl-3.0.html) license.

## Acknowledgements

Copyright 2017-2020 CivicActions, Inc.

This module was partially funded by the [US Department of Agriculture](https://usda.gov), as part of the development of the [Ag Data Commons](https://data.nal.usda.gov/).

Any opinions, findings, conclusion, or recommendations expressed in this publication are those of the author(s) and do not necessarily reflect the view of the US. Department of Agriculture.
