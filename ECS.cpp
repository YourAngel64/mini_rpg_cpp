#include "ECS.hpp"

entities::~entities() {};

entities::entities() {
	obj = registry.create();
}

void entities::giveComponent(){
	registry.emplace<velocity>(obj, 0, 0);
}