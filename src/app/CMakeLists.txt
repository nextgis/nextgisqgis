################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
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

set(QGIS_APP_SRCS
#   ${CMAKE_SOURCE_DIR}/external/nmea/gmath.c
#   ${CMAKE_SOURCE_DIR}/external/nmea/time.c

  qgisapp.cpp
  qgisappinterface.cpp
  qgisappstylesheet.cpp
  qgsabout.cpp
  qgsalignrasterdialog.cpp
  qgsappauthrequesthandler.cpp
  qgsappbrowserproviders.cpp
  qgsappcoordinateoperationhandlers.cpp
  qgsapplayertreeviewmenuprovider.cpp
  qgsappwindowmanager.cpp
  qgsappscreenshots.cpp
  qgsanimationexportdialog.cpp
  qgsannotationwidget.cpp
  qgsappsslerrorhandler.cpp
  qgsattributetabledialog.cpp
  qgsbookmarks.cpp
  qgsbookmarkeditordialog.cpp
  qgsclipboard.cpp
  qgscustomization.cpp
  qgsdatumtransformtablewidget.cpp
  qgsdevtoolspanelwidget.cpp
  qgsdiscoverrelationsdialog.cpp
#   qgsdxfexportdialog.cpp
  qgsformannotationdialog.cpp
  qgsguivectorlayertools.cpp
  qgshtmlannotationdialog.cpp
  qgsdelattrdialog.cpp
  qgsdisplayangle.cpp
  qgsfirstrundialog.cpp
  qgsfixattributedialog.cpp
  qgsgeometryvalidationservice.cpp
  qgsgeometryvalidationdock.cpp
  qgsgeometryvalidationmodel.cpp
  qgsidentifyresultsdialog.cpp
  qgsfeatureaction.cpp
  qgslayercapabilitiesmodel.cpp
  qgslayernotesmanager.cpp
  qgslayertreegrouppropertieswidget.cpp
  qgslayertreeviewindicatorprovider.cpp
  qgslayertreeviewembeddedindicator.cpp
  qgslayertreeviewfilterindicator.cpp
  qgslayertreeviewlowaccuracyindicator.cpp
  qgslayertreeviewmemoryindicator.cpp
  qgslayertreeviewnocrsindicator.cpp
  qgslayertreeviewnonremovableindicator.cpp
  qgslayertreeviewnotesindicator.cpp
  qgslayertreeviewbadlayerindicator.cpp
  qgslayertreeviewtemporalindicator.cpp
  qgslayertreeviewofflineindicator.cpp
  qgsmapcanvasdockwidget.cpp
  qgsmapsavedialog.cpp
  qgsprojectlistitemdelegate.cpp
  qgsprovidersublayersdialog.cpp
  qgspuzzlewidget.cpp
  qgsversionmigration.cpp
  qgssnappinglayertreemodel.cpp
  qgssnappingwidget.cpp
  qgsstatusbarcoordinateswidget.cpp
  qgsstatusbarmagnifierwidget.cpp
  qgsstatusbarscalewidget.cpp
  qgstemplateprojectsmodel.cpp
  qgstemporalcontrollerdockwidget.cpp
  qgsversioninfo.cpp
  qgsrecentprojectsitemsmodel.cpp
  qgsvectorlayerdigitizingproperties.cpp
  qgswelcomepage.cpp
  qgsdockablewidgethelper.cpp

  qgsmaptooladdfeature.cpp
  qgsmaptooladdpart.cpp
  qgsmaptooladdring.cpp
  qgsmaptoolfillring.cpp
  qgsmaptoolannotation.cpp
  qgsmaptooldeletering.cpp
  qgsmaptooldeletepart.cpp
  qgsmaptooltrimextendfeature.cpp
  qgsmaptoolfeatureaction.cpp
  qgsmaptoolformannotation.cpp
  qgsmaptoolhtmlannotation.cpp
  qgsmaptoolidentifyaction.cpp
  qgsmaptoolmeasureangle.cpp
  qgsmaptoolmeasurebearing.cpp
  qgsmaptoolmovefeature.cpp
  qgsmaptooloffsetcurve.cpp
  qgsmaptooloffsetpointsymbol.cpp
  qgsmaptoolpointsymbol.cpp
  qgsmaptoolreshape.cpp
  qgsmaptoolreverseline.cpp
  qgsmaptoolrotatefeature.cpp
  qgsmaptoolrotatepointsymbols.cpp
  qgsmaptoolscalefeature.cpp
  qgsmaptoolselect.cpp
  qgsmaptoolselectionhandler.cpp
  qgsmaptoolselectutils.cpp
  qgsmaptoolsimplify.cpp
  qgsmaptoolsplitfeatures.cpp
  qgsmaptoolsplitparts.cpp
  qgsmaptoolsvgannotation.cpp
  qgsmaptooltextannotation.cpp

  annotations/qgsannotationitempropertieswidget.cpp
  annotations/qgsannotationlayerproperties.cpp

  decorations/qgsdecorationitem.cpp
  decorations/qgsdecorationtitle.cpp
  decorations/qgsdecorationtitledialog.cpp
  decorations/qgsdecorationcopyright.cpp
  decorations/qgsdecorationcopyrightdialog.cpp
  decorations/qgsdecorationimage.cpp
  decorations/qgsdecorationimagedialog.cpp
  decorations/qgsdecorationlayoutextent.cpp
  decorations/qgsdecorationlayoutextentdialog.cpp
  decorations/qgsdecorationnortharrow.cpp
  decorations/qgsdecorationnortharrowdialog.cpp
  decorations/qgsdecorationscalebar.cpp
  decorations/qgsdecorationscalebardialog.cpp
  decorations/qgsdecorationgrid.cpp
  decorations/qgsdecorationgriddialog.cpp

  pointcloud/qgspointcloudelevationpropertieswidget.cpp
  pointcloud/qgspointcloudlayerproperties.cpp
  pointcloud/qgspointcloudlayerstylewidget.cpp

#   vectortile/qgsvectortilelayerproperties.cpp

  vertextool/qgslockedfeature.cpp
  vertextool/qgsvertexeditor.cpp
  vertextool/qgsvertextool.cpp

  qgslayerstylingwidget.cpp
  qgsmeasuredialog.cpp
  qgsmeasuretool.cpp
  qgsmergeattributesdialog.cpp
  qgspointmarkeritem.cpp
  qgspointrotationitem.cpp
  qgspluginmetadata.cpp
  qgspluginregistry.cpp
  qgsprojectlayergroupdialog.cpp
  qgsprojectproperties.cpp
  qgsrastercalcdialog.cpp
  qgsrelationmanagerdialog.cpp
  qgsrelationadddlg.cpp
  qgsrelationaddpolymorphicdialog.cpp
  qgsselectbyformdialog.cpp
  qgsstatisticalsummarydockwidget.cpp
  qgstextannotationdialog.cpp
  qgssvgannotationdialog.cpp
  qgsundowidget.cpp
  qgsmapthemes.cpp
  qgshandlebadlayers.cpp
  qgsmaptooladdabstract.cpp
  qgsmaptooladdcircularstring.cpp
  qgsmaptoolcircularstringcurvepoint.cpp
  qgsmaptoolcircularstringradius.cpp
  qgsmaptooladdcircle.cpp
  qgsmaptoolcircle2points.cpp
  qgsmaptoolcircle3points.cpp
  qgsmaptoolcircle3tangents.cpp
  qgsmaptoolcircle2tangentspoint.cpp
  qgsmaptoolcirclecenterpoint.cpp
  qgsmaptooladdellipse.cpp
  qgsmaptoolellipsefoci.cpp
  qgsmaptoolellipseextent.cpp
  qgsmaptoolellipsecenterpoint.cpp
  qgsmaptoolellipsecenter2points.cpp
  qgsmaptooladdrectangle.cpp
  qgsmaptooladdregularpolygon.cpp
  qgsmaptoolrectanglecenter.cpp
  qgsmaptoolrectangleextent.cpp
  qgsmaptoolrectangle3points.cpp
  qgsmaptoolregularpolygon2points.cpp
  qgsmaptoolregularpolygoncenterpoint.cpp
  qgsmaptoolregularpolygoncentercorner.cpp

  browser/qgsinbuiltdataitemproviders.cpp

  devtools/qgsappdevtoolutils.cpp
  devtools/networklogger/qgsnetworklogger.cpp
  devtools/networklogger/qgsnetworkloggernode.cpp
  devtools/networklogger/qgsnetworkloggerpanelwidget.cpp
  devtools/networklogger/qgsnetworkloggerwidgetfactory.cpp
  devtools/profiler/qgsprofilerpanelwidget.cpp
  devtools/profiler/qgsprofilerwidgetfactory.cpp

  georeferencer/qgsvalidateddoublespinbox.cpp

  labeling/qgslabelpropertydialog.cpp
  labeling/qgsmaptoolchangelabelproperties.cpp
  labeling/qgsmaptoolpinlabels.cpp
  labeling/qgsmaptoolshowhidelabels.cpp
  labeling/qgsmaptoollabel.cpp
  labeling/qgsmaptoolmovelabel.cpp
  labeling/qgsmaptoolrotatelabel.cpp

  layout/qgslayoutappmenuprovider.cpp
  layout/qgslayoutdesignerdialog.cpp
  layout/qgslayoutimagedrophandler.cpp
  layout/qgslayoutmanagerdialog.cpp
  layout/qgsreportfieldgroupsectionwidget.cpp
  layout/qgsreportlayoutsectionwidget.cpp
  layout/qgsreportorganizerwidget.cpp
  layout/qgsreportsectionmodel.cpp
  layout/qgsreportsectionwidget.cpp

  locator/qgsactionlocatorfilter.cpp
  locator/qgsactivelayerfeatureslocatorfilter.cpp
  locator/qgsalllayersfeatureslocatorfilter.cpp
  locator/qgsbookmarklocatorfilter.cpp
  locator/qgsexpressioncalculatorlocatorfilter.cpp
  locator/qgsgotolocatorfilter.cpp
  locator/qgslayertreelocatorfilter.cpp
  locator/qgslayoutlocatorfilter.cpp
  locator/qgsnominatimlocatorfilter.cpp
  locator/qgssettingslocatorfilter.cpp

  locator/qgslocatoroptionswidget.cpp

  maptools/qgsappmaptools.cpp

  options/qgsadvancedoptions.cpp
  options/qgscodeeditoroptions.cpp
  options/qgscustomprojectionoptions.cpp
#   options/qgsgpsdeviceoptions.cpp
  options/qgsoptions.cpp
  options/qgsoptionsutils.cpp

#   gps/qgsgpsbearingitem.cpp
#   gps/qgsgpsinformationwidget.cpp
#   gps/qgsgpsmarker.cpp

#   dwg/qgsdwgimportdialog.cpp
#   dwg/qgsdwgimporter.cpp

  pluginmanager/qgspluginmanager.cpp
  pluginmanager/qgspluginmanager_texts.cpp
  pluginmanager/qgsapppluginmanagerinterface.cpp
  pluginmanager/qgspluginsortfilterproxymodel.cpp
  pluginmanager/qgspluginitemdelegate.cpp

  qgssettingstree.cpp
  qgsvariantdelegate.cpp
  qgscrashhandler.cpp

  mesh/qgsmeshcalculatordialog.cpp
  mesh/qgsnewmeshlayerdialog.cpp
  mesh/qgsmaptooleditmeshframe.cpp
  mesh/qgsmeshtransformcoordinatesdockwidget.cpp
  mesh/qgsmeshselectbyexpressiondialog.cpp
  
  ngsaboutdialog.cpp
)

