// screen.h

#ifndef SCREEN_H
#define SCREEN_H

#include <raylib.h>

/*
    Screen
    -------------
    float width --> the screen width
    float height --> the screen height
    Vector2 center --> the center of the screen

    NOTE: all the fields of this structure don't have any effects on the game window.
    These are just parameters defined to manipulate the screen easier.
*/
typedef struct
{
    float width;
    float height;
    Vector2 center;
} Screen;

/*
    screen_SetParams()
    -----------------------
    Screen *screen --> a pointer to the screen
    float width --> set the screen width
    float height --> set the screen height
    Vector2 center --> set the center of the screen

    DEFINITION: src/screen.c
*/
void screen_SetParams(Screen *screen, float width, float height, Vector2 center);

#endif  /* SCREEN_H */