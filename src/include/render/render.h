#pragma once
#include <SDL2/SDL_render.h>
#include <string>
#include "../sdl_fpoint_extension/sdl_fpoint_extension.h"
class Render{
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  Render();

  void** RenderObjects;

public:

  ~Render();

  void DrawAll();
  Render* GetInstance();

  void DrawTextureAtPosition(SDL_FPoint Position, SDL_Color color,int scale, std::string& path);

};