if (HAVE_SPATIALITE)
  set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
    qgsnewspatialitelayerdialog.cpp
  )
endif()

if (HAVE_GEOREFERENCER)
  set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
    georeferencer/qgsgcpcanvasitem.cpp
    georeferencer/qgsgeorefconfigdialog.cpp
    georeferencer/qgsgeorefdatapoint.cpp
    georeferencer/qgsgeorefdelegates.cpp
    georeferencer/qgsgeorefmainwindow.cpp
    georeferencer/qgsgeoreftooladdpoint.cpp
    georeferencer/qgsgeoreftooldeletepoint.cpp
    georeferencer/qgsgeoreftoolmovepoint.cpp
    georeferencer/qgsgeorefvalidators.cpp
    georeferencer/qgsmapcoordsdialog.cpp
    georeferencer/qgsresidualplotitem.cpp
    georeferencer/qgstransformsettingsdialog.cpp
    georeferencer/qgsgcplist.cpp
    georeferencer/qgsgcplistmodel.cpp
    georeferencer/qgsimagewarper.cpp
    georeferencer/qgsgeoreftransform.cpp
    georeferencer/qgsgcplistwidget.cpp
    georeferencer/qgsrasterchangecoords.cpp
  )
endif()

if (WITH_3D)
  set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
    3d/qgs3danimationwidget.cpp
    3d/qgs3danimationexportdialog.cpp
    3d/qgs3dapputils.cpp
    3d/qgs3dicongenerator.cpp
    3d/qgs3dmapcanvas.cpp
    3d/qgs3dmapconfigwidget.cpp
    3d/qgs3dmaptool.cpp
    3d/qgs3dmaptoolidentify.cpp
    3d/qgs3dmaptoolmeasureline.cpp
    3d/qgs3dmeasuredialog.cpp
    3d/qgs3dmodelsourcelineedit.cpp
    3d/qgs3dnavigationwidget.cpp
    3d/qgs3doptions.cpp
    3d/qgsgoochmaterialwidget.cpp
    3d/qgslightswidget.cpp
    3d/qgsline3dsymbolwidget.cpp
    3d/qgsmaterialwidget.cpp
    3d/qgsmesh3dsymbolwidget.cpp
    3d/qgsnullmaterialwidget.cpp
    3d/qgspoint3dsymbolwidget.cpp
    3d/qgspolygon3dsymbolwidget.cpp
    3d/qgsphongmaterialwidget.cpp
    3d/qgsphongtexturedmaterialwidget.cpp
    3d/qgsrulebased3drendererwidget.cpp
    3d/qgssimplelinematerialwidget.cpp
    3d/qgssymbol3dwidget.cpp
    3d/qgsvectorlayer3dpropertieswidget.cpp
    3d/qgsvectorlayer3drendererwidget.cpp
    3d/qgsmeshlayer3drendererwidget.cpp
    3d/qgsmap3dexportwidget.cpp
    layout/qgslayout3dmapwidget.cpp
    3d/qgsskyboxrenderingsettingswidget.cpp
    3d/qgsshadowrenderingsettingswidget.cpp
    3d/qgspointcloud3dsymbolwidget.cpp
    3d/qgspointcloudlayer3drendererwidget.cpp
    3d/qgs3dmapcanvaswidget.cpp
    3d/qgs3dviewsmanagerdialog.cpp
  )
