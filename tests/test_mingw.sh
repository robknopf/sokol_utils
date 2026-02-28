#!/usr/bin/env bash
set -e
mkdir -p build/mingw
cmake -DCMAKE_TOOLCHAIN_FILE=mingw_toolchain.cmake -DSOKOL_BACKEND=SOKOL_DUMMY_BACKEND -B build/mingw tests
cmake --build build/mingw -j4
echo "Running tests with Wine..."
wine build/mingw/sokol-utils-test.exe
wine build/mingw/sokol-utils-compiletest-c.exe
wine build/mingw/sokol-utils-compiletest-cxx.exe
