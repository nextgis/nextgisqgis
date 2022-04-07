set(MSSQL_SRCS
    qgsmssqlconnection.cpp
    qgsmssqlprovider.cpp
    qgsmssqlproviderconnection.cpp
    qgsmssqlgeometryparser.cpp
    qgsmssqltablemodel.cpp
    qgsmssqldataitems.cpp
    qgsmssqlexpressioncompiler.cpp
    qgsmssqlfeatureiterator.cpp
    qgsmssqlgeomcolumntypethread.cpp
    qgsmssqltransaction.cpp
    qgsmssqldatabase.cpp
)

if (WITH_GUI)
    set(MSSQL_SRCS ${MSSQL_SRCS}
        qgsmssqlprovidergui.cpp
        qgsmssqldataitemguiprovider.cpp
        qgsmssqlsourceselect.cpp
        qgsmssqlnewconnection.cpp
    )
endif()

set(MSSQL_HDRS
    qgsmssqlexpressioncompiler.h
)

########################################################
# Build
include_directories(
    ${CMAKE_BINARY_DIR}/src/ui
)

set(PROVIDER provider_mssql)
add_library(${PROVIDER} MODULE ${MSSQL_SRCS} ${MSSQL_HDRS})

target_link_libraries(${PROVIDER}
    ${NG_PREFIX}qgis_core
    Qt5::Sql
)

if (WITH_GUI)
    target_link_libraries (${PROVIDER}
        ${NG_PREFIX}qgis_gui
    )
    #add_dependencies(${PROVIDER} ui)
endif()

if(OSX_FRAMEWORK)
    set_target_properties(${PROVIDER} PROPERTIES
        INSTALL_RPATH "@loader_path/../../../Frameworks/"
        SUFFIX ".so" # ".dylib" <- /src/app/qgspluginregistry.cpp:462
    )
endif()

########################################################
# Install

install(TARGETS ${PROVIDER}
    RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
    LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
)

