#include "Character.hpp"

Character::Character( std::string const & name ) 
  : _name(name) {
  this->_weapon = NULL;
  this->_ap = 40;
  return ;
}

Character::Character( Character const & src ) {
  *this = src;
  return ;
}

Character::~Character( void ) {
  return ;
}

Character & Character::operator=( Character const & rhs ) {
  this->_name = rhs._name;
  this->_weapon = rhs._weapon;
  this->_ap = rhs._ap;
  return *this;
}

void Character::recoverAP( void ) {
  this->_ap += 10;
  if (this->_ap > 40) {
    this->_ap = 40;
  }
  return ;
}

int Character::getAp( void ) const {
  return this->_ap;
}

std::string Character::getName( void ) const {
  return this->_name;
}

AWeapon * Character::getWeapon( void ) const {
  return this->_weapon;
}


void Character::equip( AWeapon * weapon ) {
  this->_weapon = weapon;
  return ;
}

void Character::attack( Enemy * enemy ) {
  if (
    this->_weapon && 
    (this->_ap - this->_weapon->getAPCost() > 0)
  ) {
    this->_ap -= this->_weapon->getAPCost();
    std::cout << this->_name << " attacks " << enemy->getType()
              << " with a " << this->_weapon->getName()
              << std::endl;
    this->_weapon->attack();
    enemy->takeDamage(this->_weapon->getDamage());
    if (enemy->getHP() == 0) {
      delete enemy;
    }
  }
  return ;
}


std::ostream & operator<<( std::ostream & o, Character const & rhs ) {
  AWeapon * weapon = rhs.getWeapon();

  if (weapon) {
    o << rhs.getName() << " has " << rhs.getAp()
              << " AP and wields a " << weapon->getName()
              << std::endl; 
  } else {
    o << rhs.getName() << " has " << rhs.getAp()
              << " AP and is unarmed"
              << std::endl;
  }
  return o;
}