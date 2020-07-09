INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}/src/core
  ${CMAKE_SOURCE_DIR}/src/core/annotations
  ${CMAKE_SOURCE_DIR}/src/core/auth
  ${CMAKE_SOURCE_DIR}/src/core/expression
  ${CMAKE_SOURCE_DIR}/src/core/gps
  ${CMAKE_SOURCE_DIR}/src/core/dxf
  ${CMAKE_SOURCE_DIR}/src/core/geometry
  ${CMAKE_SOURCE_DIR}/src/core/geocms/geonode
  ${CMAKE_SOURCE_DIR}/src/core/metadata
  ${CMAKE_SOURCE_DIR}/src/core/mesh
  ${CMAKE_SOURCE_DIR}/src/core/numericformats
  ${CMAKE_SOURCE_DIR}/src/core/labeling
  ${CMAKE_SOURCE_DIR}/src/core/layertree
  ${CMAKE_SOURCE_DIR}/src/core/locator
  ${CMAKE_SOURCE_DIR}/src/core/numericformats
  ${CMAKE_SOURCE_DIR}/src/core/pal
  ${CMAKE_SOURCE_DIR}/src/core/providers/memory
  ${CMAKE_SOURCE_DIR}/src/core/raster
  ${CMAKE_SOURCE_DIR}/src/core/scalebar
  ${CMAKE_SOURCE_DIR}/src/core/symbology
  ${CMAKE_SOURCE_DIR}/src/core/effects
  ${CMAKE_SOURCE_DIR}/src/core/validity
  ${CMAKE_SOURCE_DIR}/src/core/vectortile

  ${CMAKE_BINARY_DIR}/src/core
)

INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/external/nlohmann

)

ADD_EXECUTABLE(qgis ${QGIS_APPMAIN_SRCS} app.cpp)

TARGET_LINK_LIBRARIES(qgis qgis_core)

