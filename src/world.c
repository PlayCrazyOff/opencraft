#include "../include/world.h"

void world_DrawWorld(Player player)
{    
    int player_x = (int) player.position.x;
    int player_z = (int) player.position.z;

    for (int x = player_x - player.fov; x <= player_x + player.fov; x++)
        for (int z = player_z - player.fov; z <= player_z + player.fov; z++)
        {
            Vector3 position = {x, 0, z};
            DrawCube(position, 1, 1, 1, GREEN);
            DrawCubeWires(position, 1, 1, 1, DARKGREEN);
        }
}