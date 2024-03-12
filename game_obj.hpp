#ifndef GAME_OBJ
#define GAME_OBJ
#include "game.hpp"
#include "components.hpp"


class gameObj{
public:
    gameObj(const char* texture);
    ~gameObj();

    void update(int destinatonX, int destinatonY, int he, int we);
    void render();


private:
    SDL_Texture *obj_texture;
    SDL_Rect destination;
    entt::registry reg;
    entt::entity ent;
};


#endif