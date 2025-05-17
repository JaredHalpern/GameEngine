#include "GameEngine.h"

int main()
{
    GameEngine engine("Simple Game", 800, 600);

    const char *imagePath = "./assets/player.png";
    // GameObject *player = new GameObject(engine.renderer, imagePath, 100, 100, 50, 50);

    SDL_Surface *surface = IMG_Load(imagePath);

    if (!surface) {
        SDL_Log("Failed to load image %s: %s", imagePath, IMG_GetError());
    } else {
        SDL_Log("Loaded image %s", imagePath);
        GameObject *player = new GameObject(engine.renderer, imagePath, 100, 100, 250, 250);
        SDL_FreeSurface(surface);
        engine.addObject(player);
    }

    engine.run();
    return 0;
}
