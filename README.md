# NextGIS QGIS

## Intro

:four_leaf_clover: NextGIS QGIS build using NextGIS Borsch.

This simplified and reorganized repository of original [QGIS](https://github.com/qgis/qgis)
with NextGIS additions needed by network installer.

## Update sources

To update sources from original QGIS repository:

1. Update diff files from pevious release:

```bash
python create_patch_batch.py --src_dir <some dir> --dst_dir <some dir>
```

2. Get latest release from [QGIS Repository releases](https://github.com/qgis/QGIS/releases)
3. Extract it to `<path to QGIS sources>`
4. Execute command in [borsch opt directory](https://github.com/nextgis-borsch/borsch/tree/master/opt):

```bash
python tools.py organize --src /<path to QGIS sources>/QGIS --dst_path <path to NextGIS QGIS sources>
```

In [opt directory](https://github.com/nextgis/nextgisqgis/tree/master/opt) of this
repository there is several files which interfere on
sources merging process:

* [folders.csv](https://github.com/nextgis/nextgisqgis/blob/master/opt/folders.csv) - list of original directories to merge
* [postprocess.py](https://github.com/nextgis/nextgisqgis/blob/master/opt/postprocess.py) - script executed after successfully merging (name is constant for tools.py)

Postprocess copying files (with paths) from ```opt/overwrite``` to the root of
repository. Files with same names and paths overwrite.
For ```opt/patches``` directory all patch files apply.

## Customization details

The only few files of original sources were change:

* main.cpp - the entry point of QGIS
* qgisapp.h - private members made protected, several methods made virtual
* qgisapplication.h - private members made protected, several methods made virtual
* qgisapp.ui - remove some menus and buttons

The full list of files can be found in opt/overwrite directory.

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

1. Add component path to `folders.csv` or remove skip mark if path already in this file. Check the all extensions/file names are in this row.
2. Add or modify CMakeLists.txt. For plugins you only need to add new directory name to plugins list (i.e. [providers](https://github.com/nextgis/nextgisqgis/blob/master/src/providers/CMakeLists.txt)).
3. Check additional resources (images, databases or other files) which needed by component, are imported from original sources and install in target system via cmake install target.
4. Add modified files to list in `create_patch_batch.py`.

Some dependencies are removed:

* Flex and Bison not needed to build QGIS. Only to update/regenerate flex and byson lexer/parser files. To do it use following command

```bash
cmake -DOSX_FRAMEWORK=ON -DWITH_BINDINGS=ON -DPREPARE_ONLY=ON -DCMAKE_OSX_SYSROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -DCMAKE_OSX_DEPLOYMENT_TARGET=10.14 -DWITH_PROJ_EXTERNAL=ON -DWITH_GDAL_EXTERNAL=ON -DWITH_Qt5_EXTERNAL=ON -DWITH_GEOS_EXTERNAL=ON  -DWITH_Qca_EXTERNAL=ON -DWITH_QtKeychain_EXTERNAL=ON -DWITH_SpatialIndex_EXTERNAL=ON -DWITH_SQLite3_EXTERNAL=ON -DWITH_Spatialite_EXTERNAL=ON -DWITH_LIBZIP_EXTERNAL=ON -DWITH_EXPAT_EXTERNAL=ON ..
cmake --build . --config release --target prepare_parser
cmake --build . --config release --target synccrsdb
```

* Spatial reference system database already filled and not generate in normal build.

## Build

### Mac OS X

```bash
cmake -DOSX_FRAMEWORK=ON -DWITH_BINDINGS=ON -DCMAKE_OSX_SYSROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -DCMAKE_OSX_DEPLOYMENT_TARGET=10.14 -DWITH_PROJ_EXTERNAL=ON -DWITH_GDAL_EXTERNAL=ON -DWITH_Qt5_EXTERNAL=ON -DWITH_GEOS_EXTERNAL=ON  -DWITH_Qca_EXTERNAL=ON -DWITH_QtKeychain_EXTERNAL=ON -DWITH_SpatialIndex_EXTERNAL=ON -DWITH_SQLite3_EXTERNAL=ON -DWITH_Spatialite_EXTERNAL=ON -DWITH_LIBZIP_EXTERNAL=ON -DWITH_EXPAT_EXTERNAL=ON -DWITH_Qwt_EXTERNAL=ON -DWITH_QScintilla_EXTERNAL=ON -DWITH_GSL_EXTERNAL=ON ..
```

### Windows

```bash
cmake -DWITH_EXPAT_EXTERNAL=ON -DWITH_GDAL_EXTERNAL=ON -DWITH_GEOS_EXTERNAL=ON \
-DWITH_GSL_EXTERNAL=ON -DWITH_LibXml2_EXTERNAL=ON -DWITH_PostgreSQL_EXTERNAL=ON \
-DWITH_PROJ_EXTERNAL=ON -DWITH_Qca_EXTERNAL=ON -DWITH_Qscintilla_EXTERNAL=ON \
-DWITH_Qwt_EXTERNAL=ON -DWITH_SpatialIndex_EXTERNAL=ON -DWITH_Spatialite_EXTERNAL=ON \
-DWITH_SQLite3_EXTERNAL=ON -DWITH_SIP_EXTERNAL=ON -DWITH_Qt4_EXTERNAL=ON \
-DWITH_BINDINGS=ON -DWITH_PyQt4_EXTERNAL=ON -DWITH_Qsci_EXTERNAL=ON -DWITH_ZLIB_EXTERNAL=ON ..
```

### Linux

```bash
cmake -DWITH_EXPAT=ON -DWITH_GDAL=ON -DWITH_GEOS=ON -DWITH_GSL=ON -DWITH_LibXml2=ON \
-DWITH_PostgreSQL=ON -DWITH_PROJ4=ON -DWITH_Qca=ON -DWITH_Qscintilla=ON -DWITH_Qwt=ON \
-DWITH_SpatialIndex=ON -DWITH_Spatialite=ON -DWITH_SQLite3=ON -DWITH_SIP=ON \
-DWITH_Qt4=ON -DWITH_BINDINGS=ON -DWITH_PyQt4=ON -DWITH_Qsci=ON -DWITH_ZLIB=ON -DWITH_BINDINGS=ON ..
```

## License

All scripts are licensed under GNU GPL v2. See COPYING file.

![License](https://img.shields.io/badge/License-GPL%20v2-blue.svg?maxAge=2592000)

## Commercial support

Need to fix a bug or add a feature to NextGIS installer? We provide custom
development and support for this software.
[Contact us](http://nextgis.ru/en/contact/) to discuss options!

[![http://nextgis.com](http://nextgis.ru/img/nextgis.png)](http://nextgis.com)

## TODO

1. Remove dupliation with RTree.h and spatialindex.
2. Change poly2tri to cgal from gdal
3. Change libzip to gdal vsizip
4. ?

python /Volumes/Data/work/projects/borsch/borsch/opt/tools.py organize --src /Volumes/Data/work/projects/borsch/original/QGIS-final-3_24_0 --dst_path /Volumes/Data/work/projects/desktop/qgis3

python /Volumes/Data/work/projects/desktop/qgis3/scripts/create_patch_batch.py --src_dir /Volumes/Data/work/projects/borsch/original/QGIS-final-3_24_0 --dst_dir /Volumes/Data/work/projects/desktop/qgis3

cmake --build . --config Release

cmake -DOSX_FRAMEWORK=ON -DCMAKE_OSX_SYSROOT=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -DCMAKE_OSX_DEPLOYMENT_TARGET=10.14 -DWITH_PROJ_EXTERNAL=ON -DWITH_GDAL_EXTERNAL=ON -DWITH_Qt5_EXTERNAL=ON -DWITH_GEOS_EXTERNAL=ON  -DWITH_Qca_EXTERNAL=ON -DWITH_QtKeychain_EXTERNAL=ON -DWITH_SpatialIndex_EXTERNAL=ON -DWITH_SQLite3_EXTERNAL=ON -DWITH_Spatialite_EXTERNAL=ON -DWITH_LIBZIP_EXTERNAL=ON -DWITH_EXPAT_EXTERNAL=ON -DWITH_Qwt_EXTERNAL=ON -DWITH_QScintilla_EXTERNAL=ON -DWITH_AUTH=OFF -DWITH_ANALYSIS=OFF -DWITH_DESKTOP=OFF -DWITH_3D=OFF -DWITH_QGIS_PROCESS=OFF -DWITH_BINDINGS=OFF ../../../desktop/qgis3

