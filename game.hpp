#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <string>
#include <iostream>

class Game{
public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool full_screen);

    void handle_event();
    void update();
    void render();
    void clean();

    bool running(){
        return isRunning;
    }


private:
    bool isRunning;
    int value = 0;
    SDL_Window *window;
    SDL_Renderer *renderer;
};


#endif