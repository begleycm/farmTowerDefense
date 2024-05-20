#pragma once

#include <vector>
#include "../objects/gameobject.h"
#define MAX_MAP_SIZE_X 30
#define MAX_MAP_SIZE_Y 30

typedef struct{
  //Change the void p
  std::vector<GameObject*> objects;
}Grid;

class Map{
  std::vector<std::vector<Grid>> MapGrid;


};