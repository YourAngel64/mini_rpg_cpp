#include "ECS.hpp"
#include "game.hpp"

ECS::ECS(){
    entity = registry.create();
    registry.emplace<velocity>(entity, 0.0, 0.0);
}