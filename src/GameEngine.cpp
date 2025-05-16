#include "GameEngine.h"
#include <SDL_image.h>

GameEngine::GameEngine(const char *title, int width, int height) : running(true)
{
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

void GameEngine::addObject(GameObject *obj)
{
    objects.push_back(obj);
}

void GameEngine::run()
{
    SDL_Event event;
    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = false;
            }
        }

        for (auto obj : objects)
        {
            obj->move();
        }

        SDL_RenderClear(renderer);
        for (auto obj : objects)
        {
            obj->render(renderer);
        }
        SDL_RenderPresent(renderer);
    }
}

GameEngine::~GameEngine()
{
    for (auto obj : objects)
        delete obj;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}