endif()

if (UNIX OR APPLE)
  set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
    ${CMAKE_SOURCE_DIR}/external/qt-unix-signals/sigwatch.cpp
  )
  include_directories(${CMAKE_SOURCE_DIR}/external/qt-unix-signals)
endif()

# set_property(SOURCE qgisapp.cpp PROPERTY SKIP_AUTOUIC ON)

# if(NGSTD_FOUND)

#     set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
#         ngupdater.cpp
#     )

#     set(QGIS_APP_MOC_HDRS ${QGIS_APP_MOC_HDRS}
#         ngupdater.h
#     )
# endif()

# set(QGIS_APP_SRCS ${QGIS_APP_SRCS}
#     ngcustomization.cpp
#     ngsaboutdialog.cpp
# )

# set(QGIS_APP_MOC_HDRS ${QGIS_APP_MOC_HDRS}
#     ngcustomization.h
#     ngsaboutdialog.h
# )

# Test data dir for QgsAppScreenShots
add_definitions(-DTEST_DATA_DIR="${TEST_DATA_DIR}")

# add test resources, e.g. standard test font
set(TEST_RCCS ../../tests/testdata/testdata.qrc)

if (WIN32)
  set (QGIS_APP_SRCS ${QGIS_APP_SRCS} main.cpp ${TEST_RCCS})
  set (QGIS_APPMAIN_SRCS mainwin.cpp)
  set (QGIS_APPMAIN_SRCS ${QGIS_APPMAIN_SRCS} ${CMAKE_CURRENT_SOURCE_DIR}/qgis_win32.rc)
