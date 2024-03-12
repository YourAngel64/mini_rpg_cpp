#include "game.hpp"
#include "entt.hpp"
#include "components.hpp"
#include "texture_render.hpp"

class player {
public:
	player();
	~player();

	void update(int x, int y);
	void render();
	void movements();

private:
	SDL_Texture* texture;
	SDL_Rect destination;
	entt::registry reg;
	entt::entity ent;
};