#include "player.h"

void player_CreateNew(Player *player, Vector3 position, int fov)
{
    player->position = position;
    player->fov = fov;
}
