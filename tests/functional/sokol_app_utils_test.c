#define SOKOL_IMPL
#define SOKOL_NO_ENTRY
#include "sokol_app.h"
#define SOKOL_APP_UTILS_IMPL
#include "sokol_app_utils.h"
#include "utest.h"

UTEST(sokol_app_utils, num_displays) {
    // Just verify the function exists and returns something sane
    int num = sapp_num_displays();
    EXPECT_GE(num, 0);
}
