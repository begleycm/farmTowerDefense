#include "inventory.h"
bool Inventory::AddItem(Item* item){
  
  if(storage.size() <= MAX_INVENTORY){
    storage[item->Name] = item;
    return true;
  }

  return false;
}

bool Inventory::AddCount(Item* item, uint32_t &count)
{
  //if it doesn't find the item in the map
  if(storage.find(item->Name) == storage.end()) {
     //try to add it as a slot
    if(AddItem(item)){

      item->count += count;
      if(item->MaxCount < item->count){
        count -= item->count - item->MaxCount;
        item->count = item->MaxCount;
      }
      return false;
      //No space
    }
  }
  return false;
}

bool Inventory::DecreaseCount(Item *item, uint32_t &count)
{
  if(storage.find(item->Name) != storage.end()){
    if(count >= storage[item->Name]->count){
      RemoveItem(item->Name);
      return false;
    }
  }
  return false;
}

Item* Inventory::RemoveItem(std::string name){
  
  storage.erase(name);
  return nullptr;
}

