#include "PowerFist.hpp"

PowerFist::PowerFist( void ) 
  : AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist( PowerFist const & src ) 
  : AWeapon(src) {
  *this = src;
  return ;
}

PowerFist::~PowerFist( void ) {
  return ;
}

PowerFist & PowerFist::operator=( PowerFist const & rhs ) {
  this->_name = rhs._name;
  this->_damage = rhs._damage;
  this->_apCost = rhs._apCost;
  return *this;
}

void PowerFist::attack() const {
  std::cout << "* pschhh... SBAM! *"
            << std::endl;
}
