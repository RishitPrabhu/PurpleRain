#include "raylib.h"
#include "raymath.h"
#include <list>


int main() {

    int screenWidth = 800;
    int screenHeight = 350;

    Vector2 pos = {(float)screenWidth/2, 0};
    int speedY = 2;
    std::list<float> posYList = {};
    for(int i = 0; i < 100; i++){
      posYList.push_back(GetRandomValue(0, screenWidth));
    } 

    InitWindow(screenWidth, screenHeight, "Purple Rain");
    SetTargetFPS(120);

    while (!WindowShouldClose()) {   
        BeginDrawing();
            ClearBackground(RAYWHITE);
            for(int i = 0; i < 100; i++){
              pos.x =  GetRandomValue(0, screenWidth); 
              DrawRectangle(pos.x, pos.y, 1, 15, BLACK);
            }
            pos.y += (float)speedY;
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
