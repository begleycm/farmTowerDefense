#include "../objects/gameobject.h"
#include <vector>

class Actor : public GameObject{
private:
public:
  int MaxHealth;
  int Health;
  int Damage;

  float AttackSpeed;

  std::vector<void*> buffs;


  virtual void OnHit(Actor*);
  virtual void TakeDamage(Actor*);


  virtual void OnSpawn();
  virtual void OnDeath();

};