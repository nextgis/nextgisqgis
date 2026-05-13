# override default path where built files are put to allow running qgis without installing
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${QGIS_OUTPUT_DIRECTORY}/${QGIS_PLUGIN_SUBDIR})
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${QGIS_OUTPUT_DIRECTORY}/${QGIS_PLUGIN_SUBDIR})

include_directories(
  ${CMAKE_SOURCE_DIR}/src/core
  ${CMAKE_SOURCE_DIR}/src/gui
  ${CMAKE_BINARY_DIR}/src/gui/qgis_gui_autogen/include
)

if(IS_MULTI_CONFIG_GENERATOR)
  include_directories(
    ${CMAKE_BINARY_DIR}/src/gui/qgis_gui_autogen/include_${CMAKE_BUILD_TYPE}
  )
endif()

# providers with implemented both static and dynamic building
add_subdirectory(wms)
add_subdirectory(wcs)
add_subdirectory(delimitedtext)
add_subdirectory(arcgisrest)

if (WITH_SPATIALITE)
  add_subdirectory(spatialite)
  add_subdirectory(wfs)
  add_subdirectory(virtual)
endif()

if (POSTGRES_FOUND)
  add_subdirectory(postgres)
endif()

if (NOT FORCE_STATIC_LIBS)
  add_subdirectory(mssql)
  add_subdirectory(gpx)
  add_subdirectory(mdal)
  if (WITH_ANALYSIS)
    add_subdirectory(virtualraster)
  endif()

  if (WITH_ORACLE)
    add_subdirectory(oracle)
  endif()

  if (WITH_HANA)
    add_subdirectory(hana)
  endif()

  if (WITH_PDAL)
    add_subdirectory(pdal)
  endif()

  if (WITH_GRASS OR WITH_GRASS7 OR WITH_GRASS8)
    add_subdirectory(grass)
  endif()
endif()
