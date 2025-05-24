// player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <raylib.h>

/*
    Player
    -----------
    Vector3 positon --> the player position
    int fov --> (Field Of View)
*/
typedef struct
{
    Vector3 position;
    int fov;
} Player;

/*
    player_CreateNew()
    -----------------------
    Player *player --> a pointer to a player
    Vector3 position --> the new player position
    int fov --> the new player FOV

    DEFINITION: src/player.c
*/
void player_CreateNew(Player *player, Vector3 position, int fov);

#endif  /* PLAYER_H */