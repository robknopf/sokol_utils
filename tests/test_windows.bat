@echo off
if not exist build\win_d3d11 mkdir build\win_d3d11
cmake -DSOKOL_BACKEND=SOKOL_D3D11 -B build\win_d3d11 tests
cmake --build build\win_d3d11 --config Debug
build\win_d3d11\functional\Debug\sokol-utils-test.exe
build\win_d3d11\compile\Debug\sokol-utils-compiletest-c.exe
build\win_d3d11\compile\Debug\sokol-utils-compiletest-cxx.exe
