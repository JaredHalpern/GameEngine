#ifndef ANIMATIONCOMPONENT_H
#define ANIMATIONCOMPONENT_H

#include <SDL.h>

class AnimationComponent {
public:
    SDL_Rect srcRect; // Source rectangle for the sprite sheet
    int frameWidth; // Width of a single frame
    int frameHeight; // Height of a single frame
    int currentFrame; // Current frame index
    int totalFrames; // Total number of frames in the animation
    int animationSpeed; // Speed of the animation (frames per second)

    AnimationComponent(int frameW, int frameH, int totalF, int animSpeed);
    void update(); // advances animation frame

};

#endif