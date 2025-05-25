# OpenCraft
*A free and open-source version of the famous game* Minecraft

## What is OpenCraft?
OpenCraft is **a completely free and open-source** version of the famous game *Minecraft* developped and maintained by PlayCrazy.

## Installation guide
Installing OpenCraft on your system is very simple. It is available for Linux and Windows and can be built automatically or manually. You can also download it on https://playcrazy.itch.io/opencraft/.

### Automatic install
#### Linux
1. First, make sure you have installed all the needed tools:
- GCC (GNU Compiler Collection)
- CMake
- BASH (or any other shell)
- OpenGL 3.x support

2. Clone this repository:
```bash
git clone https://github.com/PlayCrazyOff/opencraft
```

3. Build it from the sources
```bash
cd opencraft
cmake .
make
```

4. Run the game
```bash
./opencraft
```

5. Enjoy!

#### Windows
1. First, make sure you have installed all the needed tools:
- Visual Studio community (2022 or any other with cmake support)
- OpenGL 3.x support

2. Download the source code of this repository.

3. in Visual Studio open the repo has a CMake project

4. build the game inside Visual Studio

5. Run the game (`opencraft.exe`).

6. Enjoy!

## Versions
See the full versions history [here](HISTORY.md).

## How to contribute?
You can contribute [here](CONTRIBUTING.md)!
