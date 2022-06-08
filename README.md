## iRB Engine
Game Engine project developed for CC5512 "Game Engine Architecture" (fcfm, U. de Chile) with the main objective of building a library that can support games with a mix of genres: BulletHell, Roguelike and Incremental.

A game project of the roguelike/bullet hell genre is developed on it, inspired by "Vampire Survivors" (https://store.steampowered.com/app/1794680/Vampire_Survivors/) and "Nova Drift" (https://store.steampowered.com/app/858210/Nova_Drift/)
 
### Installation
This project is developed using C++ and compiled using CMake, so here is a quick way to make a viable environment:

- Get Visual Studio Community from https://visualstudio.microsoft.com/vs/community/. When installing it, select "Desktop development with C++".
- Get CMake from https://cmake.org/

To build this project:

- Make a folder called build right next to the source folder.
- Using your command prompt inside the build folder. Run `cmake ..\source`.
- Open the solution file (iRB_Engine.sln) in the build folder, click on the upper menu `Build > Build Solution`.
- Run iRB_Engine.exe in the new folder generated from the build process, with the same name of the build mode used (ex. Release)
