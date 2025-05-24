// camera.h

#ifndef CAMERA_H
#define CAMERA_H

#include <raylib.h>

/*
    MainCamera
    ---------------
    Camera3D camera --> the camera used to navigate in the space
    float yaw --> rotation around Y axis
    float pitch --> rotation around X axis
    float sensitivity --> mouse sensitivity
*/
typedef struct
{
    Camera3D camera;
    float yaw, pitch, sensitivity;
} MainCamera;

/*
    camera_Create()
    --------------------
    MainCamera *main_camera --> a pointer to the camera
    Camera3D *camera --> a pointer to the 3D camera (main_camera->camera)
    Vector3 position --> the 3D camera position
    Vector3 target --> the 3D camera target
    Vector3 up --> the top of the 3D camera target
    int fovy --> (Field Of View Y)
    int projection -->c 3D camera projection type

    DEFINITION: src/camera.c
*/
void camera_Create(MainCamera *main_camera, Camera3D *camera, Vector3 position, Vector3 target, Vector3 up, int fovy, int projection);

#endif  /* CAMERA_H */