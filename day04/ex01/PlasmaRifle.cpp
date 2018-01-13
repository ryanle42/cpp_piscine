#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) 
  : AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) 
  : AWeapon(src) {
  *this = src;
  return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
  return ;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs ) {
  this->_name = rhs._name;
  this->_damage = rhs._damage;
  this->_apCost = rhs._apCost;
  return *this;
}

void PlasmaRifle::attack() const {
  std::cout << "* piouuu piouuu piouuu *"
            << std::endl;
}