else()
  set (QGIS_APPMAIN_SRCS main.cpp ${TEST_RCCS})
endif()

set (QGIS_APPMAIN_HEADERS
   qgscustomization.h
   qgisapp.h
   qgsfirstrundialog.h
)

if(PEDANTIC)
  # disable deprecation warnings
  if(MSVC)
    set_source_files_properties(
        qgisappinterface.cpp
        ${CMAKE_BINARY_DIR}/src/app/moc_qgisappinterface.cxx
        PROPERTIES COMPILE_FLAGS "/wd4996"
    )
  else()
    set_source_files_properties(
        qgisappinterface.cpp
        ${CMAKE_BINARY_DIR}/src/app/moc_qgisappinterface.cxx
        PROPERTIES COMPILE_FLAGS "-Wno-deprecated-declarations"
    )
  endif()
endif()

if(MSVC)
# -wd4091 Avoid 'typedef' ignored on left of '' when no variable is declared warning in dbghelp.h
set_source_files_properties(
  qgisapp.cpp
  main.cpp
  qgscrashhandler.cpp
  PROPERTIES COMPILE_FLAGS -wd4091)
endif()

if(HAVE_OPENCL)
    include_directories(SYSTEM ${OpenCL_INCLUDE_DIRS})
endif()

if (WITH_PDAL)
#   include_directories(SYSTEM ${PDAL_INCLUDE_DIR})
  if(MSVC)
    add_definitions(-DWIN32_LEAN_AND_MEAN)
  endif()
