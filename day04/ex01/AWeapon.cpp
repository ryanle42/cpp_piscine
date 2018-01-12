#include "AWeapon.hpp"

AWeapon( std::string const & name, int apcost, int damage ) 
  : _name(name), _apCost(apcost), _damage(damage) {
    return ;
}

AWeapon( AWeapon const & src ) {
  *this = src;
  return ;
}

AWeapon( void ) {
  return ;
}

~AWeapon( void ) {
  return ;
}

AWeapon & operator=( AWeapon const & rhs ) {
  this->_name = rhs._name;
  this->_apCost = rhs._apCost;
  this->_damage = rhs._damage;
  return *this;
}

std::string getName() const {
  return this->_name;
}

int getAPCost() const {
  return this->_apCost;
}

int getDamage() const {
  return this->_damage;
}
