#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){

    InitWindow(720, 720, "Now with more bugs!");
    SetTargetFPS(24);
    float x = 0;
    while(!WindowShouldClose()){
        float dt = GetFrameTime();
        
        if (IsKeyDown(KEY_ENTER)){

            x += 100 * dt;
        }
        BeginDrawing();
        ClearBackground(BEIGE);
        DrawRectangle(100,100,200,200,(Color){255,255,0,255});
        EndDrawing();
    }
    CloseWindow();
    return 0;
}