endif()

if(ENABLE_MODELTEST)
  include_directories(../../tests/qt_modeltest)
endif()

# if (ANDROID)
#   include_directories(SYSTEM ${ANDROID_NDK_TOOLCHAIN_ROOT}/sysroot/usr/include)
# endif()

if (APPLE)
  include_directories(${CMAKE_SOURCE_DIR}/src/native/mac)
elseif(UNIX)
    include_directories(${CMAKE_SOURCE_DIR}/src/native/linux)
elseif(WIN32)
    include_directories(${CMAKE_SOURCE_DIR}/src/native/win)
endif()

# if (POSTGRES_FOUND)
#   include_directories(SYSTEM ${POSTGRES_INCLUDE_DIR})
# endif()

#############
# if (ANDROID)
#   add_library(${QGIS_APP_NAME} ${LIBRARY_TYPE} ${QGIS_APPMAIN_SRCS})

#   # require c++17
#   target_compile_features(${QGIS_APP_NAME} PRIVATE cxx_std_17)
# else()
#   add_executable(${QGIS_APP_NAME} MACOSX_BUNDLE WIN32 ${QGIS_APPMAIN_SRCS})

#   # require c++17
#   target_compile_features(${QGIS_APP_NAME} PRIVATE cxx_std_17)
# endif()

set(LIB_NAME ${NG_PREFIX}qgis_app)

add_library(${LIB_NAME} SHARED ${QGIS_APP_SRCS} ${QGIS_APP_HDRS})

