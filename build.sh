#!/bin/bash

set -e

CC="gcc"
CFLAGS="-lraylib -lGL -ldl -lm -lpthread -lX11"

$CC -I. -o opencraft src/player.c src/screen.c src/mouse.c src/camera.c src/world.c src/main.c $CFLAGS