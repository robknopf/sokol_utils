#!/usr/bin/env bash
set -e
mkdir -p tests/build/mingw
cmake -DCMAKE_TOOLCHAIN_FILE=tests/mingw_toolchain.cmake -DSOKOL_BACKEND=SOKOL_DUMMY_BACKEND -B tests/build/mingw tests
cmake --build tests/build/mingw -j4
echo "Running tests with Wine..."
wine tests/build/mingw/sokol-utils-test.exe
wine tests/build/mingw/sokol-utils-compiletest-c.exe
wine tests/build/mingw/sokol-utils-compiletest-cxx.exe
