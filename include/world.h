// world.h

#ifndef WORLD_H
#define WORLD_H

#define WORLD_HEIGHT                    64
#define WORLD_WIDTH                     64
#define WORLD_DEPTH                     64

#include <raylib.h>

#include "player.h"

/*
    world_DrawWorld()
    --------------------
    Player player --> this function uses the player's attributes to generate the world

    DEFINITION: src/world.c
*/
void world_DrawWorld(Player player);

#endif  /* WORLD_H */