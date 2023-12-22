cmake_minimum_required(VERSION 3.10.2)

project(rubber-duck LANGUAGES CXX VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
    core/src/main.cpp
    core/src/runner.cpp
    core/src/parser.cpp
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/core/include
)

install(
    TARGETS ${PROJECT_NAME}
    RUNTIME
    DESTINATION bin
)
# Package
SET(CPACK_PACKAGE_VERSION_MAJOR ${CMAKE_PROJECT_VERSION_MAJOR})
SET(CPACK_PACKAGE_VERSION_MINOR ${CMAKE_PROJECT_VERSION_MINOR})
SET(CPACK_PACKAGE_VERSION_PATCH ${CMAKE_PROJECT_VERSION_PATCH})
include(CPack)

