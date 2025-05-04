#include "settings.h"

void setup(ecs_world_t* world);
void game_loop(void);
void destroy_game(ecs_world_t* world);

int main(int argc, char const *argv[]) {
    ecs_world_t* world;
    setup(world);
    game_loop();
    destroy_game(world);

    return 0;
}


void setup(ecs_world_t* world){
    // Initialization
    //--------------------------------------------------------------------------------------
    world = ecs_init();
    const int screenWidth = WINDOW_WIDTH;
    const int screenHeight = WINDOW_HEIGHT;

    InitWindow(screenWidth, screenHeight, "Pokeclone");
}

void game_loop(void) {
    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

}

void destroy_game(ecs_world_t* world) {
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    ecs_fini(world);
    //--------------------------------------------------------------------------------------

}