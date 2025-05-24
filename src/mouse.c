#include "../include/mouse.h"

void mouse_Set(Mouse *mouse, Vector2 position, float delta_x, float delta_y)
{
    mouse->position = position;
    mouse->delta_x = delta_x;
    mouse->delta_y = delta_y;
}