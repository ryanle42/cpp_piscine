#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : 
  Enemy(80, "RadScorpion") 
{
  std::cout << "* click click click *"
            << std::endl;
  return ;
}

RadScorpion::RadScorpion( RadScorpion const & src ) : 
  Enemy(src) 
{
  std::cout << "* click click click *"
            << std::endl;
  return ;
}

RadScorpion::~RadScorpion( void ) {
  std::cout << "* SPROTCH *"
            << std::endl;
  return ;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs ) {
  this->_hp = rhs._hp;
  this->_type = rhs._type;
  return *this;
}

void RadScorpion::takeDamage( int amount ) {
  amount -= 3;
  if (amount >= 0) {
    this->_hp -= amount;
    if (this->_hp < 0) {
      this->_hp = 0;
    }
  }
}