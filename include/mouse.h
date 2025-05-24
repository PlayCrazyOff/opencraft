#ifndef MOUSE_H
#define MOUSE_H

#include <raylib.h>

typedef struct
{
    Vector2 position;
    float delta_x, delta_y;
} Mouse;

void mouse_Set(Mouse *mouse, Vector2 position, float delta_x, float delta_y);

#endif