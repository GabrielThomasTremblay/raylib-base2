#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
    
    InitWindow(250, 250, "Green Cube Adventure 3");
    SetTargetFPS(30);
    float x = 105;
    float y = 105;
    while(!WindowShouldClose()){
        float dt = GetFrameTime();

        if(IsKeyDown(KEY_UP)){

            y += -100 * dt;
        }
        if(IsKeyDown(KEY_DOWN)){

            y += 100 * dt;
        }
        if(IsKeyDown(KEY_RIGHT)){

            x += 100 * dt;
        }
        if(IsKeyDown(KEY_LEFT)){

            x += -100 * dt;
        }

        if (x > 220){

            x = 1;
        }
        if (x < 0){

            x = 219;
        }
        if (y > 220){

            y = 1;
        }
        if (y < 0){

            y = 219;
        }
        BeginDrawing();
        ClearBackground(PURPLE);
        DrawRectangle(x,y,30,30,(Color){0,255,0,255});
        EndDrawing();
    }
    CloseWindow();

}