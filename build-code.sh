#!/bin/bash
STRING="Start build script"
echo $STRING
# Remove old build folder
rm -rf build
# Create build directory and generate Make file.
cmake -S . -B build
# Build Executable
cmake --build build

