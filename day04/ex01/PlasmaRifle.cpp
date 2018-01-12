#include "PlasmaRifle.hpp"

PlasmaRifle( void ) 
  : AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle( PlasmaRifle const & src ) 
  : AWeapon(src) {
  *this = src;
  return ;
}

~PlasmaRifle( void ) {
  return ;
}

PlasmaRifle & operator=( PlasmaRifle const & rhs ) {
  this->_name = rhs._name;
  this->_damage = rhs._damage;
  this->_apCost = rhs._apCost;
  return *this;
}

void attack() const {
  std::cout << "* piouuu piouuu piouuu *"
            << std::endl;
}