target_include_directories(${LIB_NAME} PUBLIC
#   ${CMAKE_SOURCE_DIR}/external/nmea

  ${CMAKE_SOURCE_DIR}/src/app
  decorations
  devtools/networklogger
  labeling
  layout
  pluginmanager
#   ${CMAKE_SOURCE_DIR}/src/app/gps
#   ${CMAKE_SOURCE_DIR}/src/app/dwg
  maptools
  mesh
  locator
  pointcloud
#   ${CMAKE_SOURCE_DIR}/src/app/vectortile
  ${CMAKE_SOURCE_DIR}/src/plugins
  ${CMAKE_SOURCE_DIR}/src/python
  ${CMAKE_SOURCE_DIR}/src/native
  ${CMAKE_SOURCE_DIR}/src/gui
  ${CMAKE_SOURCE_DIR}/src/gui/devtools

  ${CMAKE_BINARY_DIR}/src/app
)

if(IS_MULTI_CONFIG_GENERATOR)
    target_include_directories(${LIB_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/src/gui/${NG_PREFIX}qgis_gui_autogen/include_${CMAKE_BUILD_TYPE}>
    )
else()
    target_include_directories(${LIB_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/src/gui/${NG_PREFIX}qgis_gui_autogen/include>
    )
endif()

if (WITH_3D)
  target_include_directories(${LIB_NAME} PUBLIC
    ${CMAKE_SOURCE_DIR}/src/app/3d
  )
endif()

# target_include_directories(qgis_app SYSTEM PUBLIC
#   ${QT_QTUITOOLS_INCLUDE_DIR}
#   ${QWTPOLAR_INCLUDE_DIR}
#   ${CMAKE_SOURCE_DIR}/external/qt-unix-signals
# )
# 
# add_dependencies(qgis_gui ui)

set(TARGET_LINK_LIBEX)
if(OSX_FRAMEWORK)
    find_library(CARBON_FRAMEWORK Carbon)
    find_library(COREFOUNDATION_FRAMEWORK CoreFoundation)

    set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX} ${CARBON_FRAMEWORK} ${COREFOUNDATION_FRAMEWORK})
endif()

set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX}
    ${QWT_LIBRARY}
#   ${QWTPOLAR_LIBRARY}
    ${QT_VERSION_BASE}::Sql
#   ${OPTIONAL_QTWEBKIT}
  #should only be needed for win
    ${QT_QTMAIN_LIBRARY}
#   ${QGIS_RC_LIBS}
    ${NG_PREFIX}qgis_core
    ${NG_PREFIX}qgis_gui
    ${NG_PREFIX}qgis_analysis
    ${NG_PREFIX}qgis_native
#   libdxfrw
)

target_link_libraries(${LIB_NAME} ${TARGET_LINK_LIBEX})

target_compile_definitions(${LIB_NAME} PRIVATE "-DQT_NO_FOREACH")

if (WITH_BINDINGS)
  add_definitions(-DWITH_BINDINGS)
  target_link_libraries(${LIB_NAME} ${NG_PREFIX}qgispython)
endif()

if(ENABLE_MODELTEST)
  target_link_libraries(${LIB_NAME} ${QT_VERSION_BASE}::Test)
endif()

if (WITH_3D)
  target_link_libraries(${LIB_NAME} ${NG_PREFIX}qgis_3d)
endif()

if (HAVE_GEOREFERENCER)
  include_directories(SYSTEM
    ${GSL_INCLUDE_DIR}
  )
  target_link_libraries(${LIB_NAME}
    ${GSL_LIBRARIES}
  )
endif()

generate_export_header(
    ${LIB_NAME}
    BASE_NAME APP
    EXPORT_FILE_NAME qgis_app.h
)

# if (NOT ANDROID)
#   set_target_properties(qgis_app PROPERTIES
#     VERSION ${COMPLETE_VERSION}
#     SOVERSION ${COMPLETE_VERSION}
#     )
# endif()

# if (APPLE)
#   target_link_libraries(qgis_app ${APP_SERVICES_LIBRARY})
# endif()

