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
#define SDL_main main

Game *game = nullptr;


int main(int argc, char const *argv[]){
    game = new Game();
    game -> init("Mini RPG Demo", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    
    while(game->running()){
        game->handle_event();
        game->update();
        game->render();
    }

    game->clean();
    
    return 0;
}
