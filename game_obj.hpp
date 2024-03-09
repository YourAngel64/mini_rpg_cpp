#ifndef GAME_OBJ
#define GAME_OBJ
#include "game.hpp"

class gameObj{
public:
    gameObj(const char* texture, SDL_Renderer *ren);
    ~gameObj();

    void update();
    void render();


private:
    SDL_Rect src_rect, destination_rect;
    SDL_Texture *obj_texture;
    SDL_Renderer *renderer;
};


#endif