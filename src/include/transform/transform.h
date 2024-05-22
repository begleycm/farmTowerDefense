#pragma once

#include <cmath>
#include "../sdl_fpoint_extension/sdl_fpoint_extension.h"


class Transform{
public:

  Transform();
  Transform(SDL_FPoint);
  Transform(SDL_FPoint, SDL_FPoint, SDL_FPoint);

  SDL_FPoint Position;
  SDL_FPoint Scale;

  union
  {
    SDL_FPoint Direction;
    SDL_FPoint Rotation;
    SDL_FPoint Forward;
  };


  SDL_FPoint Move(SDL_FPoint);

  SDL_FPoint Rotate(float);
};