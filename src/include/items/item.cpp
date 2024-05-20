#include "item.h"

void Item::Effect(void*)
{
}

Item::Item()
{
  Name = "";
  Description = "";
  texturePath = "";

  count = 0;
  MaxCount = 0;
}