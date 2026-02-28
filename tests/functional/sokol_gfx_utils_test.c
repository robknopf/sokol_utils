#define SOKOL_IMPL
#include "sokol_gfx.h"
#define SOKOL_GFX_UTILS_IMPL
#include "sokol_gfx_utils.h"
#include "utest.h"

UTEST(sokol_gfx_utils, readback_request_null) {
    sg_image img = { .id = 0 };
    void* req = sg_readback_request(img);
    EXPECT_TRUE(req == NULL);
}
