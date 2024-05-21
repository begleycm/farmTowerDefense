#pragma once
#include <string>

enum Item_Type{
  block,
  plant,
  consumable,
  none

};

class Item{
  std::string texturePath;

public:
  std::string Name;
  std::string Description;
  Item_Type type;
  int count;  
  int MaxCount;
  virtual void Effect(void*) = 0;

  Item();
  Item(int count, std::string TexturePath);

};
