#!/bin/bash
wget -P /tmp/ https://raw.github.com/catiemokeseku/alx-low_level_programming/master/0x18-dynamic_libraries
export LD_PRELOAD=/tmp/number.so
