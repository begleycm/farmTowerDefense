#pragma once

#include <vector>
#include "../objects/gameobject.h"
#define MAX_MAP_SIZE_X 30
#define MAX_MAP_SIZE_Y 30


class Map{
  typedef std::vector<GameObject*> GridBlock;
  GridBlock MapGrid[MAX_MAP_SIZE_X][MAX_MAP_SIZE_Y];


  


};