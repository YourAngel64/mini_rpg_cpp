#include "player.hpp"



player::player() {
	texture = texture_renderer::init_render("C:/Users/angel/Documents/coding/mini_rpg_cpp/textures/mario.png");
	ent = reg.create();
	reg.emplace<velocity>(ent, 0, 0);

}

void player::update(int x, int y){
	auto view = reg.view<velocity>();
	auto &Velocity = view.get<velocity>(ent);


	Velocity.x = x;
	Velocity.y = y;


	destination.x = Velocity.x;
	destination.y = Velocity.y;
}

void player::render() {
	SDL_RenderCopy(Game::renderer, texture, NULL, &destination);
}

void player::movements(){}