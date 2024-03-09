#include "game_obj.hpp"
#include "texture_render.hpp"

gameObj::gameObj(const char* texture){
    obj_texture = texture_renderer::init_render(texture);
}

void gameObj::update(int destinatonX, int destinatonY, int he, int we){
    destination_rect.h = he;
    destination_rect.w = we;

    destination_rect.x = destinatonX;
    destination_rect.y = destinatonY; 
}

void gameObj::render(){
    SDL_RenderCopy(Game::renderer, obj_texture, NULL, &destination_rect);
}