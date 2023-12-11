#!/bin/bash
wget -P .. https://raw.githubusertcontent.com/ZobaOkafor/alx-low_level_programming/master/0x18-dynamic_libraries/libhack101.so
export LD_PRELOAD="$PWD/../libhack101.so"
