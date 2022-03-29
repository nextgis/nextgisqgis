################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
################################################################################
# Copyright (C) 2017-2022, NextGIS <info@nextgis.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
################################################################################

#####################################################
# Don't forget to include output directory, otherwise
# the UI file won't be wrapped!
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/external/kdbush/include
  ${CMAKE_SOURCE_DIR}/src/test
)

if(HAVE_OPENCL)
    include_directories(SYSTEM ${OpenCL_INCLUDE_DIRS})
endif()

#############################################################
# Tests:

set(TESTS
 testcontrastenhancements.cpp
 testqgis.cpp
 testqgs25drenderer.cpp
 testqgsannotationitemregistry.cpp
 testqgsapplication.cpp
 #testqgsarcgisrestutils.cpp
 testqgsauthcertutils.cpp
 testqgsauthconfig.cpp
 testqgsauthcrypto.cpp
 testqgsauthmanager.cpp
 testqgsblendmodes.cpp
 #testqgsbrowsermodel.cpp
 #testqgsbrowserproxymodel.cpp
 testqgscadutils.cpp
 testqgscallout.cpp
 testqgscalloutregistry.cpp
 testqgscentroidfillsymbol.cpp
 testqgsclipper.cpp
 testqgscolorscheme.cpp
 testqgscolorschemeregistry.cpp
 testqgscompositionconverter.cpp
 testqgsconnectionpool.cpp
 testqgscoordinatereferencesystemregistry.cpp
 testqgscoordinatetransform.cpp
 testqgscopyfiletask.cpp
 testqgscredentials.cpp
 testqgscurve.cpp
 testqgsdatadefinedsizelegend.cpp
 testqgsdataitem.cpp
 testqgsdatasourceuri.cpp
 testqgsdiagram.cpp
 testqgsdistancearea.cpp
 #testqgsdxfexport.cpp
 testqgsellipsemarker.cpp
 testqgsexpression.cpp
 testqgsexpressioncontext.cpp
 testqgsfeature.cpp
 testqgsfeaturerequest.cpp
 testqgsfield.cpp
 testqgsfields.cpp
 testqgsfilledmarker.cpp
 testqgsfontmarker.cpp
 testqgsfontutils.cpp
 testqgsgdalprovider.cpp
 testqgsgdalutils.cpp
 testqgsgenericspatialindex.cpp
 testqgsgeometryimport.cpp
 #testqgsgeonodeconnection.cpp
 testqgsgeopdfexport.cpp
 testqgsgml.cpp
 testqgsgradients.cpp
 testqgsgraduatedsymbolrenderer.cpp
 testqgshistogram.cpp
 testqgshstoreutils.cpp
 testqgshttpheaders.cpp
 testqgsimagecache.cpp
 testqgsimageoperation.cpp
 testqgsinternalgeometryengine.cpp
 testqgsinvertedpolygonrenderer.cpp
 testqgsjsonutils.cpp
 testqgslabelingengine.cpp
 testqgslayerdefinition.cpp
 testqgslayertree.cpp
 testqgslayout.cpp
 testqgslayoutatlas.cpp
 testqgslayoutcontext.cpp
 testqgslayoutexporter.cpp
 testqgslayoutgeopdfexport.cpp
 testqgslayouthtml.cpp
 testqgslayoutitem.cpp
 testqgslayoutitemgroup.cpp
 testqgslayoutlabel.cpp
 testqgslayoutmanualtable.cpp
 testqgslayoutmap.cpp
 testqgslayoutmapgrid.cpp
 testqgslayoutmapoverview.cpp
 testqgslayoutmodel.cpp
 testqgslayoutmultiframe.cpp
 testqgslayoutobject.cpp
 testqgslayoutpage.cpp
 testqgslayoutpicture.cpp
 testqgslayoutpolyline.cpp
 testqgslayoutscalebar.cpp
 testqgslayoutshapes.cpp
 testqgslayouttable.cpp
 testqgslayoutunits.cpp
 testqgslayoututils.cpp
 testqgslegendrenderer.cpp
 testqgslinefillsymbol.cpp
 testqgsmapdevicepixelratio.cpp
 testqgsmaplayer.cpp
 testqgsmaplayerstylemanager.cpp
 testqgsmaprenderercache.cpp
 testqgsmaprendererjob.cpp
 testqgsmaprotation.cpp
 testqgsmapsettings.cpp
 testqgsmapsettingsutils.cpp
 testqgsmapthemecollection.cpp
 testqgsmaptopixel.cpp
 testqgsmaptopixelgeometrysimplifier.cpp
 testqgsmarkerlinesymbol.cpp
 testqgsmesh3daveraging.cpp
 testqgsmesheditor.cpp
 testqgsmeshlayer.cpp
 testqgsmeshlayerinterpolator.cpp
 testqgsmeshlayerrenderer.cpp
 testqgsmimedatautils.cpp
 testqgsnetworkaccessmanager.cpp
 testqgsnetworkcontentfetcher.cpp
 testqgsnewsfeedparser.cpp
 #testqgsofflineediting.cpp
 testqgsogcutils.cpp
 testqgsogrprovider.cpp
 testqgsogrutils.cpp
 testqgsoverlayexpression.cpp
 testqgspagesizeregistry.cpp
 testqgspainteffect.cpp
 testqgspainteffectregistry.cpp
 testqgspallabeling.cpp
 testqgspointcloudattribute.cpp
 testqgspointcloudrendererregistry.cpp
 testqgspointlocator.cpp
 testqgspointpatternfillsymbol.cpp
 testqgspostgresstringutils.cpp
 testqgsproject.cpp
 testqgsprojectstorage.cpp
 testqgsprojutils.cpp
 testqgsproperty.cpp
 testqgsprovidermetadata.cpp
 testqgsrange.cpp
 testqgsrasterblock.cpp
 testqgsrastercontourrenderer.cpp
 testqgsrasterdataprovidertemporalcapabilities.cpp
 testqgsrasterfilewriter.cpp
 testqgsrasterfill.cpp
 testqgsrasteriterator.cpp
 testqgsrasterlayer.cpp
 testqgsrasterlayertemporalproperties.cpp
 testqgsrastermarker.cpp
 testqgsrastersublayer.cpp
 testqgsrelationreferencefieldformatter.cpp
 testqgsrenderers.cpp
 testqgsrulebasedrenderer.cpp
 testqgsruntimeprofiler.cpp
 testqgssettings.cpp
 testqgssettingsentry.cpp
 testqgssettingsregistry.cpp
 testqgsshapeburst.cpp
 testqgssimplemarker.cpp
 testqgssimplifymethod.cpp
 testqgssnappingutils.cpp
 testqgsspatialindex.cpp
 #testqgsspatialindexkdbush.cpp
 testqgssqliteexpressioncompiler.cpp
 testqgssqliteutils.cpp
 testqgsstatisticalsummary.cpp
 testqgsstoredexpressionmanager.cpp
 testqgsstringutils.cpp
 testqgsstyle.cpp
 testqgssvgcache.cpp
 testqgssvgmarker.cpp
 testqgssymbol.cpp
 testqgstaskmanager.cpp
 testqgstemporalnavigationobject.cpp
 testqgstemporalproperty.cpp
 testqgstemporalrangeobject.cpp
 testqgstiledownloadmanager.cpp
 testqgstracer.cpp
 testqgstranslateproject.cpp
 testqgstriangularmesh.cpp
 testqgsvaluerelationfieldformatter.cpp
 testqgsvector.cpp
 testqgsvectordataprovider.cpp
 testqgsvectorfilewriter.cpp
 testqgsvectorlayer.cpp
 testqgsvectorlayercache.cpp
 testqgsvectorlayerjoinbuffer.cpp
 testqgsvectorlayerutils.cpp
 #testqgsvectortilelayer.cpp
 #testqgsvectortileconnection.cpp
 #testqgsvectortileutils.cpp
 #testqgsvectortilewriter.cpp
 testqgstiles.cpp
 testqgsweakrelation.cpp
 testqgsziputils.cpp
 testqobjectuniqueptr.cpp
 testziplayer.cpp
)

if(WITH_QTWEBKIT)
  set(TESTS ${TESTS})
endif()

if(HAVE_OPENCL)
  set(TESTS ${TESTS}
    testqgsopenclutils.cpp
     )
endif()

foreach(TESTSRC ${TESTS})
    add_qgis_test( ${TESTSRC} MODULE core LINKEDLIBRARIES ${NG_PREFIX}qgis_core)
endforeach(TESTSRC)

add_qgis_test(testqgscoordinatereferencesystem.cpp MODULE core LINKEDLIBRARIES ${NG_PREFIX}qgis_core DEPENDENCIES synccrsdb )

if (ENABLE_PGTEST)
  SET_TESTS_PROPERTIES(test_core_vectorlayerjoinbuffer PROPERTIES LABELS "POSTGRES")
endif()

add_subdirectory(geometry)
