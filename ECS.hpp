#include "game.hpp"
#include "C:\libraries\entityx\entityx/entityx.h"

struct velocity{
    float x,y;
};

class ECS{
public:
    ECS();
    ~ECS();

private:
    entt::registry registry;
    entt::entity entity;
};