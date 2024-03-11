#include "game.hpp"
#include "entt.hpp"
#include <iostream>

struct velocity {
	int x, y;
};

class entities {
public:
	entities();
	~entities();

	void giveComponent();


private:
	entt::registry registry;
	entt::entity obj;
};