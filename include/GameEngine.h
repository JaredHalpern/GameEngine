#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <SDL.h>
#include <SDL_image.h>
#include <vector>
#include "GameObject.h"

class GameEngine
{
public:
    SDL_Window *window;
    SDL_Renderer *renderer;
    bool running;
    std::vector<GameObject *> objects;

    GameEngine(const char *title, int width, int height);
    void addObject(GameObject *obj);
    void run();
    ~GameEngine();
};

#endif
