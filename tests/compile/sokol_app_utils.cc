#define SOKOL_IMPL
#include "sokol_app.h"
#define SOKOL_APP_UTILS_IMPL
#include "sokol_app_utils.h"

void use_app_utils(void) {
    sapp_num_displays();
    sapp_set_mouse_position(0.0f, 0.0f);
    sapp_get_mouse_position(nullptr, nullptr);
}
