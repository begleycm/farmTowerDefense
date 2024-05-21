#pragma once

#include "actor.h"
#include "../objects/gameobject.h"

class Enemy : public Actor {
private:
public:
  void start() override;

  void update() override;

  void render() override;
};
