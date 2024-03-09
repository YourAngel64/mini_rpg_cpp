#include "game.hpp"
#include "game_obj.hpp"

Game::Game(){}
Game::~Game(){}

gameObj *player;

SDL_Renderer *Game::renderer = nullptr;

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool full_screen){
    int flags = 0;
    if(full_screen){
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        //Window and renderer
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        renderer = SDL_CreateRenderer(window, -1, 0);
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        
        //Init main gameObj
        player = new gameObj("./textures/mario.png");

        //Game is running
        isRunning = true;
    }
    else{
        isRunning = false;
    }
}

void Game::handle_event(){
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type){
    case SDL_QUIT:
        isRunning = false;
        break;
    default:
        break;
    }

}

void Game::update(){
    value++;
    player -> update(value, value, 200, 200);
    // destination_rect.w = 200;
    // destination_rect.h = 200;
    // destination_rect.x = value;
}

void Game::render(){
    SDL_RenderClear(renderer);
    player -> render();
    SDL_RenderPresent(renderer);
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "SDL quitted" << std::endl;
}