#include "game.hpp"

Game::Game(){}
Game::~Game(){}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool full_screen){
    int flags = 0;
    if(full_screen){
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
        std::cout << "SDL Started" << std::endl;
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

         if(window){
            std::cout << "Window created" << std::endl;
        }

        renderer = SDL_CreateRenderer(window, -1, 0);

        if(renderer){
            std::cout << "Renderer created" << std::endl;
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        }

        text_sur = IMG_Load("./textures/mario.png");
        if(text_sur){
            std::cout << "Player textured created" << std::endl;
            playertex = SDL_CreateTextureFromSurface(renderer, text_sur);
            SDL_FreeSurface(text_sur);
        }

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

}

void Game::render(){
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, playertex, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void Game::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "SDL quitted" << std::endl;
}