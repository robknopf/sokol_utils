setup_emsdk() {
    if [ ! -d "tests/build/emsdk" ] ; then
        mkdir -p tests/build && cd tests/build
        git clone https://github.com/emscripten-core/emsdk.git
        cd emsdk
        ./emsdk install latest
        ./emsdk activate latest
        cd ../../..
    fi
    source tests/build/emsdk/emsdk_env.sh
}

build() {
    gen_preset=$1
    build_preset=$2
    pushd tests > /dev/null
    cmake --preset $gen_preset
    cmake --build --preset $build_preset
    popd > /dev/null
}

runtest() {
    cfg=$1
    ./tests/build/$cfg/sokol-utils-test
    ./tests/build/$cfg/sokol-utils-compiletest-c
    ./tests/build/$cfg/sokol-utils-compiletest-cxx
}
