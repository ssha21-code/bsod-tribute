#include "raylib.h"

constexpr int WINDOW_WIDTH = 1000;
constexpr int WINDOW_HEIGHT = 800;

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "RIP Windows BSOD (1990 - 2025)");
    SetTargetFPS(60);

    Font font1 = LoadFontEx("C:\\Windows\\Fonts\\segoeui.ttf", 36, 0, 0);
    Font font2 = LoadFontEx("C:\\Windows\\Fonts\\segoeui.ttf", 200, 0, 0);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLUE);

        DrawTextEx(font2, ":(", (Vector2){100, 70}, 200, 2, WHITE);
        DrawTextEx(font1, "Your PC has ran into a problem and needs to restart. We're just \ncollecting some error info, and then we'll restart for you.", (Vector2){100, 350}, 36, 0, WHITE);
        DrawTextEx(font1, "69% complete", (Vector2){100, 500}, 36, 0, WHITE);

        EndDrawing();
    }

    UnloadFont(font1);
    CloseWindow();
    return 0;
}
