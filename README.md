## iRB Engine
Game Engine project developed for CC5512 "Game Engine Architecture" (fcfm, U. de Chile) with the main objective of building a library that can support games with a mix of genres: BulletHell, Roguelike and Incremental
 
### Installation
This project is developed using C++ and compiled using CMake, so here is a quick way to make a viable environment:

- Get Visual Studio Community from https://visualstudio.microsoft.com/vs/community/. When installing it, select "Desktop development with C++".
- Get CMake from https://cmake.org/

To build the external libraries that are used at the moment:

- Make a folder called build right next to the source folder in `GameEngine\libs\glfw`
- Using your preferred command prompt ("x64 Native Tools Command Prompt for VS" recommended) inside the build folder. Run `cmake ..\source`.
- Do the same with in the folder `GameEngine\libs\glad\opengl3.3`

Now to build this project:

- Make a folder called build right next to the source folder.
- Using your command prompt inside the build folder. Run `cmake ..\source`.
- Open the solution file (iRB_Engine.sln) in the build folder, click on the upper menu `Build > Build Solution`.
- Run iRB_Engine.exe in the new folder generated from the build process, with the same name of the build mode used (ex. Debug, Release)
