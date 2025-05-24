#include "../include/camera.h"

void camera_Create(MainCamera *main_camera, Camera3D *camera, Vector3 position, Vector3 target, Vector3 up, int fovy, int projection)
{
    main_camera->yaw = 0.0f;
    main_camera->pitch = 0.0f;
    main_camera->sensitivity = 0.003f;

    camera->position = position;
    camera->target = target;
    camera->up = up;
    camera->fovy = fovy;
    camera->projection = projection;
}