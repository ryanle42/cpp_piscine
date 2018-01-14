#include "AWeapon.hpp"

AWeapon::AWeapon( std::string const & name, int apcost, int damage ) : 
  _name(name), 
  _apCost(apcost), 
  _damage(damage) 
{
  return ;
}

AWeapon::AWeapon( AWeapon const & src ) :
  _name(src._name),
  _apCost(src._apCost),
  _damage(src._damage)
{
  return ;
}

AWeapon::AWeapon( void ) {
  return ;
}

AWeapon::~AWeapon( void ) {
  return ;
}

AWeapon & AWeapon::operator=( AWeapon const & rhs ) {
  this->_name = rhs._name;
  this->_apCost = rhs._apCost;
  this->_damage = rhs._damage;
  return *this;
}

std::string AWeapon::getName() const {
  return this->_name;
}

int AWeapon::getAPCost() const {
  return this->_apCost;
}

int AWeapon::getDamage() const {
  return this->_damage;
}
