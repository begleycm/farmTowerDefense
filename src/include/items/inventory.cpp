#include "inventory.h"

bool Inventory::AddItem(Item* Item){
  
  for(int i = 0; i < MAX_INVENTORY; i++){
    if(storage[i]->type == Item_Type::none){
      storage[i] = Item;
      return true;
    }
  }

  return false;
}

