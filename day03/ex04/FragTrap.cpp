#include "FragTrap.hpp"

FragTrap::FragTrap( std::string const & name ) 
  : ClapTrap(name, "FR4G-TP") {
  std::srand(std::time(0));

  this->_HP = 100;
  this->_maxHP = 100;
  this->_EP = 100;
  this->_maxEP = 100;
  this->_level = 1;
  this->_meleeDmg = 30;
  this->_rangeDmg = 20;
  this->_armor = 5;
  this->_type = "FR4G-TP";

  this->announce();
  std::cout << " spawns." << std::endl;
  return ;
}

FragTrap::FragTrap( FragTrap const & src ) 
  : ClapTrap(src) {
  *this = src;
  return ;
}

FragTrap::FragTrap( void ) {
  return ;
}

FragTrap::~FragTrap( void ) {
  this->_type = "FR4G-TP";
  this->announce();
  std::cout << " dies." << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
  int n = rand() % 5;

  if (this->_EP - 25 < 0) {
    this->announce();
    std::cout << " does not have enough energy for this attack" 
              << std::endl;
  } else {
    this->_EP -= 25;
    std::string attack = this->_attacks[n];
    this->announce();
    std::cout << attack << target;
    if (n == 0) {
      std::cout << "'s mom";
    } else if (n == 2) {
      std::cout << " a sad story";
    }
    std::cout << " !" << std::endl;
  }
}

std::string FragTrap::_attacks[5] = {
  " insults ",
  " farts on ",
  " tells ",
  " wet willies ",
  " spoils game of thrones for "
};