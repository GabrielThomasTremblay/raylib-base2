#include "entrypoint.h"
#include "raylib.h"

void raylib_start(void){
    
    InitWindow(256, 256, "That one indie game");
    SetTargetFPS(30);

    
    while(!WindowShouldClose()){

        BeginDrawing();
        ClearBackground(BLUE);

        DrawRectangle(64,64,64,200,(Color){77, 52, 40,255});


    }
    CloseWindow;
    

    
}