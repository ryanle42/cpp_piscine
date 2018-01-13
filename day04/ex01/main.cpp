#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "SuperMutant.hpp"

int main( void ) {
  Character* zaz = new Character("zaz");
  std::cout << *zaz;
  Enemy* b = new RadScorpion();
  Enemy* a = new SuperMutant();
  AWeapon* pr = new PlasmaRifle();
  AWeapon* pf = new PowerFist();
  std::cout << b->getType() << " has " << b->getHP() << " HP" << std::endl;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->equip(pf);
  zaz->attack(b);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  zaz->attack(b);
  std::cout << *zaz;
  
  zaz->equip(pr);
  std::cout << *zaz;
  std::cout << a->getType() << " has " << a->getHP() << " HP" << std::endl;
  zaz->equip(pf);
  zaz->attack(a);
  std::cout << *zaz;
  zaz->equip(pr);
  std::cout << *zaz;
  zaz->attack(a);
  std::cout << *zaz;
  zaz->attack(a);
  std::cout << *zaz;
  zaz->recoverAP();
  zaz->attack(a);
  zaz->attack(a);
  std::cout << a->getType() << " has " << a->getHP() << " HP" << std::endl;
  zaz->recoverAP();
  zaz->attack(a);
  zaz->attack(a);
  zaz->recoverAP();
  zaz->attack(a);

  std::cout << *zaz;

  return 0;
}