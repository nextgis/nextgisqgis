################################################################################
# Copyright (C) 2020-2022, NextGIS <info@nextgis.com>
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

# sources
if (PREPARE_ONLY)
    # add_flex_files_prefix(raster raster/qgsrastercalclexer.ll)
    add_flex_files(raster/qgsrastercalclexer.ll)
    add_bison_files_prefix(raster_ raster/qgsrastercalcparser.yy)
else(PREPARE_ONLY)

set(QGIS_ANALYSIS_SRCS

georeferencing/qgsgcpgeometrytransformer.cpp
georeferencing/qgsgcptransformer.cpp
georeferencing/qgsleastsquares.cpp

interpolation/qgsgridfilewriter.cpp
interpolation/qgsidwinterpolator.cpp
interpolation/qgsinterpolator.cpp
interpolation/qgstininterpolator.cpp
interpolation/Bezier3D.cpp
interpolation/CloughTocherInterpolator.cpp
interpolation/qgsdualedgetriangulation.cpp
interpolation/HalfEdge.cpp
interpolation/LinTriangleInterpolator.cpp
interpolation/MathUtils.cpp
interpolation/NormVecDecorator.cpp
interpolation/ParametricLine.cpp
interpolation/TriangleInterpolator.cpp
interpolation/qgstriangulation.cpp
interpolation/TriDecorator.cpp
interpolation/Vector3D.cpp

processing/qgsalgorithmaddincrementalfield.cpp
processing/qgsalgorithmaddtablefield.cpp
processing/qgsalgorithmaddxyfields.cpp
processing/qgsalgorithmaffinetransform.cpp
processing/qgsalgorithmaggregate.cpp
processing/qgsalgorithmangletonearest.cpp
processing/qgsalgorithmannotations.cpp
processing/qgsalgorithmapplylayerstyle.cpp
processing/qgsalgorithmarraytranslatedfeatures.cpp
processing/qgsalgorithmaspect.cpp
processing/qgsalgorithmassignprojection.cpp
processing/qgsalgorithmattributeindex.cpp
# processing/qgsalgorithmbatchgeocode.cpp
# processing/qgsalgorithmbatchnominatimgeocode.cpp
processing/qgsalgorithmboundary.cpp
processing/qgsalgorithmboundingbox.cpp
processing/qgsalgorithmbuffer.cpp
processing/qgsalgorithmcalculateoverlaps.cpp
processing/qgsalgorithmcategorizeusingstyle.cpp
processing/qgsalgorithmcellstatistics.cpp
processing/qgsalgorithmcentroid.cpp
processing/qgsalgorithmclip.cpp
processing/qgsalgorithmconditionalbranch.cpp
processing/qgsalgorithmconstantraster.cpp
processing/qgsalgorithmconverttocurves.cpp
processing/qgsalgorithmconvexhull.cpp
processing/qgsalgorithmcreatedirectory.cpp
# processing/qgsalgorithmdbscanclustering.cpp
processing/qgsalgorithmdeleteduplicategeometries.cpp
processing/qgsalgorithmdensifygeometriesbycount.cpp
processing/qgsalgorithmdensifygeometriesbyinterval.cpp
processing/qgsalgorithmdetectdatasetchanges.cpp
processing/qgsalgorithmdifference.cpp
processing/qgsalgorithmdissolve.cpp
processing/qgsalgorithmdistancewithin.cpp
processing/qgsalgorithmdrape.cpp
processing/qgsalgorithmdropfields.cpp
processing/qgsalgorithmdropgeometry.cpp
processing/qgsalgorithmdropmzvalues.cpp
# processing/qgsalgorithmdxfexport.cpp
processing/qgsalgorithmexecutepostgisquery.cpp
processing/qgsalgorithmexecutespatialitequery.cpp
processing/qgsalgorithmexecutespatialitequeryregistered.cpp
processing/qgsalgorithmexplode.cpp
processing/qgsalgorithmexplodehstore.cpp
processing/qgsalgorithmexportlayersinformation.cpp
processing/qgsalgorithmexportmesh.cpp
processing/qgsalgorithmexporttopostgresql.cpp
processing/qgsalgorithmexporttospreadsheet.cpp
processing/qgsalgorithmextendlines.cpp
processing/qgsalgorithmextentfromlayer.cpp
processing/qgsalgorithmextenttolayer.cpp
processing/qgsalgorithmextractbinary.cpp
processing/qgsalgorithmextractbyattribute.cpp
processing/qgsalgorithmextractbyexpression.cpp
processing/qgsalgorithmextractbyextent.cpp
processing/qgsalgorithmextractbylocation.cpp
processing/qgsalgorithmextractlabels.cpp
processing/qgsalgorithmextractlayoutmapextent.cpp
processing/qgsalgorithmextractzmvalues.cpp
processing/qgsalgorithmextractvertices.cpp
processing/qgsalgorithmextractspecificvertices.cpp
processing/qgsalgorithmfieldcalculator.cpp
processing/qgsalgorithmfiledownloader.cpp
processing/qgsalgorithmfillnodata.cpp
processing/qgsalgorithmfilter.cpp
processing/qgsalgorithmfilterbygeometry.cpp
processing/qgsalgorithmfiltervertices.cpp
processing/qgsalgorithmfixgeometries.cpp
processing/qgsalgorithmflattenrelationships.cpp
processing/qgsalgorithmforcerhr.cpp
processing/qgsalgorithmfuzzifyraster.cpp
processing/qgsalgorithmgeometrybyexpression.cpp
# processing/qgsalgorithmgpsbabeltools.cpp
processing/qgsalgorithmgrid.cpp
processing/qgsalgorithmhillshade.cpp
processing/qgsalgorithmimportphotos.cpp
processing/qgsalgorithminterpolatepoint.cpp
processing/qgsalgorithmintersection.cpp
processing/qgsalgorithmjoinbyattribute.cpp
processing/qgsalgorithmjoinbylocation.cpp
processing/qgsalgorithmjoinbynearest.cpp
processing/qgsalgorithmjoinwithlines.cpp
processing/qgsalgorithmkmeansclustering.cpp
processing/qgsalgorithmlinedensity.cpp
processing/qgsalgorithmlineintersection.cpp
processing/qgsalgorithmlinesubstring.cpp
processing/qgsalgorithmloadlayer.cpp
processing/qgsalgorithmmeancoordinates.cpp
processing/qgsalgorithmmergelines.cpp
processing/qgsalgorithmmergevector.cpp
processing/qgsalgorithmminimumenclosingcircle.cpp
processing/qgsalgorithmmultiparttosinglepart.cpp
processing/qgsalgorithmmultiringconstantbuffer.cpp
processing/qgsalgorithmnearestneighbouranalysis.cpp
processing/qgsalgorithmoffsetlines.cpp
processing/qgsalgorithmorderbyexpression.cpp
processing/qgsalgorithmorientedminimumboundingbox.cpp
processing/qgsalgorithmorthogonalize.cpp
processing/qgsalgorithmpackage.cpp
processing/qgsalgorithmpixelcentroidsfrompolygons.cpp
processing/qgsalgorithmarrayoffsetlines.cpp
processing/qgsalgorithmpolygonstolines.cpp
processing/qgsalgorithmpointonsurface.cpp
processing/qgsalgorithmpointsinpolygon.cpp
processing/qgsalgorithmpointtolayer.cpp
processing/qgsalgorithmpointsalonggeometry.cpp
processing/qgsalgorithmpointslayerfromtable.cpp
processing/qgsalgorithmpointstopaths.cpp
processing/qgsalgorithmpoleofinaccessibility.cpp
processing/qgsalgorithmpolygonize.cpp
processing/qgsalgorithmprojectpointcartesian.cpp
processing/qgsalgorithmpromotetomultipart.cpp
processing/qgsalgorithmraiseexception.cpp
processing/qgsalgorithmrandomextract.cpp
processing/qgsalgorithmrandompointsextent.cpp
processing/qgsalgorithmrandompointsinpolygons.cpp
processing/qgsalgorithmrandompointsonlines.cpp
processing/qgsalgorithmrandomraster.cpp
processing/qgsalgorithmrasterfrequencybycomparisonoperator.cpp
processing/qgsalgorithmrasterlayerproperties.cpp
processing/qgsalgorithmrasterlayeruniquevalues.cpp
processing/qgsalgorithmrasterlogicalop.cpp
processing/qgsalgorithmrasterize.cpp
processing/qgsalgorithmrastersampling.cpp
processing/qgsalgorithmrasterstackposition.cpp
processing/qgsalgorithmrasterstatistics.cpp
processing/qgsalgorithmrastersurfacevolume.cpp
processing/qgsalgorithmrasterzonalstats.cpp
processing/qgsalgorithmreclassifybylayer.cpp
processing/qgsalgorithmrectanglesovalsdiamonds.cpp
processing/qgsalgorithmrefactorfields.cpp
processing/qgsalgorithmremoveduplicatesbyattribute.cpp
processing/qgsalgorithmremoveduplicatevertices.cpp
processing/qgsalgorithmremoveholes.cpp
processing/qgsalgorithmremovenullgeometry.cpp
processing/qgsalgorithmrenamelayer.cpp
processing/qgsalgorithmrenametablefield.cpp
processing/qgsalgorithmrepairshapefile.cpp
processing/qgsalgorithmrescaleraster.cpp
processing/qgsalgorithmreverselinedirection.cpp
processing/qgsalgorithmrotate.cpp
processing/qgsalgorithmroundness.cpp
processing/qgsalgorithmroundrastervalues.cpp
processing/qgsalgorithmruggedness.cpp
processing/qgsalgorithmsavefeatures.cpp
processing/qgsalgorithmsavelog.cpp
processing/qgsalgorithmsaveselectedfeatures.cpp
processing/qgsalgorithmsegmentize.cpp
processing/qgsalgorithmserviceareafromlayer.cpp
processing/qgsalgorithmserviceareafrompoint.cpp
processing/qgsalgorithmsetlayerencoding.cpp
processing/qgsalgorithmsetmvalue.cpp
processing/qgsalgorithmsetvariable.cpp
processing/qgsalgorithmsetzvalue.cpp
processing/qgsalgorithmshortestline.cpp
processing/qgsalgorithmshortestpathlayertopoint.cpp
processing/qgsalgorithmshortestpathpointtolayer.cpp
processing/qgsalgorithmshortestpathpointtopoint.cpp
processing/qgsalgorithmshpencodinginfo.cpp
processing/qgsalgorithmsimplify.cpp
processing/qgsalgorithmsinglesidedbuffer.cpp
processing/qgsalgorithmslope.cpp
processing/qgsalgorithmsmooth.cpp
processing/qgsalgorithmsnapgeometries.cpp
processing/qgsalgorithmsnaptogrid.cpp
processing/qgsalgorithmspatialindex.cpp
processing/qgsalgorithmsplitfeaturesbyattributecharacter.cpp
processing/qgsalgorithmsplitlineantimeridian.cpp
processing/qgsalgorithmsplitlinesbylength.cpp
processing/qgsalgorithmsplitvectorlayer.cpp
processing/qgsalgorithmsplitwithlines.cpp
# processing/qgsalgorithmstdbscanclustering.cpp
processing/qgsalgorithmstringconcatenation.cpp
processing/qgsalgorithmswapxy.cpp
processing/qgsalgorithmsubdivide.cpp
processing/qgsalgorithmsumlinelength.cpp
processing/qgsalgorithmsymmetricaldifference.cpp
processing/qgsalgorithmtaperedbuffer.cpp
processing/qgsalgorithmtinmeshcreation.cpp
processing/qgsalgorithmtransect.cpp
processing/qgsalgorithmtransform.cpp
processing/qgsalgorithmtranslate.cpp
processing/qgsalgorithmtruncatetable.cpp
processing/qgsalgorithmunion.cpp
processing/qgsalgorithmuniquevalueindex.cpp
processing/qgsalgorithmvectorize.cpp
processing/qgsalgorithmwedgebuffers.cpp
# processing/qgsalgorithmwritevectortiles.cpp
processing/qgsalgorithmzonalhistogram.cpp
processing/qgsalgorithmzonalstatistics.cpp
processing/qgsalgorithmzonalstatisticsfeaturebased.cpp
processing/qgsbookmarkalgorithms.cpp
processing/qgsprojectstylealgorithms.cpp
processing/qgsstylealgorithms.cpp

processing/qgsalgorithmnetworkanalysisbase.cpp

processing/qgsnativealgorithms.cpp
processing/qgsoverlayutils.cpp
processing/qgsrasteranalysisutils.cpp
processing/qgsreclassifyutils.cpp

raster/qgsalignraster.cpp
raster/qgsninecellfilter.cpp
raster/qgsruggednessfilter.cpp
raster/qgsderivativefilter.cpp
raster/qgshillshadefilter.cpp
raster/qgskde.cpp
raster/qgsslopefilter.cpp
raster/qgsaspectfilter.cpp
raster/qgstotalcurvaturefilter.cpp
raster/qgsrelief.cpp
raster/qgsrastercalcnode.cpp
raster/qgsrastercalculator.cpp
raster/qgsrastermatrix.cpp
vector/qgsgeometrysnapper.cpp
vector/qgsgeometrysnappersinglesource.cpp
vector/qgszonalstatistics.cpp

mesh/qgsmeshcontours.cpp
mesh/qgsmeshtriangulation.cpp

network/qgsgraph.cpp
network/qgsgraphbuilder.cpp
network/qgsgraphbuilderinterface.cpp
network/qgsnetworkspeedstrategy.cpp
network/qgsnetworkdistancestrategy.cpp
network/qgsvectorlayerdirector.cpp
network/qgsgraphanalyzer.cpp

vector/geometry_checker/qgsfeaturepool.cpp
vector/geometry_checker/qgsgeometryanglecheck.cpp
vector/geometry_checker/qgsgeometryareacheck.cpp
vector/geometry_checker/qgsgeometrycheck.cpp
vector/geometry_checker/qgsgeometrycheckresolutionmethod.cpp
vector/geometry_checker/qgsgeometrycheckcontext.cpp
vector/geometry_checker/qgsgeometrychecker.cpp
vector/geometry_checker/qgsgeometrycheckerror.cpp
vector/geometry_checker/qgsgeometrycheckerutils.cpp
vector/geometry_checker/qgsgeometrycheckregistry.cpp
vector/geometry_checker/qgsgeometrycontainedcheck.cpp
vector/geometry_checker/qgsgeometrydanglecheck.cpp
vector/geometry_checker/qgsgeometrydegeneratepolygoncheck.cpp
vector/geometry_checker/qgsgeometryduplicatecheck.cpp
vector/geometry_checker/qgsgeometryduplicatenodescheck.cpp
vector/geometry_checker/qgsgeometryfollowboundariescheck.cpp
vector/geometry_checker/qgsgeometrygapcheck.cpp
vector/geometry_checker/qgsgeometrymissingvertexcheck.cpp
vector/geometry_checker/qgsgeometryholecheck.cpp
vector/geometry_checker/qgsgeometrylineintersectioncheck.cpp
vector/geometry_checker/qgsgeometrylinelayerintersectioncheck.cpp
vector/geometry_checker/qgsgeometrymultipartcheck.cpp
vector/geometry_checker/qgsgeometryoverlapcheck.cpp
vector/geometry_checker/qgsgeometrypointcoveredbylinecheck.cpp
vector/geometry_checker/qgsgeometrypointinpolygoncheck.cpp
vector/geometry_checker/qgsgeometrysegmentlengthcheck.cpp
vector/geometry_checker/qgsgeometryselfcontactcheck.cpp
vector/geometry_checker/qgsgeometryselfintersectioncheck.cpp
vector/geometry_checker/qgsgeometrysliverpolygoncheck.cpp
vector/geometry_checker/qgsgeometrytypecheck.cpp
vector/geometry_checker/qgsgeometryisvalidcheck.cpp
vector/geometry_checker/qgssinglegeometrycheck.cpp
vector/geometry_checker/qgssinglegeometrycheck.cpp
vector/geometry_checker/qgsvectordataproviderfeaturepool.cpp
vector/geometry_checker/qgsvectorlayerfeaturepool.cpp
  
  ${CMAKE_CURRENT_SOURCE_DIR}/flex_qgsrastercalclexer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/qgsrastercalcparser.cpp
)

