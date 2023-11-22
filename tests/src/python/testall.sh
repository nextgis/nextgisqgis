#!/bin/sh

#export BUILD_PATH=/home/user/develop/nextgisqgis/build
#export SOURCE_PATH=/home/user/develop/nextgisqgis

#FIXME
#export PYTHONPATH=$BUILD_PATH/output/python/:$/output/python/plugins:$SOURCE_PATH/tests/src/python
#export QGIS_PREFIX_PATH=$BUILD_PATH/output
#export LD_LIBRARY_PATH=$BUILD_PATH/output/lib

export QGIS_PREFIX_PATH=/usr/local
export LD_LIBRARY_PATH=/usr/local/lib

python3 testall.py
