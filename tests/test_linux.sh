#!/usr/bin/env bash
set -e
source tests/test_common.sh
build linux_gl_debug linux_gl_debug
build linux_gl_release linux_gl_release
build linux_vulkan_debug linux_vulkan_debug
build linux_vulkan_release linux_vulkan_release
runtest linux_gl_debug