SET(QGIS_ANALYSIS_HDRS
qgsanalysis.h

georeferencing/qgsgcpgeometrytransformer.h
georeferencing/qgsgcptransformer.h

interpolation/Bezier3D.h
interpolation/CloughTocherInterpolator.h
interpolation/qgsdualedgetriangulation.h
interpolation/HalfEdge.h
interpolation/LinTriangleInterpolator.h
interpolation/MathUtils.h
interpolation/NormVecDecorator.h
interpolation/ParametricLine.h
interpolation/TriDecorator.h
interpolation/TriangleInterpolator.h
interpolation/qgstriangulation.h
interpolation/Vector3D.h
interpolation/qgsgridfilewriter.h
interpolation/qgsidwinterpolator.h
interpolation/qgsinterpolator.h
interpolation/qgstininterpolator.h

mesh/qgsmeshcontours.h
mesh/qgsmeshtriangulation.h

network/qgsgraph.h
network/qgsgraphanalyzer.h
network/qgsgraphbuilder.h
network/qgsgraphbuilderinterface.h
network/qgsgraphdirector.h
network/qgsnetworkdistancestrategy.h
network/qgsnetworkspeedstrategy.h
network/qgsnetworkstrategy.h
network/qgsvectorlayerdirector.h

# processing/qgsalgorithmbatchgeocode.h
# processing/qgsalgorithmbatchnominatimgeocode.h
processing/qgsalgorithmfiledownloader.h
processing/qgsalgorithmimportphotos.h
processing/qgsnativealgorithms.h
processing/qgsprojectstylealgorithms.h
processing/qgsreclassifyutils.h

raster/qgsalignraster.h
raster/qgsaspectfilter.h
raster/qgsderivativefilter.h
raster/qgshillshadefilter.h
raster/qgskde.h
raster/qgsninecellfilter.h
raster/qgsrastercalcnode.h
raster/qgsrastercalculator.h
raster/qgsrastermatrix.h
raster/qgsrelief.h
raster/qgsruggednessfilter.h
raster/qgsslopefilter.h
raster/qgstotalcurvaturefilter.h

vector/geometry_checker/qgsfeaturepool.h
vector/geometry_checker/qgsgeometryanglecheck.h
vector/geometry_checker/qgsgeometryareacheck.h
vector/geometry_checker/qgsgeometrycheck.h
vector/geometry_checker/qgsgeometrycheckresolutionmethod.h
vector/geometry_checker/qgsgeometrycheckcontext.h
vector/geometry_checker/qgsgeometrychecker.h
vector/geometry_checker/qgsgeometrycheckerror.h
vector/geometry_checker/qgsgeometrycheckerutils.h
vector/geometry_checker/qgsgeometrycheckfactory.h
vector/geometry_checker/qgsgeometrycheckregistry.h
vector/geometry_checker/qgsgeometrycontainedcheck.h
vector/geometry_checker/qgsgeometrydanglecheck.h
vector/geometry_checker/qgsgeometrydegeneratepolygoncheck.h
vector/geometry_checker/qgsgeometryduplicatecheck.h
vector/geometry_checker/qgsgeometryduplicatenodescheck.h
vector/geometry_checker/qgsgeometryfollowboundariescheck.h
vector/geometry_checker/qgsgeometrygapcheck.h
vector/geometry_checker/qgsgeometryholecheck.h
vector/geometry_checker/qgsgeometryisvalidcheck.h
vector/geometry_checker/qgsgeometrylineintersectioncheck.h
vector/geometry_checker/qgsgeometrylinelayerintersectioncheck.h
vector/geometry_checker/qgsgeometrymissingvertexcheck.h
vector/geometry_checker/qgsgeometrymultipartcheck.h
vector/geometry_checker/qgsgeometryoverlapcheck.h
vector/geometry_checker/qgsgeometrypointcoveredbylinecheck.h
vector/geometry_checker/qgsgeometrypointinpolygoncheck.h
vector/geometry_checker/qgsgeometrysegmentlengthcheck.h
vector/geometry_checker/qgsgeometryselfcontactcheck.h
vector/geometry_checker/qgsgeometryselfintersectioncheck.h
vector/geometry_checker/qgsgeometrysliverpolygoncheck.h
vector/geometry_checker/qgsgeometrytypecheck.h
vector/geometry_checker/qgssinglegeometrycheck.h
vector/geometry_checker/qgsvectordataproviderfeaturepool.h
vector/geometry_checker/qgsvectorlayerfeaturepool.h

vector/qgsgeometrysnapper.h
vector/qgsgeometrysnappersinglesource.h
vector/qgszonalstatistics.h
)

