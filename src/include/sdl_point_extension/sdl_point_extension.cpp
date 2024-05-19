#include "sdl_point_extension.h"

float Magnitude(SDL_FPoint Point){
  return sqrt(Point.x * Point.x + Point.y * Point.y);
}
float DotProduct(SDL_FPoint Point, SDL_FPoint PointOther){
  return Point.x * PointOther.x + Point.y * PointOther.y;
}

float Distance(SDL_FPoint Point, SDL_FPoint PointOther){
  return sqrt((Point.x - PointOther.x) * (Point.x - PointOther.x) + (Point.y - PointOther.y) * (Point.y - PointOther.y));

}

SDL_FPoint Normalize(SDL_FPoint Point){
  return Point / Magnitude(Point);
}

SDL_FPoint operator+(const SDL_FPoint &Point, const SDL_FPoint &PointOther)
{
  return {Point.x + PointOther.x, Point.y + PointOther.y};
}
SDL_FPoint operator-(const SDL_FPoint &Point, const SDL_FPoint &PointOther)
{

  return {Point.x - PointOther.x, Point.y - PointOther.y};
}

SDL_FPoint operator*(const SDL_FPoint &Point, const float &scalar)
{

  return {Point.x * scalar, Point.y * scalar};
}
SDL_FPoint operator*(const float &scalar, const SDL_FPoint &Point)
{
  return {Point.x * scalar, Point.y * scalar};
}
SDL_FPoint operator/(const SDL_FPoint &Point, const float &scalar)
{
  return {Point.x / scalar, Point.y / scalar};
}

void operator+=(SDL_FPoint &Point, const SDL_FPoint &PointOther)
{
  Point = Point + PointOther;
}

void operator-=(SDL_FPoint &Point, const SDL_FPoint &PointOther)
{
  Point = Point - PointOther;
}

bool operator==(const SDL_FPoint &Point, const SDL_FPoint &PointOther)
{
  return (Point.x == PointOther.x) && (Point.y == PointOther.y);
}

bool operator!=(const SDL_FPoint &Point, const SDL_FPoint &PointOther)
{
  return !(Point == PointOther);
}

