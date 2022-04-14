# include(CopyResources)

set (SVG_DIRS
    accommodation
    amenity
    arrows
    backgrounds
    components
    crosses
    emergency
    entertainment
    food
    gpsicons
    health
    landmark
    logos
    money
    religion
    services
    shopping
    sport
    symbol
    tourist
    transport
    wind_roses
)

foreach (SVG_DIR ${SVG_DIRS})
    install(DIRECTORY ${SVG_DIR} DESTINATION ${INSTALL_SHARE_DIR}/svg)
    message(STATUS "DD install(DIRECTORY ${SVG_DIR} DESTINATION ${INSTALL_SHARE_DIR}/svg)")
#   file(GLOB_RECURSE IMAGES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${SVG_DIR}/*.svg)
#   set(SVG_FILES ${SVG_FILES} ${IMAGES})
endforeach ()

# ADD_QGIS_RESOURCES("${CMAKE_CURRENT_SOURCE_DIR}" svg DEST_SVG_FILES "${SVG_FILES}")

# add_custom_target(svg ALL DEPENDS ${DEST_SVG_FILES})