# if (${QT_VERSION_BASE}PrintSupport_FOUND)
  set(QGIS_ANALYSIS_SRCS ${QGIS_ANALYSIS_SRCS}

    processing/qgsalgorithmlayoutatlastoimage.cpp
    processing/qgsalgorithmlayoutatlastopdf.cpp
    processing/qgsalgorithmlayouttoimage.cpp
    processing/qgsalgorithmlayouttopdf.cpp
  )
# endif()
# find_anyproject(EXIV REQUIRED)

include_directories(SYSTEM ${SPATIALITE_INCLUDE_DIR})
include_directories(SYSTEM ${SPATIALINDEX_INCLUDE_DIR})
include_directories(SYSTEM ${SQLITE3_INCLUDE_DIR})
include_directories(BEFORE raster)
include_directories(BEFORE mesh)

if(HAVE_GSL)
  include_directories(SYSTEM ${GSL_INCLUDE_DIR})
endif()

if(NOT MSVC)
  set_source_files_properties(
    qgsrastercalcparser.cpp
    # qgsmeshcalcparser.cpp
    PROPERTIES COMPILE_FLAGS "-w"
  )
else()
  if(PEDANTIC)
    # 4127 expression is constant
    # 4702 unreachable code
    set_source_files_properties(
      qgsrastercalcparser.cpp
    #   qgsmeshcalcparser.cpp
      PROPERTIES COMPILE_FLAGS "-wd4127 -wd4702"
    )
  endif()
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  set_source_files_properties(
    interpolation/qgstininterpolator.cpp
    interpolation/NormVecDecorator.cpp
    interpolation/CloughTocherInterpolator.cpp
    PROPERTIES COMPILE_FLAGS "-Wno-overloaded-virtual"
  )
