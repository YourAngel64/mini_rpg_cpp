#include "entt.hpp"
#include <iostream>

struct velocity {
	int x, y;
};

class entities {
public:
	entities();
	~entities();

	void give_velocity();
	void update_velocity(int a, int b);


private:
	entt::registry registry;
	entt::entity obj;
};