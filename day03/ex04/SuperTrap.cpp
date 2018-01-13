#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string const & name ) : 
  ClapTrap(name),
  FragTrap(name),
  NinjaTrap(name) 
{
  std::srand(std::time(0));

  this->_HP = 100;
  this->_maxHP = 100;
  this->_EP = 120;
  this->_maxEP = 120;
  this->_level = 1;
  this->_meleeDmg = 60;
  this->_rangeDmg = 20;
  this->_armor = 5;
  this->_type = "$UP3R-TP";
  this->_name = name;

  this->NinjaTrap::announce();
  std::cout << " spawns." << std::endl;
  return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : 
  ClapTrap(src), 
  FragTrap(src),
  NinjaTrap(src) 
{
  this->_name = src._name;
  this->_HP = src._HP;
  this->_maxHP = src._maxHP;
  this->_EP = src._EP;
  this->_maxEP = src._maxEP;
  this->_level = src._level;
  this->_meleeDmg = src._meleeDmg;
  this->_rangeDmg = src._rangeDmg;
  this->_armor = src._armor;  
  this->_type = src._type;
  *this = src;
  return ;
}

SuperTrap::~SuperTrap( void ) {
  this->NinjaTrap::announce();
  std::cout << " dies." << std::endl;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs ) {
  this->_name = rhs._name;
  this->_HP = rhs._HP;
  this->_maxHP = rhs._maxHP;
  this->_EP = rhs._EP;
  this->_maxEP = rhs._maxEP;
  this->_level = rhs._level;
  this->_meleeDmg = rhs._meleeDmg;
  this->_rangeDmg = rhs._rangeDmg;
  this->_armor = rhs._armor;
  this->_type = rhs._type;
  return *this;
}
