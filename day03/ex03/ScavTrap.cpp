#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) 
  : ClapTrap(name, "SC4V-TP") {
  std::srand(std::time(0));

  this->_HP = 100;
  this->_maxHP = 100;
  this->_EP = 50;
  this->_maxEP = 50;
  this->_level = 1;
  this->_meleeDmg = 20;
  this->_rangeDmg = 15;
  this->_armor = 3;

  this->announce();
  std::cout << " spawns." << std::endl;
  return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) 
  : ClapTrap(src) {
  *this = src;
  return ;
}

ScavTrap::~ScavTrap( void ) {
  this->announce();
  std::cout << " dies." << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
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

void ScavTrap::challengeNewcomer( std::string const & target ) {
  int n = rand() % 5;

  this->announce();
  std::cout << " challenges " 
            << target << this->_attacks[n] 
            << std::endl;
  std::cout << target << " loses !" 
            << std::endl;
}

std::string ScavTrap::_attacks[5] = {
  " to a game of rock paper rainbow !",
  " to a dance off !",
  " to a staring contest !",
  " to a push up contest !",
  " rap battle !"
};