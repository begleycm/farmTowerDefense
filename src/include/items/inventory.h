#pragma once
#include <vector>
#include "item.h" 
#define MAX_INVENTORY 10


class Inventory{
private:


  Item* storage[MAX_INVENTORY];


public:
  bool AddItem(Item*);
  Item* RemoveItem(Item*);


  Inventory();
  ~Inventory();

};