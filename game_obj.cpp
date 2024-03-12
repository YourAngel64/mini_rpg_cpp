#include "game_obj.hpp"
#include "texture_render.hpp"
#include <iostream>

gameObj::gameObj(const char* texture){
    obj_texture = texture_renderer::init_render(texture);
    ent = reg.create();
    reg.emplace<velocity>(ent, 0, 0);
}

void gameObj::update(int destinatonX, int destinatonY, int he, int we){
    auto view = reg.view<velocity>();
    auto Velocity = view.get<velocity>(ent);

    for (auto ent : view) {
        Velocity.x = destinatonX;
        Velocity.y = destinatonY;
    }

    destination.x = Velocity.x;
    destination.y = Velocity.y;

    destination.h = he;
    destination.w = we;
}

void gameObj::render(){
    SDL_RenderCopy(Game::renderer, obj_texture, NULL, &destination);
}