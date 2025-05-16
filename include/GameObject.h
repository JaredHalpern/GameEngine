#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SDL.h>

class GameObject
{
public:
    SDL_Rect rect;
    SDL_Texture *texture;
    int dx, dy;

    GameObject(SDL_Renderer *renderer, const char *imagePath, int x, int y, int w, int h);
    void move();
    void render(SDL_Renderer *renderer);
    bool collidesWith(GameObject &other);
    ~GameObject();
};

#endif
