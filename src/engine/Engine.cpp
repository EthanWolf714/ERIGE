#include "Engine.h"

void Engine::Init(){
    InitWindow(800, 450, "Ulfr Engine");
    SetTargetFPS(60);
    m_running = true;
    m_testTexture = LoadTexture("assets/pics/greystone.png");
    m_camera = { 0 };
    m_camera.position = (Vector3){ 0.0f, 0.0f, 5.0f }; // looking at the quad from 5 units back
    m_camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    m_camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    m_camera.fovy = 60.0f;
    m_camera.projection = CAMERA_PERSPECTIVE;
    
    TraceLog(LOG_INFO, "Working directory: %s", GetWorkingDirectory());
}

void Engine::Run(){
    while(!WindowShouldClose() && m_running)
    {
       
        Update();
        Render();
    }
}

void Engine::ShutDown(){
    UnloadTexture(m_testTexture);
    CloseWindow();
}

void Engine::Update()
{
    UpdateCamera(&m_camera, CAMERA_FREE);
}

void Engine::Render()
{
    
    BeginDrawing();
        ClearBackground(BLACK);

        BeginMode3D(m_camera);
            DrawGrid(10,1.0f);
            rlSetTexture(m_testTexture.id);
            rlBegin(RL_QUADS);
                // front face of a wall quad
                // x is left/right, y is up/down, z is depth
                rlTexCoord2f(0.0f, 0.0f);
                rlVertex3f(-1.0f,  1.0f, 0.0f); // top left

                rlTexCoord2f(0.0f, 1.0f);
                rlVertex3f(-1.0f, -1.0f, 0.0f); // bottom left

                rlTexCoord2f(1.0f, 1.0f);
                rlVertex3f( 1.0f, -1.0f, 0.0f); // bottom right

                rlTexCoord2f(1.0f, 0.0f);
                rlVertex3f( 1.0f,  1.0f, 0.0f); // top right
            rlEnd();
            rlSetTexture(0);
        EndMode3D();
    EndDrawing();


}