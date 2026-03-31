#pragma once
#include "raylib.h"
#include "raymath.h"
#include "engine/Camera.h"






class Player 
{
    

    public:
        Camera m_PlayerCam;
        
        Player();
        void Event();
        void Update();
        void Draw();

        Vector3 GetPosition();
        Vector3 GetSize();

        Vector3 GetVelocity();

        void SetXPos();
        void SetYPos();
        void SetZPos();
        void setPlaneCollision(bool b);
        void Gravity(bool b);
        void setVelocity(Vector3 velocity);
        

    private:
        Vector3 size;
        Vector3 velocity;
        float speed;
        float mouseSensitivity;

        BoundingBox boundingBox;
        Vector3 previousPosition;

        float gravity;
        bool planeCollision;
     
        

};



