#include "PowerFist.hpp"

PowerFist( void ) 
  : AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist( PowerFist const & src ) 
  : AWeapon(src) {
  *this = src;
  return ;
}

~PowerFist( void ) {
  return ;
}

PowerFist & operator=( PowerFist const & rhs ) {
  this->_name = rhs._name;
  this->_damage = rhs._damage;
  this->_apCost = rhs._apCost;
  return *this;
}

void attack() const {
  std::cout << "* pschhh... SBAM! *"
            << std::endl;
}
