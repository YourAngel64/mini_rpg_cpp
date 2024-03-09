#ifndef GAME_OBJ
#define GAME_OBJ
#include "game.hpp"

class gameObj{
public:
    gameObj(const char* texture);
    ~gameObj();

    void update(int destinatonX, int destinatonY, int he, int we);
    void render();


private:
    SDL_Rect src_rect, destination_rect;
    SDL_Texture *obj_texture;
};


#endif