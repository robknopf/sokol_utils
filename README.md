# sokol_utils

Extension utilities for the [sokol](https://github.com/floooh/sokol) headers.

Currently, this repository contains:
- `sokol_app_utils.h`: Additional functionality for `sokol_app.h`.
- `sokol_gfx_utils.h`: Additional functionality for `sokol_gfx.h` (currently readback support).

## Usage

This project's tests assumes that the [sokol](https://github.com/floooh/sokol) repository is located in the parent directory (`../sokol`).

Include the utility headers *after* the corresponding sokol header implementation. To create the implementation, define the corresponding `_IMPL` macro in exactly one C or C++ file.

### sokol_app_utils.h

```c
#define SOKOL_IMPL
#include "sokol_app.h"

#define SOKOL_APP_UTILS_IMPL
#include "sokol_app_utils.h"
```

### sokol_gfx_utils.h

```c
#define SOKOL_IMPL
#include "sokol_gfx.h"

#define SOKOL_GFX_UTILS_IMPL
#include "sokol_gfx_utils.h"
```

## API

### sokol_app_utils.h

```c
void sapp_set_window_position(int x, int y);
void sapp_set_window_size(int w, int h);
void sapp_get_window_position(int *x, int *y);
void sapp_get_window_size(int *w, int *h);
int sapp_display_width(int index);
int sapp_display_height(int index);
bool sapp_window_focused(void);
int sapp_num_displays(void);
int sapp_current_display(void);
void sapp_set_display(int index);
const char* sapp_display_name(int index);
void sapp_set_fullscreen(bool enable);
void sapp_set_swap_interval(int interval);
int sapp_get_swap_interval(void);
```

*Note: Most of these functions are only supported on desktop platforms (Windows, macOS, Linux).*

### sokol_gfx_utils.h

```c
void* sg_readback_request(sg_image img);
bool sg_readback_is_ready(void* request);
void sg_readback_wait(void* request);
void sg_readback_copy_data(void* request, void* out_pixels);
void sg_readback_destroy(void* request);
```
