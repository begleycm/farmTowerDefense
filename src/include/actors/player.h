#pragma once

#include "../objects/gameobject.h"

class Player : public GameObject{

  void start() override;
  void update() override;
  void render() override;

};