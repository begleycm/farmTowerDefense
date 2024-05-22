/*
sdl_point_extension.h

Extends the functionality of the SDL_FPoint data type while also adding some conveniences

*/

#pragma once
#include "../SDL2/SDL_rect.h"
#include <cmath>



#define SDL_FPoint_Zero SDL_FPoint{0,  0}
#define SDL_FPoint_Up   SDL_FPoint{0,  1}
#define SDL_FPoint_Down SDL_FPoint{0, -1}
#define SDL_FPoint_One  SDL_FPoint{1,  1}

/// @brief Takes in an input of a point and returns the float 
/// @param Point The endpoint from the origin
/// @return Float containing the magnitude
float Magnitude(SDL_FPoint Point);

/// @brief Dot Product between two points
float DotProduct(SDL_FPoint Point, SDL_FPoint PointPointOther);

/// @brief Gets the distance between two points
float Distance(SDL_FPoint Point, SDL_FPoint PointPointOther);

/// @brief Returns a point with the same direction as the input with the magnitude of 1 
SDL_FPoint Normalize(SDL_FPoint Point);

//Basic Arithmetic

SDL_FPoint operator+(const SDL_FPoint &Point, const SDL_FPoint &PointOther);
SDL_FPoint operator-(const SDL_FPoint &Point, const SDL_FPoint &PointOther);

SDL_FPoint operator*(const SDL_FPoint &Point, const float &scalar);
SDL_FPoint operator*(const float &scalar, const SDL_FPoint &Point);
SDL_FPoint operator/(const SDL_FPoint& Point, const float& scalar);

void operator+=(SDL_FPoint& Point, const SDL_FPoint& PointOther);
void operator-=(SDL_FPoint& Point, const SDL_FPoint& PointOther);

//Conditionals

bool operator==(const SDL_FPoint& Point, const SDL_FPoint& PointOther);
bool operator!=(const SDL_FPoint& Point, const SDL_FPoint& PointOther);
