################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017, NextGIS <info@nextgis.com>
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

# Prepare_parser targets
add_flex_files(qgsexpressionlexer.ll qgssqlstatementlexer.ll)
# Disable warnings
if(MSVC)
  set_source_files_properties(flex_qgsexpressionlexer.cpp flex_qgssqlstatementlexer.cpp PROPERTIES COMPILE_FLAGS /W0)
else()
  set_source_files_properties(flex_qgsexpressionlexer.cpp flex_qgssqlstatementlexer.cpp PROPERTIES COMPILE_FLAGS -w)
endif()

add_bison_files(qgsexpressionparser.yy qgssqlstatementparser.yy)

# Default target
find_package(PythonInterp REQUIRED)

set(QGIS_CORE_SRCS
    symbology-ng/qgs25drenderer.cpp
  symbology-ng/qgsarrowsymbollayer.cpp
    symbology-ng/qgscategorizedsymbolrendererv2.cpp
    symbology-ng/qgscolorbrewerpalette.cpp
    symbology-ng/qgscptcityarchive.cpp
    symbology-ng/qgsellipsesymbollayerv2.cpp
    symbology-ng/qgsfillsymbollayerv2.cpp
    symbology-ng/qgsgeometrygeneratorsymbollayerv2.cpp
    symbology-ng/qgsgraduatedsymbolrendererv2.cpp
    symbology-ng/qgsheatmaprenderer.cpp
    symbology-ng/qgsinvertedpolygonrenderer.cpp
    symbology-ng/qgslegendsymbolitemv2.cpp
    symbology-ng/qgslinesymbollayerv2.cpp
    symbology-ng/qgsmarkersymbollayerv2.cpp
  symbology-ng/qgsnullsymbolrenderer.cpp
    symbology-ng/qgspointdisplacementrenderer.cpp
    symbology-ng/qgsrendererv2.cpp
    symbology-ng/qgsrendererv2registry.cpp
    symbology-ng/qgsrulebasedrendererv2.cpp
    symbology-ng/qgssinglesymbolrendererv2.cpp
    symbology-ng/qgsstylev2.cpp
    symbology-ng/qgssvgcache.cpp
    symbology-ng/qgssymbollayerv2.cpp
    symbology-ng/qgssymbollayerv2registry.cpp
    symbology-ng/qgssymbollayerv2utils.cpp
    symbology-ng/qgssymbologyv2conversion.cpp
    symbology-ng/qgssymbolv2.cpp
    symbology-ng/qgsvectorcolorrampv2.cpp
    symbology-ng/qgsvectorfieldsymbollayer.cpp

    diagram/qgsdiagram.cpp
    diagram/qgshistogramdiagram.cpp
    diagram/qgspiediagram.cpp
    diagram/qgstextdiagram.cpp

    effects/qgsblureffect.cpp
    effects/qgscoloreffect.cpp
    effects/qgseffectstack.cpp
    effects/qgsgloweffect.cpp
    effects/qgsimageoperation.cpp
    effects/qgspainteffect.cpp
    effects/qgspainteffectregistry.cpp
    effects/qgsshadoweffect.cpp
    effects/qgstransformeffect.cpp

    layertree/qgslayertreegroup.cpp
    layertree/qgslayertreelayer.cpp
    layertree/qgslayertreemodel.cpp
    layertree/qgslayertreemodellegendnode.cpp
    layertree/qgslayertreenode.cpp
    layertree/qgslayertreeregistrybridge.cpp
    layertree/qgslayertreeutils.cpp

    auth/qgsauthcertutils.cpp
    auth/qgsauthconfig.cpp
    auth/qgsauthcrypto.cpp
    auth/qgsauthmanager.cpp
    auth/qgsauthmethodmetadata.cpp
    auth/qgsauthmethodregistry.cpp

    qgis.cpp
    qgsapplication.cpp
  qgsaction.cpp
  qgsactionmanager.cpp
  qgsaggregatecalculator.cpp
  qgsattributetableconfig.cpp
    qgsbearingutils.cpp
    qgsbrowsermodel.cpp
    qgscachedfeatureiterator.cpp
    qgscacheindex.cpp
    qgscacheindexfeatureid.cpp
    qgsclipper.cpp
    qgscolorscheme.cpp
    qgscolorschemeregistry.cpp
    qgsconditionalstyle.cpp
    qgscontexthelp.cpp
    qgscoordinatereferencesystem.cpp
    qgscoordinatetransform.cpp
    qgscoordinateutils.cpp
    qgscredentials.cpp
    qgscrscache.cpp
    qgsdartmeasurement.cpp
    qgsdatadefined.cpp
    qgsdataitem.cpp
    qgsdataitemprovider.cpp
    qgsdataitemproviderregistry.cpp
    qgsdatasourceuri.cpp
  qgsdataprovider.cpp
  qgsdatetimestatisticalsummary.cpp
    qgsdatumtransformstore.cpp
    qgsdbfilterproxymodel.cpp
    qgsdiagramrendererv2.cpp
    qgsdistancearea.cpp
    qgseditformconfig.cpp
    qgserror.cpp
    qgsexpression.cpp
    qgsexpressioncontext.cpp
    qgsexpressionfieldbuffer.cpp
    qgsfeature.cpp
    qgsfeatureiterator.cpp
    qgsfeaturerequest.cpp
    qgsfeaturestore.cpp
    qgsfield.cpp
    qgsfontutils.cpp
    qgsgeometrycache.cpp
    qgsgeometrysimplifier.cpp
    qgsgeometryvalidator.cpp
    qgsgml.cpp
    qgsgmlschema.cpp
    qgshistogram.cpp
  qgsinterval.cpp
  qgsjsonutils.cpp
    qgslabel.cpp
    qgslabelattributes.cpp
    qgslabelfeature.cpp
    qgslabelingenginev2.cpp
    qgslabelsearchtree.cpp
    qgslayerdefinition.cpp
    qgslegacyhelpers.cpp
    qgslegendrenderer.cpp
    qgslegendsettings.cpp
    qgslocalec.cpp
    qgslogger.cpp
    qgsmaphittest.cpp
    qgsmaplayer.cpp
    qgsmaplayerlegend.cpp
    qgsmaplayerregistry.cpp
    qgsmaplayerstylemanager.cpp
    qgsmaprenderer.cpp
    qgsmaprenderercache.cpp
    qgsmaprenderercustompainterjob.cpp
    qgsmaprendererjob.cpp
    qgsmaprendererparalleljob.cpp
    qgsmaprenderersequentialjob.cpp
    qgsmapsettings.cpp
    qgsmaptopixel.cpp
    qgsmaptopixelgeometrysimplifier.cpp
    qgsmessagelog.cpp
    qgsmessageoutput.cpp
    qgsmimedatautils.cpp
    qgsmultirenderchecker.cpp
    qgsnetworkaccessmanager.cpp
    qgsnetworkdiskcache.cpp
    qgsnetworkcontentfetcher.cpp
    qgsnetworkreplyparser.cpp
    qgsobjectcustomproperties.cpp
    qgsofflineediting.cpp
    qgsogcutils.cpp
  qgsogrutils.cpp
  qgsoptionalexpression.cpp
    qgsowsconnection.cpp
    qgspaintenginehack.cpp
    qgspallabeling.cpp
    qgspluginlayer.cpp
    qgspluginlayerregistry.cpp
    qgspoint.cpp
    qgspointlocator.cpp
    qgsproject.cpp
    qgsprojectfiletransform.cpp
    qgsprojectproperty.cpp
    qgsprojectversion.cpp
    qgsprovidercountcalcevent.cpp
    qgsproviderextentcalcevent.cpp
    qgsprovidermetadata.cpp
    qgsproviderregistry.cpp
    qgspythonrunner.cpp
    qgsrectangle.cpp
    qgsrelation.cpp
    qgsrelationmanager.cpp
    qgsrenderchecker.cpp
    qgsrendercontext.cpp
    qgsrulebasedlabeling.cpp
    qgsrunprocess.cpp
  qgsruntimeprofiler.cpp
    qgsscalecalculator.cpp
    qgsscaleexpression.cpp
    qgsscaleutils.cpp
    qgssimplifymethod.cpp
    qgsslconnect.cpp
    qgssnapper.cpp
    qgssnappingutils.cpp
    qgsspatialindex.cpp
    qgssqlexpressioncompiler.cpp
  qgssqliteexpressioncompiler.cpp
  qgssqlstatement.cpp
    qgsstatisticalsummary.cpp
  qgsstringstatisticalsummary.cpp
    qgsstringutils.cpp
    qgstextlabelfeature.cpp
    qgstolerance.cpp
    qgstracer.cpp
    qgstransaction.cpp
    qgstransactiongroup.cpp
    qgsunittypes.cpp
    qgsvectordataprovider.cpp
    qgsvectorfilewriter.cpp
    qgsvectorlayer.cpp
    qgsvectorlayercache.cpp
    qgsvectorlayerdiagramprovider.cpp
    qgsvectorlayereditbuffer.cpp
    qgsvectorlayereditpassthrough.cpp
    qgsvectorlayereditutils.cpp
    qgsvectorlayerfeatureiterator.cpp
    qgsvectorlayerimport.cpp
    qgsvectorlayerjoinbuffer.cpp
    qgsvectorlayerlabeling.cpp
    qgsvectorlayerlabelprovider.cpp
    qgsvectorlayerrenderer.cpp
    qgsvectorlayerundocommand.cpp
    qgsvectorsimplifymethod.cpp
    qgsvirtuallayerdefinition.cpp
    qgsvirtuallayerdefinitionutils.cpp
    qgsvisibilitypresetcollection.cpp
    qgsxmlutils.cpp

    composer/qgsaddremoveitemcommand.cpp
    composer/qgsaddremovemultiframecommand.cpp
    composer/qgsatlascomposition.cpp
    composer/qgscomposerarrow.cpp
    composer/qgscomposerattributetable.cpp
    composer/qgscomposerattributetablemodel.cpp
    composer/qgscomposerattributetablemodelv2.cpp
    composer/qgscomposerattributetablev2.cpp
    composer/qgscomposereffect.cpp
    composer/qgscomposerframe.cpp
    composer/qgscomposerhtml.cpp
    composer/qgscomposeritem.cpp
    composer/qgscomposeritemcommand.cpp
    composer/qgscomposeritemgroup.cpp
    composer/qgscomposerlabel.cpp
    composer/qgscomposerlegend.cpp
    composer/qgscomposerlegenditem.cpp
    composer/qgscomposerlegendstyle.cpp
    composer/qgscomposermap.cpp
    composer/qgscomposermapgrid.cpp
    composer/qgscomposermapitem.cpp
    composer/qgscomposermapoverview.cpp
    composer/qgscomposermodel.cpp
    composer/qgscomposermousehandles.cpp
    composer/qgscomposermultiframe.cpp
    composer/qgscomposermultiframecommand.cpp
    composer/qgscomposerobject.cpp
    composer/qgscomposerpicture.cpp
    composer/qgscomposerscalebar.cpp
    composer/qgscomposershape.cpp
  composer/qgscomposernodesitem.cpp
  composer/qgscomposerpolygon.cpp
  composer/qgscomposerpolyline.cpp
    composer/qgscomposertable.cpp
    composer/qgscomposertablecolumn.cpp
    composer/qgscomposertablev2.cpp
    composer/qgscomposertexttable.cpp
    composer/qgscomposerutils.cpp
    composer/qgscomposition.cpp
    composer/qgsdoubleboxscalebarstyle.cpp
    composer/qgsgroupungroupitemscommand.cpp
    composer/qgslegendmodel.cpp
    composer/qgsnumericscalebarstyle.cpp
    composer/qgspaperitem.cpp
    composer/qgsscalebarstyle.cpp
    composer/qgssingleboxscalebarstyle.cpp
    composer/qgsticksscalebarstyle.cpp

    dxf/qgsdxfexport.cpp
    dxf/qgsdxfpaintdevice.cpp
    dxf/qgsdxfpaintengine.cpp
    dxf/qgsdxfpallabeling.cpp

    pal/costcalculator.cpp
    pal/feature.cpp
    pal/geomfunction.cpp
    pal/labelposition.cpp
    pal/layer.cpp
    pal/pal.cpp
    pal/palstat.cpp
    pal/pointset.cpp
    pal/priorityqueue.cpp
    pal/problem.cpp
    pal/rtree.hpp
    pal/util.cpp

    raster/qgscliptominmaxenhancement.cpp
    raster/qgscolorrampshader.cpp
    raster/qgscontrastenhancement.cpp
    raster/qgscontrastenhancementfunction.cpp
    raster/qgslinearminmaxenhancement.cpp
    raster/qgslinearminmaxenhancementwithclip.cpp
    raster/qgspseudocolorshader.cpp
    raster/qgsraster.cpp
    raster/qgsrasterblock.cpp
    raster/qgsrasterchecker.cpp
    raster/qgsrasterdataprovider.cpp
    raster/qgsrasteridentifyresult.cpp
    raster/qgsrasterinterface.cpp
    raster/qgsrasteriterator.cpp
    raster/qgsrasterlayer.cpp
    raster/qgsrasterlayerrenderer.cpp
    raster/qgsrasternuller.cpp
    raster/qgsrasterpipe.cpp
    raster/qgsrasterprojector.cpp
    raster/qgsrasterrange.cpp
    raster/qgsrastershader.cpp
    raster/qgsrastershaderfunction.cpp
    raster/qgsrastertransparency.cpp

    raster/qgsbilinearrasterresampler.cpp
    raster/qgsbrightnesscontrastfilter.cpp
    raster/qgscubicrasterresampler.cpp
    raster/qgshuesaturationfilter.cpp
    raster/qgsmultibandcolorrenderer.cpp
    raster/qgspalettedrasterrenderer.cpp
    raster/qgsrasterdrawer.cpp
    raster/qgsrasterfilewriter.cpp
    raster/qgsrasterrenderer.cpp
    raster/qgsrasterrendererregistry.cpp
    raster/qgsrasterresamplefilter.cpp
    raster/qgssinglebandcolordatarenderer.cpp
    raster/qgssinglebandgrayrenderer.cpp
    raster/qgssinglebandpseudocolorrenderer.cpp
  raster/qgshillshaderenderer.cpp

    geometry/qgsabstractgeometryv2.cpp
    geometry/qgscircularstringv2.cpp
    geometry/qgscompoundcurvev2.cpp
    geometry/qgscurvepolygonv2.cpp
    geometry/qgscurvev2.cpp
    geometry/qgsgeometry.cpp
    geometry/qgsgeometrycollectionv2.cpp
    geometry/qgsgeometryeditutils.cpp
    geometry/qgsgeometryfactory.cpp
    geometry/qgsgeometryutils.cpp
    geometry/qgsgeos.cpp
    geometry/qgsinternalgeometryengine.cpp
    geometry/qgslinestringv2.cpp
    geometry/qgsmulticurvev2.cpp
    geometry/qgsmultilinestringv2.cpp
    geometry/qgsmultipointv2.cpp
    geometry/qgsmultipolygonv2.cpp
    geometry/qgsmultisurfacev2.cpp
    geometry/qgspointv2.cpp
    geometry/qgspolygonv2.cpp
    geometry/qgswkbptr.cpp
    geometry/qgswkbtypes.cpp
  geometry/qgswkbsimplifierptr.cpp
    
    qgscontexthelp_texts.cpp
    qgsexpression_texts.cpp
)
set(QGIS_CORE_SRCS ${QGIS_CORE_SRCS}
    qgsexpressionparser.cpp
    qgssqlstatementparser.cpp
    flex_qgsexpressionlexer.cpp
    flex_qgssqlstatementlexer.cpp
)

