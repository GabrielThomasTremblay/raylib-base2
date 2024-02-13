#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
    
    InitWindow(700, 500, "DvD wanna be");
    SetTargetFPS(30);
    float x = 300;
    float y = 300;
    bool down = false;
    bool left = false;
    while (!WindowShouldClose()){
        float dt = GetFrameTime();

        if (left == false){

            x += 50 * dt;
        }
        if (left == true){

            x += -50 * dt;
        }
        if (down == false){

            y += 3;
        }
        if (down == true){

            y += -3;
        }
        if (x > 650){

            left = true;
            x = 649;
        }
        if (x < 0){

            left = false;
            x = 1;
        }
        if (y > 450){

            down = true;
            y = 449;
        }
        if (y < 0){

            down = false;
            y = 1;
        }

        BeginDrawing();
        ClearBackground(BLUE);
        DrawRectangle(x,y,50,50,(Color){0,0,0,255});
        //DrawCircle(x,y,50,(Color){255,255,0,255});
        EndDrawing();

    }
    CloseWindow();
    
}