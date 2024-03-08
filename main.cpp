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
#include "SDL2/SDL.h"
#define SDL_main main

int main(int argc, char const *argv[]){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Event event;
    bool is_running = true;


    while(is_running){

        if(SDL_PollEvent(&event)){
            switch(event.type){
                case SDL_KEYDOWN:
                    is_running = false;
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

    }
    
    return EXIT_SUCCESS;
}
