#include "Transform.h"
Transform::Transform(){
  Position = Vector2_Zero;
  Rotation = Vector2_Zero;
}
Transform::Transform(SDL_FPoint pos){
  Position = pos;
  Rotation = Vector2_Zero;
  Scale = Vector2_Zero;
}
Transform::Transform(SDL_FPoint pos, SDL_FPoint rot, SDL_FPoint sca){
  Position = pos;
  Rotation = rot;
  Scale = sca;
}

/// @brief Moves the position of the object itself given a vector
/// @param vector The direction and magnitude of the input
/// @return The resulting vector of the two.
SDL_FPoint Transform::Move(SDL_FPoint vector){
  this->Position = this->Position + vector;
  return this->Position;
}

/// @brief Turns the direction in accordance to the input RAD
/// @param  radians
/// @return Returns the new vector of the rotation.
SDL_FPoint Transform::Rotate(float radian)
{
  float x = Rotation.x * cos(radian) - Rotation.y * sin(radian);
  float y = Rotation.x * sin(radian) + Rotation.y * sin(radian);
  Rotation = SDL_FPoint{x, y};
  return Rotation;
}
