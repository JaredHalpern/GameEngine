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
1. ```clang++ -std=c++17 -Iinclude -I/opt/homebrew/include/SDL2 -L/opt/homebrew/lib -lSDL2 -lSDL2_image src/main.cpp src/GameEngine.cpp src/GameObject.cpp -o engine```


GameEngine/
│── src/                		 # Source files
│   ├── main.cpp       		  # Entry point
│   ├── GameEngine.cpp 		  # Core game engine
│   ├── GameObject.cpp 		  # Game object handling
│── include/                  # Header files
│   ├── GameEngine.h
│   ├── GameObject.h
│── assets/                   # Game assets (images, sounds, etc.)
│── .gitignore                # Files to exclude from Git
│── README.md                 # Project documentation
│── GameEngine.code-workspace # VS Code workspace
