#include "screen.h"

void screen_SetParams(Screen *screen, float width, float height, Vector2 center)
{
    screen->width = width;
    screen->height = height;
    screen->center = center;
}
