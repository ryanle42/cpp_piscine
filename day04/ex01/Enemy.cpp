#include "Enemy.hpp"


Enemy::Enemy( int hp, std::string const & type ) : 
  _hp(hp), 
  _type(type) 
{
  return ;
}

Enemy::Enemy( Enemy const & src ) :
  _hp(src._hp),
  _type(src._type)
{
  return ;
}

Enemy::~Enemy( void ) {
  return ;
}

Enemy & Enemy::operator=( Enemy const & rhs ) {
  this->_hp = rhs._hp;
  this->_type = rhs._type;
  return *this;
}

std::string Enemy::getType( void ) const {
  return this->_type;
}

int Enemy::getHP( void ) const {
  return this->_hp;
}

void Enemy::takeDamage( int amount ) {
  if (amount >= 0) {
    this->_hp -= amount;
    if (this->_hp < 0) {
      this->_hp = 0;
    }
  }
}