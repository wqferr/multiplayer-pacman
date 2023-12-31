#include <raylib.h>


const int gWidth = 20;
const int gHeight = 20;

int main() {

    // init

    InitWindow(1280, 960, "Pacman Clone");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // update

        // draw
        BeginDrawing();
        ClearBackground(BLACK);


        EndDrawing();

    }

    CloseWindow();

    return 0;
}