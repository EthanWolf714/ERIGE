#include "game/player.h"

Player::Player()
{
    //player size init
    size.x = 0.5;
    size.y = 1.0f;
    size.z = 0.5;

    //init speed and sense
    speed = 0.05f;
    velocity = Vector3Zero();
    mouseSensitivity = 0.3f;

    //player camera
    m_PlayerCam = {0};
    m_PlayerCam.position = (Vector3){0.0,20 + size.y, 1.0f};
    m_PlayerCam.target = Vector3Zero(); // camera looking at point
    m_PlayerCam.up = (Vector3){0.0f, 1.0f, 0.0f}; // camera up vector
    m_PlayerCam.fovy = 90.0f;
    m_PlayerCam.projection = CAMERA_PERSPECTIVE;
    //cameraMode = CAMERA_FIRST_PERSON;
    DisableCursor(); // limit cursor movement to window
}