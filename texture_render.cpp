#include "texture_render.hpp"

SDL_Texture *texture_renderer::init_render(const char* file, SDL_Renderer *ren){
    SDL_Surface *text_surf = IMG_Load(file);
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, text_surf);
    SDL_FreeSurface(text_surf); 

    return tex;
}