#pragma once
#include <SDL2/SDL_render.h>
#include "../transform/transform.h"


class GameObject{
private:
  SDL_Renderer* renderer;
  
public:
  bool Active;
  Transform transform;


//Start of the scene
  virtual void start() = 0;
//Plays during each frame 
  virtual void update() = 0;
  virtual void render() = 0;
};