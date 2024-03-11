/*
Ideas organizer:
Things to learn and implement for video game: (IS A LOT)

1)Use SDL Lib for:
-Graphic rendering
-Audio
-Hardware access
-Windowing system

2)Use Box2D lib for:
-2D Physics

3)EnTT obj and entities-
-obj algorithm using ECS (entity-component system)

4)aitoolkit lib for:
-NPC AI intelligence

5)Learn about game loops and how they work

Overall: Graphic rendering, audio, hardware access, windowing system, Physics (2D), obj structure and algorithms,
simple AI tools and game loops.

Project may take a couple of months so probably going to do side projects to not fall behind in any way

*/

#include "game.hpp"
#include "ECS.hpp"


#define SDL_main main
Game *game = nullptr;
entities* player = nullptr;
//Variables for limiting FPS (practice so then this is going to a hpp file)
const int FPS = 60;
const int delay_time = 1000/FPS;
int frame_time;
Uint32 frame_start;


int main(int argc, char const *argv[]){
    player = new entities();
    player-> giveComponent();
    

    game = new Game();
    game -> init("Mini RPG Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1600, 1200, false);

    while(game->running()){
        frame_start = SDL_GetTicks();

        game->handle_event();
        game->update();
        game->render();

        frame_time = SDL_GetTicks() - frame_start;

        if(delay_time > frame_time){
            SDL_Delay(delay_time - frame_time);
        }
    }

    game->clean();
    
    return 0;
}