#include "ECS.hpp"

entities::~entities() {};

entities::entities() {
	obj = registry.create();
}

void entities::give_velocity(){
	registry.emplace<velocity>(obj, 0, 0);
}


void entities::update_velocity(int a, int b) {
    auto view = registry.view<velocity>();

    for (auto obj : view) {
        auto& position = view.get<velocity>(obj);
        position.x = a;
        position.y = b;
    }
}