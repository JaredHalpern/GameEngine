#include "../include/GameEngine.h"

int main()
{
    GameEngine engine("Simple Game", 800, 600);
    GameObject *player = new GameObject(engine.renderer, "player.png", 100, 100, 50, 50);
    engine.addObject(player);
    engine.run();
    return 0;
}
