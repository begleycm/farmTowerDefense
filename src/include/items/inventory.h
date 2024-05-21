#pragma once
#include <vector>
#include <unordered_map> 
#include <string>
#include <cstdint>
#include "item.h" 
#define MAX_INVENTORY 10


class Inventory{
private:


  std::unordered_map<std::string, Item*> storage;

  
public:
  bool AddCount(Item* item, uint32_t &count);
  bool DecreaseCount(Item* item, uint32_t &count);
  bool AddItem(Item* item);
  Item* RemoveItem(std::string name);


  Inventory();
  ~Inventory();

};