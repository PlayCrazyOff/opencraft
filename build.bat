@echo off
setlocal enabledelayedexpansion

set RAYLIB_INCLUDE=C:\raylib\include
set RAYLIB_LIB=C:\raylib\lib

set CC=gcc
set CFLAGS=-I"%RAYLIB_INCLUDE%" -L"%RAYLIB_LIB%" -lraylib -lopengl32 -lgdi32 -lwinmm -static

%CC% -I. -o opencraft.exe src\player.c src\screen.c src\mouse.c src\camera.c src\world.c src\main.c %CFLAGS%