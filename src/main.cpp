#include "raylib.h"

int main() {

    int screenWidth = 800;
    int screenHeight = 350;
    int count = 200;
    int counter = 0;

    Vector2 pos = {(float)screenWidth/2, 0};
    int speedY = 2;
    int posXList[count];
    int posYList[count];

    for(int i = 0; i < 100; i++){
      posXList[i] = (GetRandomValue(0, screenWidth));
    }

    int speedYList[100];
    for(int i = 0; i < 100; i++){
      speedYList[i] = (GetRandomValue(1500, 2500));
    }

    InitWindow(screenWidth, screenHeight, "Purple Rain");
    SetTargetFPS(120);

    while (!WindowShouldClose()) {   
        BeginDrawing();
            ClearBackground(RAYWHITE);
            for(int i = 0; i < count; i++){
              posYList[i] += speedYList[i]/1000;
              
              DrawRectangle(posXList[i], posYList[i], 1, 15, BLACK);
            }
            pos.y += (float)speedY;

            for (int i = 0; i < count; i++)
            {
              if(posYList[i] <= screenHeight)
                counter++;
            }

            if(counter < 75){
              for(int i = 0; i < count; i++){
              posYList[i] += speedYList[i]/1000;
              
              DrawRectangle(posXList[i], posYList[i], 1, 15, BLACK);
            }
            }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
