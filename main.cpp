//
// Created by cbegl on 5/18/2024.
//
#include <iostream>
#include <SDL2/SDL.h>
#include <vector>

int main( int argc, char* args[] ) {
<<<<<<< HEAD
=======
  std::cout << "start window" << std::endl;
>>>>>>> 6f79228cea26dd91b206fcc3daba68823370b354
  //Initialize SDL
  if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
  {
    printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
  }
  //The surface contained by the window
  SDL_Surface* screenSurface = NULL;
  SDL_Window *window = SDL_CreateWindow("farm tower game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_ALLOW_HIGHDPI);
  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if (NULL == window)
  {
    std::cout << "Could not create window: " << SDL_GetError() << std::endl;
    return 1;
  }


  //Get window surface
  screenSurface = SDL_GetWindowSurface( window );
  //Fill the surface white
  SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );

  //Update the surface
  SDL_UpdateWindowSurface( window );

  //Hack to get window to stay up
  SDL_Event e;
  bool quit = false;
  while( quit == false ){
    while( SDL_PollEvent( &e ) ){
      if( e.type == SDL_QUIT )
        quit = true;
    }
  }

  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();

  return 0;
}
