#include "texture_render.hpp"

SDL_Texture *texture_renderer::init_render(const char* file){
    SDL_Surface *text_surf = IMG_Load(file);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(Game::renderer, text_surf);
    SDL_FreeSurface(text_surf); 

    return tex;
}