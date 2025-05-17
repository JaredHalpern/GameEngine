# GameEngine (name tbd) 🚀

A simple **C++ game engine** built using **SDL2** for graphics rendering. Designed to be lightweight and modular and hopefully fun. Hopefully.

## Features
✅ **Rendering System** → Uses SDL2 to display sprites & backgrounds  
✅ **Game Loop** → Handles updates and rendering efficiently  
✅ **Entity Management** → Easily add & remove game objects  
✅ **Collision Detection** → Basic physics interactions  
✅ **Cross-Platform Compatibility** → Works on macOS & Windows  

## Installation & Setup
1. **Clone the Repository**
   ```sh
   git clone https://github.com/jaredhalpern/GameEngine.git
   cd GameEngine
2. `brew install sdl2 sdl2_image`


## Build
1. (for my specific setup)```bash -c 'clang++ -std=c++17 -I/Users/jared/source/cpp/GameEngine/include -lSDL2_image -L/opt/homebrew/lib $(sdl2-config --cflags --libs) -fcolor-diagnostics -fansi-escape-codes /Users/<username>/source/cpp/GameEngine/src/*.cpp -o /Users/<username>/source/cpp/GameEngine/engine'```
