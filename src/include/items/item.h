#pragma once
#include <string>
#include <cstdint>

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
  uint32_t count;  
  uint32_t MaxCount;
  virtual void Effect(void*) = 0;

  Item();
  Item(uint32_t count, std::string TexturePath);

};
