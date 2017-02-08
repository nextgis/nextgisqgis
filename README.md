# NextGIS QGIS
:four_leaf_clover: NextGIS build of QGIS

This simplified and reorganized repository of original [QGIS](https://github.com/qgis/qgis) with NextGIS additions needed by network installer.

# Update sources

To update sources from original QGIS repository execute command in [borsch opt
directory](https://github.com/nextgis-borsch/borsch/tree/master/opt):

```bash
> python tools.py organize --src /<path to QGIS sources>/QGIS --dst_name qgis
```

In [opt directory](https://github.com/nextgis/nextgisqgis/tree/master/opt) of this repository there is several files which interfere on
sources merging process:

* [folders.csv](https://github.com/nextgis/nextgisqgis/blob/master/opt/folders.csv) - list of original directories to merge
* [postprocess.py](https://github.com/nextgis/nextgisqgis/blob/master/opt/postprocess.py) - script executed after successfully merging (name is constant for tools.py)

Postprocess copies files (with paths) from ```opt/overwrite``` to the root of
repository. Files with same names and paths overwrite.

# Customization details

The only few files of original sources changed:

* main.cpp - the entry point of QGIS
* qgisapp.h - private members made protected, several methods made virtual
* qgisapplication.h - private members made protected, several methods made virtual
* qgisapp.ui - remove some menus and buttons

There are special files with NextGIS customization:

* [src/app/ngcustomization.cpp](https://github.com/nextgis/nextgisqgis/blob/master/src/app/ngcustomization.cpp)
* [src/app/ngcustomization.h](https://github.com/nextgis/nextgisqgis/blob/master/src/app/ngcustomization.h)
* [src/app/ngqgsapplication.cpp](https://github.com/nextgis/nextgisqgis/blob/master/src/app/ngqgsapplication.cpp)
* [src/app/ngqgsapplication.h](https://github.com/nextgis/nextgisqgis/blob/master/src/app/ngqgsapplication.h)

NGQgsApplication class inherited from QgsApplication. The NGQgsApplication class
instantiated in main.cpp. The QgsApplication methods are overridden in NGQgsApplication.

NGQgisApp class inherited from QgisApp. The NGQgisApp class
instantiated in main.cpp. The QgisApp methods are overridden in NGQgisApp.

To customize QGIS one have to modify the NGQgsApplication and NGQgisApp via
overriding base class methods and adding own classes. It's not recommended to
change QGIS sources as they will be overwritten next merge sources turn.

To add some QGIS components:

1. Add component path to folders.csv or remove skip mark if path already in this file. Check the all extensions/file names are in this row.
2. Add or modify CMakeLists.txt. For plugins you only need to add new directory name to plugins list (i.e. [providers](https://github.com/nextgis/nextgisqgis/blob/master/src/providers/CMakeLists.txt)).
3. Check additional resources (images, databases or other files) which needed by component, are imported from original sources and install in target system via cmake install target.   

Some dependencies are removed:

* Flex and Bison not needed to build QGIS. Only to update/regenerate flex and byson lexer/parser files. To do it use this command ```cmake --build . --config release --target prepare_parser```
* Spatial reference system database already filled and not generate. Special target to generate this DB will be added in future. 

# License

All scripts are licensed under GNU GPL v.2.
[![License](https://img.shields.io/badge/License-GPL v2-blue.svg?maxAge=2592000)]()

# Commercial support

Need to fix a bug or add a feature to NextGIS installer? We provide custom
development and support for this software.
[Contact us](http://nextgis.ru/en/contact/) to discuss options!

[![http://nextgis.com](http://nextgis.ru/img/nextgis.png)](http://nextgis.com)
