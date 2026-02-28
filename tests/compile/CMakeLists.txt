set(c_sources
    sokol_main.c
    sokol_app_utils.c
    sokol_gfx_utils.c
)
set(cxx_sources
    sokol_main.cc
    sokol_app_utils.cc
    sokol_gfx_utils.cc
)

add_executable(sokol-utils-compiletest-c ${c_sources})
configure_c(sokol-utils-compiletest-c)

add_executable(sokol-utils-compiletest-cxx ${cxx_sources})
configure_cxx(sokol-utils-compiletest-cxx)
