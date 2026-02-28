#define SOKOL_IMPL
#include "sokol_gfx.h"
#define SOKOL_GFX_UTILS_IMPL
#include "sokol_gfx_utils.h"

void use_gfx_utils(void) {
    sg_readback_request((sg_image){0});
}
