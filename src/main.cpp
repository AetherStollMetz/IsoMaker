#define RAYGUI_IMPLEMENTATION
#include "Paint/PaintEditor.hpp"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    paint::Editor PaintEditor(screenWidth, screenHeight);

    InitWindow(screenWidth, screenHeight, "Pixel Art Editor");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GRAY);

        PaintEditor.update();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
