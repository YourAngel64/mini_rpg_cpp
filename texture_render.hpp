#include "game.hpp"

class texture_renderer{
public:
    static SDL_Texture *init_render(const char* image, SDL_Renderer *renderer);
};