# TODO: gps
# gps/context.c
# gps/gmath.c
# gps/info.c
# gps/parse.c
# gps/qgsgpsconnection.cpp
# gps/qgsgpsconnectionregistry.cpp
# gps/qgsgpsdconnection.cpp
# gps/qgsgpsdetector.cpp
# gps/qgsnmeaconnection.cpp
# gps/sentence.c
# gps/time.c
# gps/tok.c

set(QGIS_CORE_SRCS ${QGIS_CORE_SRCS}
  qgshttptransaction.cpp
)

set(QGIS_CORE_SRCS ${QGIS_CORE_SRCS}
    ngqgsapplication.cpp
)

file(GLOB JSON_HELP_FILES "${CMAKE_SOURCE_DIR}/resources/function_help/json/*")
string(REPLACE "$" "$$" JSON_HELP_FILES "${JSON_HELP_FILES}")
string(REPLACE "\(" "\\(" JSON_HELP_FILES "${JSON_HELP_FILES}")
string(REPLACE "\)" "\\)" JSON_HELP_FILES "${JSON_HELP_FILES}")
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/qgsexpression_texts.cpp
    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/scripts/process_function_template.py
        ${CMAKE_CURRENT_BINARY_DIR}/qgsexpression_texts.cpp.temp
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_BINARY_DIR}/qgsexpression_texts.cpp.temp
        ${CMAKE_CURRENT_SOURCE_DIR}/qgsexpression_texts.cpp
    DEPENDS ${JSON_HELP_FILES}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

