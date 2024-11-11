#define RAYGUI_IMPLEMENTATION
#include "Paint/PaintEditor.hpp"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    paint::Editor PaintEditor(screenWidth, screenHeight);
    Vector2 mousePos;

    InitWindow(screenWidth, screenHeight, "Pixel Art Editor");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        PaintEditor.draw_pixels();
        PaintEditor.draw_grid();
        PaintEditor.color_selector();

        if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
            mousePos = GetMousePosition();
            PaintEditor.paint_pixel(mousePos.x, mousePos.y);
        }

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