endif()

# install headers

if(HAVE_OPENCL)
    include_directories(SYSTEM ${OpenCL_INCLUDE_DIRS})
endif()


#############################################################
# qgis_analysis library
set(LIB_NAME ${NG_PREFIX}qgis_analysis)
set(TARGETS ${TARGETS} ${LIB_NAME} PARENT_SCOPE)
    
add_library(${LIB_NAME} SHARED ${QGIS_ANALYSIS_SRCS} ${QGIS_ANALYSIS_HDRS})

# require c++17
target_compile_features(${LIB_NAME} PRIVATE cxx_std_17)

target_include_directories(${LIB_NAME} PUBLIC
  ${CMAKE_SOURCE_DIR}/src/analysis
  ${CMAKE_SOURCE_DIR}/src/analysis/georeferencing
  ${CMAKE_SOURCE_DIR}/src/analysis/interpolation
  ${CMAKE_SOURCE_DIR}/src/analysis/mesh
  ${CMAKE_SOURCE_DIR}/src/analysis/network
  ${CMAKE_SOURCE_DIR}/src/analysis/processing
  ${CMAKE_SOURCE_DIR}/src/analysis/raster
  ${CMAKE_SOURCE_DIR}/src/analysis/vector/
  ${CMAKE_SOURCE_DIR}/src/analysis/vector/geometry_checker

  ${CMAKE_BINARY_DIR}/src/analysis
)

GENERATE_EXPORT_HEADER(
    ${LIB_NAME}
    BASE_NAME ANALYSIS
    EXPORT_FILE_NAME qgis_analysis.h
)

set(QGIS_ANALYSIS_HDRS ${QGIS_ANALYSIS_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_analysis.h)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER "org.qgis.qgis${FRAMEWORK_VERSION}_analysis"
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_ANALYSIS_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

target_link_libraries(${LIB_NAME}
  ${NG_PREFIX}qgis_core
)

if(HAVE_GSL)
  target_link_libraries(${LIB_NAME} ${GSL_LIBRARIES})
endif()

if(HAVE_OPENCL)
    target_link_libraries(${LIB_NAME} ${OpenCL_LIBRARIES})
endif()

target_compile_definitions(${LIB_NAME} PRIVATE "-DQT_NO_FOREACH")

# install
if(OSX_FRAMEWORK)
    add_custom_command(TARGET ${LIB_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
        VERBATIM
    )
endif()


if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
        INCLUDES DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
    install(FILES ${QGIS_CORE_HDRS} DESTINATION ${INSTALL_INC_DIR})
endif()

endif(PREPARE_ONLY)