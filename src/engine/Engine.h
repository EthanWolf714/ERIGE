#pragma once
#include "raylib.h"
#include "rlgl.h"
class Engine {
    public:
        void Init();
        void Run();
        void ShutDown();

    private:
        void Update();
        void Render();
        Camera3D m_camera;
        Texture2D m_testTexture;
        bool m_running = false;
};