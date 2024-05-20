#pragma once
#include <SDL2/SDL_render.h>
#include "../transform/transform.h"


class GameObject{
  bool Active;
  Transform transform;

  SDL_Renderer* renderer;

//Start of the scene
  virtual void start();
//Plays during each frame 
  virtual void update();
  virtual void render();
};