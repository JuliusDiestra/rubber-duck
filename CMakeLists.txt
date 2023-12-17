cmake_minimum_required(VERSION 3.10.2)

project(rubber-duck LANGUAGES CXX)

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

