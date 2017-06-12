## Microservices

Microservices is a suite of Drupal features (prefixed by ms_) which have been created in the context of the
Humanitarian Hub and can be reused by other entities to easily integrate taxonomies which are pulled and
synchronized from sites which belong to the Humanitarian Hub.

More documentation concerning the full suite of modules can be found [here](https://github.com/un-ocha/ms_core).

This module provides a local taxonomy (ms_local_groups) which content is synchronized with the list of local clusters and working groups available in [https://www.humanitarianresponse.info/api/v1.0/bundles](https://www.humanitarianresponse.info/api/v1.0/bundles). The Humanitarianresponse ID of the bundles is stored locally and used as a unique key to update the terms in the local taxonomy with the terms which come from [https://www.humanitarianresponse.info/api/v1.0/bundles](https://www.humanitarianresponse.info/api/v1.0/bundles).
