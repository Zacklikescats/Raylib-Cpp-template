#include <raylib.h>

int main() {
    InitWindow(800, 600, "Test Window");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello Raylib!", 100, 100, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
