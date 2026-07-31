#define SOKOL_IMPL
#include "sokol_app.h"
#define SOKOL_APP_UTILS_IMPL
#include "sokol_app_utils.h"
#include "utest.h"

UTEST(sokol_app_utils, num_displays) {
    // Just verify the function exists and returns something sane
    int num = sapp_num_displays();
    EXPECT_GE(num, 0);
}

UTEST(sokol_app_utils, swap_interval) {
    sapp_set_swap_interval(0);
    EXPECT_EQ(0, sapp_get_swap_interval());
    sapp_set_swap_interval(1);
    EXPECT_EQ(1, sapp_get_swap_interval());
    sapp_set_swap_interval(2);
    EXPECT_EQ(2, sapp_get_swap_interval());
}

UTEST(sokol_app_utils, mouse_position_tracks_event_state) {
    float x = 0.0f;
    float y = 0.0f;
    _sapp.mouse.x = 12.5f;
    _sapp.mouse.y = -3.0f;
    sapp_set_mouse_position(10.0f, 20.0f);
    sapp_get_mouse_position(&x, &y);
    EXPECT_EQ(12.5f, x);
    EXPECT_EQ(-3.0f, y);
    sapp_get_mouse_position(0, 0);
    _sapp.mouse.x = 0.0f;
    _sapp.mouse.y = 0.0f;
}
