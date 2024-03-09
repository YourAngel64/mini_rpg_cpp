#include "game_obj.hpp"
#include "texture_render.hpp"

gameObj::gameObj(const char* texture, SDL_Renderer *ren){
    renderer = ren;
    obj_texture = texture_renderer::init_render(texture, ren);
}

void gameObj::update(){

}

void gameObj::render(){
    SDL_RenderCopy(renderer, obj_texture, NULL, NULL);
}