#!/bin/bash
curl https://raw.githubusercontent.com/99yh/alx-low_level_programming/main/0x18-dynamic_libraries/fakeio.so --output /tmp/fakeio.so
export LD_PRELOAD=/tmp/fakeio.so
