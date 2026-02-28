@echo off
if not exist tests\build\win_d3d11 mkdir tests\build\win_d3d11
cmake -DSOKOL_BACKEND=SOKOL_D3D11 -B tests\build\win_d3d11 tests
cmake --build tests\build\win_d3d11 --config Debug
tests\build\win_d3d11\Debug\sokol-utils-test.exe
tests\build\win_d3d11\Debug\sokol-utils-compiletest-c.exe
tests\build\win_d3d11\Debug\sokol-utils-compiletest-cxx.exe
