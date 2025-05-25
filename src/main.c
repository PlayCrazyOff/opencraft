// main.c

#include <raylib.h>
#include <math.h>

#include <include/world.h>
#include <include/camera.h>
#include <include/mouse.h>
#include <include/screen.h>

int main()
{
    // Setup the screen and the mouse
    Screen screen;
    Mouse mouse;

    // Define the player
    Player player;
    
    // Create the window and hide the mouse
    InitWindow(800, 600, "OpenCraft 0.0");
    HideCursor();

    // Create the camera
    MainCamera camera;
    camera_Create(&camera, &camera.camera, (Vector3){10.0f, 2.0f, 10.0f}, (Vector3){0.0f, 0.0f, 0.0f}, (Vector3){0.0f, 1.0f, 0.0f}, 45.0f, CAMERA_PERSPECTIVE);

    // Create the player
    player_CreateNew(&player, camera.camera.position, 25);

    // Create the screen
    screen_SetParams(&screen, GetScreenWidth(), GetScreenHeight(), (Vector2){(float)GetScreenWidth() / 2, (float)GetScreenHeight() / 2});

    // Set the position of the mouse
    SetMousePosition((int)screen.center.x, (int)screen.center.y);
    mouse.texture = LoadTexture("assets/cursor.png");

    // Main loop
    while (!WindowShouldClose())
    {
        /*
            ------------------------------------------
            This code locks the mouse in the middle of the screen and allows the user to move the
            camera without limits.
        */
        mouse_Set(&mouse, GetMousePosition(), mouse.position.x - screen.center.x, mouse.position.y - screen.center.y);

        camera.yaw -= mouse.delta_x * camera.sensitivity;
        camera.pitch -= mouse.delta_y * camera.sensitivity;

        if (camera.pitch > 1.5533f) camera.pitch = 1.5533f;
        if (camera.pitch < -1.5533f) camera.pitch = -1.5533f;

        Vector3 direction = {
            cosf(camera.pitch) * sinf(camera.yaw),
            sinf(camera.pitch),
            cosf(camera.pitch) * cosf(camera.yaw)
        };

        Vector3 cameraTarget = {
            camera.camera.position.x + direction.x,
            camera.camera.position.y + direction.y,
            camera.camera.position.z + direction.z
        };

        camera.camera.target = cameraTarget;

        SetMousePosition((int)screen.center.x, (int)screen.center.y);
        // ------------------------------------------

        UpdateCamera(&camera.camera, CAMERA_FIRST_PERSON);

        BeginDrawing();

            BeginMode3D(camera.camera);

                ClearBackground(BLUE);

                // Draw the world
                player.position = camera.camera.position;
                world_DrawWorld(player);

            EndMode3D();

            Vector2 drawPos = {
                screen.center.x - (mouse.texture.width / 2.0f) / 2.0f,
                screen.center.y - (mouse.texture.height / 2.0f) / 2.0f
            };

            DrawTextureEx(mouse.texture, drawPos, 0.0f, 2.0f, WHITE);

        EndDrawing();
    }

    // Free memory
    UnloadTexture(mouse.texture);
    CloseWindow();

    return 0;
}