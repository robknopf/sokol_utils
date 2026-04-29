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
