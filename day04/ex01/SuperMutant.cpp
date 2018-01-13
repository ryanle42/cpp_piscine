#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) 
  : Enemy(170, "Super Mutant") {
  std::cout << "Gaaah. Me want smash heads !"
            << std::endl;
  return ;
}

SuperMutant::SuperMutant( SuperMutant const & src ) 
  : Enemy(src) {
  *this = src;
  return ;
}

SuperMutant::~SuperMutant( void ) {
  std::cout << "Aaargh ..."
            << std::endl;
  return ;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs ) {
  this->_hp = rhs._hp;
  this->_type = rhs._type;
  return *this;
}

void SuperMutant::takeDamage( int amount ) {
  amount -= 3;
  if (amount >= 0) {
    this->_hp -= amount;
    if (this->_hp < 0) {
      this->_hp = 0;
    }
  }
}