if(MSVC AND CMAKE_SIZEOF_VOID_P EQUAL 8)
  set_target_properties(${LIB_NAME} PROPERTIES STATIC_LIBRARY_FLAGS "/machine:x64")
endif()

add_executable(${QGIS_APP_NAME} MACOSX_BUNDLE WIN32 ${QGIS_APPMAIN_SRCS} ${QGIS_APPMAIN_HEADERS} ${IMAGE_RCC_SRCS} ${TEST_RCC_SRCS})

# # clang-tidy
# if(CLANG_TIDY_EXE)
#   set_target_properties(
#     qgis_app PROPERTIES
#     CXX_CLANG_TIDY "${DO_CLANG_TIDY}"
#   )
# endif()

if(NOT WIN32)
  target_link_libraries(${QGIS_APP_NAME} ${NG_PREFIX}qgis_app)
endif()

# if (ANDROID)
#   target_link_libraries(${QGIS_APP_NAME} log)
# endif()

if(WIN32)
  add_definitions(-DQWT_DLL)
  add_definitions(-DQSCINTILLA_DLL)
#   target_link_libraries(${QGIS_APP_NAME} dbghelp)
#   target_link_libraries(qgis_app dbghelp)
endif()

target_link_libraries(${QGIS_APP_NAME} 
    ${NG_PREFIX}qgis_native
)

# if (NOT WIN32)
#     target_link_libraries(${QGIS_APP_NAME} QTSignal)
# endif()

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER "org.qgis.qgis${FRAMEWORK_VERSION}_app"
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        # PUBLIC_HEADER "${QGIS_APP_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
    )

    set_target_properties(${QGIS_APP_NAME} PROPERTIES
        MACOSX_BUNDLE_INFO_PLIST "${CMAKE_SOURCE_DIR}/cmake/app.info.plist.in"
        INSTALL_RPATH "@executable_path/../../../../Library/Frameworks;@executable_path/../Frameworks"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

if(MSVC)
  install(FILES qgis.ico qgis-mime.ico qgis-qgs.ico qgis-qlr.ico qgis-qml.ico qgis-qpt.ico DESTINATION ${INSTALL_BIN_DIR}/icons)
endif()

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_EXECUTABLES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${QGIS_APP_NAME}
        BUNDLE DESTINATION ${INSTALL_BIN_DIR}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR}
        LIBRARY DESTINATION ${INSTALL_LIB_DIR}
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )
endif()

if(GET_DEPENDENCIES)

    # Copy dependencies to bin dir
    set(RUN_DEPENDENCIES
        lib_png
        lib_tiff
        lib_jpeg
        lib_jbig
        lib_lzma
        lib_webp
        lib_openssl
        lib_curl
        lib_jsonc
        lib_bzip2
        lib_qhull
        lib_proj
        lib_pq
        lib_oci
        lib_geotiff
        lib_gif
        lib_hdf4
        lib_openjpeg
        lib_kml
        lib_opencad
        lib_xml2
        lib_spatialite
        lib_szip
        lib_uriparser
        lib_z
        lib_freetype
        lib_harfbuzz
        lib_bz2
    )

    get_compiler_version(COMPILER)

    foreach(RUN_DEPENDENCY ${RUN_DEPENDENCIES})
        add_custom_command(TARGET ${QGIS_APP_NAME}
            POST_BUILD
            COMMAND ${CMAKE_COMMAND} -DDST_PATH="${CMAKE_BINARY_DIR}/output/lib" -DSRC_PATH="${PROJECT_BINARY_DIR}" -DREPKA_PACKAGE="${RUN_DEPENDENCY}" -DCOMPILER="${COMPILER}" -DOSX_FRAMEWORK="${OSX_FRAMEWORK}" -P ${PROJECT_SOURCE_DIR}/cmake/get_dependency.cmake
            COMMENT "Get QGIS App dependency ${RUN_DEPENDENCY}"
        )
    endforeach()

endif()