file(GLOB CONTEXT_HELP_FILES "${CMAKE_SOURCE_DIR}/resources/context_help/*")
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/qgscontexthelp_texts.cpp
    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/scripts/process_contexthelp.py
        ${CMAKE_CURRENT_BINARY_DIR}/qgscontexthelp_texts.cpp.temp
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_BINARY_DIR}/qgscontexthelp_texts.cpp.temp
        ${CMAKE_CURRENT_SOURCE_DIR}/qgscontexthelp_texts.cpp
    DEPENDS ${CONTEXT_HELP_FILES}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

if(MAKE_CXX_COMPILER_ID MATCHES "Clang")
  # spatialindex headers produce warnings
  set_source_files_properties(qgsspatialindex.cpp PROPERTIES COMPILE_FLAGS -Wno-overloaded-virtual)
endif()

if(NOT MSVC)
  set_source_files_properties(qgsexpressionparser.cpp qgssqlstatementparser.cpp PROPERTIES COMPILE_FLAGS -w)
else()
  # -wd4702 unreachable code
  set_source_files_properties(
    geometry/qgsgeos.cpp
    pal/feature.cpp
    pal/pointset.cpp
    PROPERTIES COMPILE_FLAGS -wd4702)
endif()

set(QGIS_CORE_MOC_HDRS
    qgsapplication.h
    qgsbrowsermodel.h
    qgscontexthelp.h
    qgscoordinatetransform.h
    qgscredentials.h
    qgsdataitem.h
    qgsdataprovider.h
    qgsdbfilterproxymodel.h
    qgseditformconfig.h
  qgsfeedback.h
  qgsfield.h
    qgsgeometryvalidator.h
    qgsgml.h
    qgsgmlschema.h
    qgsmaplayer.h
    qgsmaplayerlegend.h
    qgsmaplayerregistry.h
    qgsmaplayerstylemanager.h
    qgsmaprenderercache.h
    qgsmaprenderercustompainterjob.h
    qgsmaprenderer.h
    qgsmaprendererjob.h
    qgsmaprendererparalleljob.h
    qgsmaprenderersequentialjob.h
    qgsmessagelog.h
    qgsmessageoutput.h
    qgsnetworkaccessmanager.h
    qgsnetworkdiskcache.h
    qgsnetworkcontentfetcher.h
    qgsnetworkreplyparser.h
    qgsofflineediting.h
    qgsowsconnection.h
    qgspluginlayer.h
    qgspointlocator.h
    qgsproject.h
    qgsrelationmanager.h
    qgsrunprocess.h
    qgssnappingutils.h
    qgstracer.h
    qgstransaction.h
    qgstransactiongroup.h
    qgsvectordataprovider.h
    qgsvectorlayercache.h
    qgsvectorlayereditbuffer.h
    qgsvectorlayereditpassthrough.h
    qgsvectorlayer.h
    qgsvectorlayerjoinbuffer.h
    qgsvisibilitypresetcollection.h
  qgswebpage.h
    qgswebview.h

    auth/qgsauthmanager.h
    auth/qgsauthmethod.h

    composer/qgsaddremoveitemcommand.h
    composer/qgsatlascomposition.h
    composer/qgscomposerarrow.h
    composer/qgscomposerattributetable.h
    composer/qgscomposerattributetablemodel.h
    composer/qgscomposerattributetablemodelv2.h
    composer/qgscomposerattributetablev2.h
    composer/qgscomposereffect.h
    composer/qgscomposerframe.h
    composer/qgscomposerhtml.h
    composer/qgscomposeritemgroup.h
    composer/qgscomposeritem.h
    composer/qgscomposerlabel.h
    composer/qgscomposerlegend.h
    composer/qgscomposermapgrid.h
    composer/qgscomposermap.h
    composer/qgscomposermapitem.h
    composer/qgscomposermapoverview.h
    composer/qgscomposermodel.h
    composer/qgscomposermousehandles.h
    composer/qgscomposermultiframe.h
    composer/qgscomposerobject.h
    composer/qgscomposerpicture.h
    composer/qgscomposerscalebar.h
    composer/qgscomposershape.h
  composer/qgscomposernodesitem.h
  composer/qgscomposerpolygon.h
  composer/qgscomposerpolyline.h
    composer/qgscomposertablecolumn.h
    composer/qgscomposertable.h
    composer/qgscomposertablev2.h
    composer/qgscomposertexttable.h
    composer/qgscomposition.h
    composer/qgsgroupungroupitemscommand.h
    composer/qgslegendmodel.h
    composer/qgspaperitem.h

    raster/qgsrasterlayer.h
    raster/qgsrasterdataprovider.h

    symbology-ng/qgscptcityarchive.h
    symbology-ng/qgssvgcache.h
    symbology-ng/qgsstylev2.h

    layertree/qgslayertreegroup.h
    layertree/qgslayertreelayer.h
    layertree/qgslayertreemodel.h
    layertree/qgslayertreemodellegendnode.h
    layertree/qgslayertreenode.h
    layertree/qgslayertreeregistrybridge.h
)

