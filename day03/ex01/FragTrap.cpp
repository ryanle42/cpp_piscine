#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : _name(name) {
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

FragTrap::FragTrap( FragTrap const & src ) {
  *this = src;
  return ;
}

FragTrap::~FragTrap( void ) {
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

std::string FragTrap::getName( void ) const {
  return this->_name;
}

void FragTrap::meleeAttack( std::string const & target ) const {
  this->announce();
  std::cout << " melee attacks " << target 
            << " causing " << this->_meleeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void FragTrap::rangedAttack( std::string const & target ) const {
  this->announce();
  std::cout << " attacks " << target 
            << " at range, causing " << this->_rangeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void FragTrap::takeDamage( unsigned int amount ) {
  if (amount > this->_armor) {
    amount -= this->_armor;
    this->_HP -= amount;
  } else {
    amount = 0;
  }
  this->announce();
  std::cout << " takes " << amount << " damage !" 
            << std::endl;
  return ;
}

void FragTrap::beRepaired( unsigned int amount ) {
  this->_HP += amount;
  if (this->_HP > this->_maxHP) {
    this->_HP = this->_maxHP;
  }
  this->announce();
  std::cout << " heals for " << amount << " points."
            << std::endl;
  return ;
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
    std::cout << "FR4G-TP " << this->_name 
              << attack << target;
    if (n == 0) {
      std::cout << "'s mom";
    } else if (n == 2) {
      std::cout << " a sad story";
    }
    std::cout << " !" << std::endl;
  }
}

void FragTrap::announce( void ) const {
  std::cout << this->_type << " " << this->_name;
  return ;
}

std::string FragTrap::_attacks[5] = {
  " insults ",
  " farts on ",
  " tells ",
  " wet willies ",
  " spoils game of thrones for "
};