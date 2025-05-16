#include "GameObject.h"
#include <SDL_image.h>

GameObject::GameObject(SDL_Renderer *renderer, const char *imagePath, int x, int y, int w, int h)
    : dx(0), dy(0)
{
    rect = {x, y, w, h};
    SDL_Surface *surface = IMG_Load(imagePath);
    texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
}

void GameObject::move()
{
    rect.x += dx;
    rect.y += dy;
}

void GameObject::render(SDL_Renderer *renderer)
{
    SDL_RenderCopy(renderer, texture, nullptr, &rect);
}

bool GameObject::collidesWith(GameObject &other)
{
    return SDL_HasIntersection(&rect, &other.rect);
}

GameObject::~GameObject()
{
    SDL_DestroyTexture(texture);
}