set(QGIS_CORE_MOC_HDRS ${QGIS_CORE_MOC_HDRS}
    ngqgsapplication.h
)

  # TODO: gps
  # gps/qgsgpsconnection.h
  # gps/qgsgpsdetector.h
  # gps/qgsnmeaconnection.h
  # gps/qgsgpsdconnection.h

set(QGIS_CORE_MOC_HDRS ${QGIS_CORE_MOC_HDRS}
  qgswebpage.h
  qgswebframe.h
)

set(QGIS_CORE_MOC_HDRS ${QGIS_CORE_MOC_HDRS}
  qgshttptransaction.h
)

if(NOT PREPARE_ONLY)
    qt4_wrap_cpp(QGIS_CORE_MOC_SRCS ${QGIS_CORE_MOC_HDRS})
endif()

if(MSVC)
  set_source_files_properties(${QGIS_CORE_MOC_SRCS} PROPERTIES COMPILE_FLAGS "/wd4512 /wd4996" )
else()
  set_source_files_properties(${QGIS_CORE_MOC_SRCS} PROPERTIES COMPILE_FLAGS "-Wno-deprecated-declarations" )
  if("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang" AND (CMAKE_BUILD_TYPE MATCHES "Release" OR CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo"))
    set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/qgsexpression_texts.cpp PROPERTIES COMPILE_FLAGS "-O1")
  endif()
endif()

# install headers
# install qgsconfig.h and plugin.h here so they can get into
# the OS X framework target

set(QGIS_CORE_HDRS
  ${CMAKE_BINARY_DIR}/qgsconfig.h
  ${CMAKE_SOURCE_DIR}/src/plugins/qgisplugin.h

  qgis.h
  qgsaction.h
  qgsactionmanager.h
  qgsaggregatecalculator.h
  qgsannotation.h
  qgsattributetableconfig.h
  qgsattributeaction.h
  qgsbearingutils.h
  qgscachedfeatureiterator.h
  qgscacheindex.h
  qgscacheindexfeatureid.h
  qgsclipper.h
  qgscolorscheme.h
  qgscolorschemeregistry.h
  qgsconnectionpool.h
  qgscontexthelp.h
  qgsconditionalstyle.h
  qgscoordinatereferencesystem.h
  qgscoordinatereferencesystem_p.h
  qgscoordinateutils.h
  qgscrscache.h
  qgscsexception.h
  qgsdartmeasurement.h
  qgsdatadefined.h
  qgsdatadefined_p.h
  qgsdataitem.h
  qgsdataitemprovider.h
  qgsdataitemproviderregistry.h
  qgsdatasourceuri.h
  qgsdatetimestatisticalsummary.h
  qgsdatumtransformstore.h
  qgsdbfilterproxymodel.h
  qgsdiagramrendererv2.h
  qgsdistancearea.h
  qgseditorwidgetconfig.h
  qgsfeaturefilterprovider.h
  qgserror.h
  qgsexception.h
  qgsexpression.h
  qgsexpressioncontext.h
  qgsexpressionfieldbuffer.h
  qgsfeature.h
  qgsfeature_p.h
  qgsfeatureiterator.h
  qgsfeaturerequest.h
  qgsfeaturestore.h
  qgsfield_p.h
  qgsfontutils.h
  qgsgeometrycache.h
  qgshistogram.h
  qgsindexedfeature.h
  qgsinterval.h
  qgsjsonutils.h
  qgslayerdefinition.h
  qgslabel.h
  qgslabelattributes.h
  qgslabelfeature.h
  qgslabelingenginev2.h
  qgslabelsearchtree.h
  qgslegacyhelpers.h
  qgslegendrenderer.h
  qgslegendsettings.h
  qgslogger.h
  qgsmaphittest.h
  qgsmaplayerlistutils.h
  qgsmaplayerref.h
  qgsmaplayerrenderer.h
  qgsmaplayerstylemanager.h
  qgsmapsettings.h
  qgsmaptopixel.h
  qgsmaptopixelgeometrysimplifier.h
  qgsmapunitscale.h
  qgsmimedatautils.h
  qgsmultirenderchecker.h
  qgsobjectcustomproperties.h
  qgsogcutils.h
  qgsoptional.h
  qgsoptionalexpression.h
  qgsowsconnection.h
  qgspaintenginehack.h
  qgspallabeling.h
  qgspluginlayerregistry.h
  qgspoint.h
  qgspointlocator.h
  qgsproject.h
  qgsprojectfiletransform.h
  qgsprojectproperty.h
  qgsprojectversion.h
  qgsprovidercountcalcevent.h
  qgsproviderextentcalcevent.h
  qgsprovidermetadata.h
  qgsproviderregistry.h
  qgspythonrunner.h
  qgsrectangle.h
  qgsrelation.h
  qgsrenderchecker.h
  qgsrendercontext.h
  qgsruntimeprofiler.h
  qgsscalecalculator.h
  qgsscaleexpression.h
  qgsscaleutils.h
  qgssimplifymethod.h
  qgssnapper.h
  qgssnappingutils.h
  qgsspatialindex.h
  qgssqlexpressioncompiler.h
  qgsstatisticalsummary.h
  qgsstringstatisticalsummary.h
  qgsstringutils.h
  qgstestutils.h
  qgstextlabelfeature.h
  qgstolerance.h
  qgstracer.h
  qgsunittypes.h

  qgsvectordataprovider.h
  qgsvectorlayercache.h
  qgsvectorlayerref.h
  qgsvectorfilewriter.h
  qgsvectorlayerdiagramprovider.h
  qgsvectorlayereditutils.h
  qgsvectorlayerfeatureiterator.h
  qgsvectorlayerimport.h
  qgsvectorlayerlabelprovider.h
  qgsvectorlayerrenderer.h
  qgsvectorlayerundocommand.h
  qgsvectorsimplifymethod.h
  qgsvisibilitypresetcollection.h
  qgsxmlutils.h
  qgswebpage.h
  qgswebframe.h
  qgswebview.h
  qgslocalec.h

  auth/qgsauthcertutils.h
  auth/qgsauthconfig.h
  auth/qgsauthcrypto.h
  auth/qgsauthmanager.h
  auth/qgsauthmethod.h
  auth/qgsauthmethodmetadata.h
  auth/qgsauthmethodregistry.h

  diagram/qgsdiagram.h
  diagram/qgspiediagram.h
  diagram/qgstextdiagram.h
  diagram/qgshistogramdiagram.h

  effects/qgsimageoperation.h
  effects/qgspainteffect.h
  effects/qgseffectstack.h
  effects/qgsblureffect.h
  effects/qgsshadoweffect.h
  effects/qgsgloweffect.h
  effects/qgspainteffectregistry.h
  effects/qgstransformeffect.h
  effects/qgscoloreffect.h

  composer/qgsaddremovemultiframecommand.h
  composer/qgscomposerarrow.h
  composer/qgscomposerframe.h
  composer/qgscomposeritemcommand.h
  composer/qgscomposerlegenditem.h
  composer/qgscomposerlegendstyle.h
  composer/qgscomposermultiframecommand.h
  composer/qgscomposertable.h
  composer/qgscomposertexttable.h
  composer/qgsdoubleboxscalebarstyle.h
  composer/qgsnumericscalebarstyle.h
  composer/qgspaperitem.h
  composer/qgsscalebarstyle.h
  composer/qgssingleboxscalebarstyle.h
  composer/qgsticksscalebarstyle.h

  raster/qgsbilinearrasterresampler.h
  raster/qgsbrightnesscontrastfilter.h
  raster/qgscliptominmaxenhancement.h
  raster/qgscolorrampshader.h
  raster/qgscontrastenhancement.h
  raster/qgscontrastenhancementfunction.h
  raster/qgscubicrasterresampler.h
  raster/qgshuesaturationfilter.h
  raster/qgslinearminmaxenhancement.h
  raster/qgslinearminmaxenhancementwithclip.h
  raster/qgsmultibandcolorrenderer.h
  raster/qgspalettedrasterrenderer.h
  raster/qgspseudocolorshader.h
  raster/qgsraster.h
  raster/qgsrasterbandstats.h
  raster/qgsrasterblock.h
  raster/qgsrasterchecker.h
  raster/qgsrasterdrawer.h
  raster/qgsrasterfilewriter.h
  raster/qgsrasterhistogram.h
  raster/qgsrasteridentifyresult.h
  raster/qgsrasterinterface.h
  raster/qgsrasteriterator.h
  raster/qgsrasternuller.h
  raster/qgsrasterpipe.h
  raster/qgsrasterprojector.h
  raster/qgsrasterpyramid.h
  raster/qgsrasterrange.h
  raster/qgsrasterrenderer.h
  raster/qgsrasterresamplefilter.h
  raster/qgsrasterresampler.h
  raster/qgsrastershader.h
  raster/qgsrastershaderfunction.h
  raster/qgsrastertransparency.h
  raster/qgsrasterviewport.h
  raster/qgssinglebandcolordatarenderer.h
  raster/qgssinglebandgrayrenderer.h
  raster/qgssinglebandpseudocolorrenderer.h
  raster/qgshillshaderenderer.h

  symbology-ng/qgs25drenderer.h
  symbology-ng/qgscategorizedsymbolrendererv2.h
  symbology-ng/qgscolorbrewerpalette.h
  symbology-ng/qgsellipsesymbollayerv2.h
  symbology-ng/qgsfillsymbollayerv2.h
  symbology-ng/qgsgraduatedsymbolrendererv2.h
  symbology-ng/qgslegendsymbolitemv2.h
  symbology-ng/qgslinesymbollayerv2.h
  symbology-ng/qgsmarkersymbollayerv2.h
  symbology-ng/qgspointdisplacementrenderer.h
  symbology-ng/qgsrendererv2.h
  symbology-ng/qgsrendererv2registry.h
  symbology-ng/qgsrulebasedrendererv2.h
  symbology-ng/qgssinglesymbolrendererv2.h
  symbology-ng/qgsheatmaprenderer.h
  symbology-ng/qgsinvertedpolygonrenderer.h
  symbology-ng/qgsnullsymbolrenderer.h
  symbology-ng/qgssymbollayerv2.h
  symbology-ng/qgssymbollayerv2registry.h
  symbology-ng/qgssymbollayerv2utils.h
  symbology-ng/qgssymbologyv2conversion.h
  symbology-ng/qgssymbolv2.h
  symbology-ng/qgsvectorcolorrampv2.h
  symbology-ng/qgsvectorfieldsymbollayer.h
  symbology-ng/qgsgeometrygeneratorsymbollayerv2.h

  layertree/qgslayertree.h
  layertree/qgslayertreeutils.h

  geometry/qgsabstractgeometryv2.h
  geometry/qgscircularstringv2.h
  geometry/qgscompoundcurvev2.h
  geometry/qgscurvepolygonv2.h
  geometry/qgscurvev2.h
  geometry/qgsgeometrycollectionv2.h
  geometry/qgsgeometryeditutils.h
  geometry/qgsgeometryengine.h
  geometry/qgsgeometryfactory.h
  geometry/qgsgeometry.h
  geometry/qgsgeometryutils.h
  geometry/qgsgeos.h
  geometry/qgsinternalgeometryengine.h
  geometry/qgslinestringv2.h
  geometry/qgsmulticurvev2.h
  geometry/qgsmultilinestringv2.h
  geometry/qgsmultipointv2.h
  geometry/qgsmultipolygonv2.h
  geometry/qgsmultisurfacev2.h
  geometry/qgspointv2.h
  geometry/qgspolygonv2.h
  geometry/qgssurfacev2.h
  geometry/qgswkbptr.h
  geometry/qgswkbsimplifierptr.h
  geometry/qgswkbtypes.h
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  auth
  composer
  dxf
  effects
  geometry
  layertree
  pal
  raster
  renderer
  symbology-ng
)

# gps/qextserialport

# Test data dir for QgsRenderChecker
add_definitions(-DTEST_DATA_DIR="\\"${TEST_DATA_DIR}\\"")

set(LIB_NAME ${NG_PREFIX}qgis_core)

add_library(${LIB_NAME} SHARED ${QGIS_CORE_SRCS} ${QGIS_CORE_MOC_SRCS} ${QGIS_CORE_HDRS} ${QGIS_CORE_MOC_HDRS})

target_compile_definitions (${LIB_NAME} PRIVATE "CORE_EXPORT=${DLLEXPORT}")
target_compile_definitions (${LIB_NAME} INTERFACE "CORE_EXPORT=${DLLIMPORT}")
set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 11)

target_link_extlibraries(${LIB_NAME})
set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${LIB_NAME} PARENT_SCOPE)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis2_core
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_CORE_HDRS};${QGIS_CORE_MOC_HDRS}"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

if(WIN32)
    target_link_libraries(${LIB_NAME} wsock32)
endif()

# install

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )
endif()

if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
    install(FILES ${QGIS_CORE_HDRS} ${QGIS_CORE_MOC_HDRS} DESTINATION ${INSTALL_INC_DIR})
endif()
