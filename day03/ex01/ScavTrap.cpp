#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : _name(name) {
  std::srand(std::time(0));
  this->_HP = 100;
  this->_maxHP = 100;
  this->_EP = 50;
  this->_maxEP = 50;
  this->_level = 1;
  this->_meleeDmg = 20;
  this->_rangeDmg = 15;
  this->_armor = 3;
  this->_type = "SC4V-TP";

  this->announce();
  std::cout << " spawns." << std::endl;
  return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
  *this = src;
  return ;
}

ScavTrap::ScavTrap( void ) {
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

std::string ScavTrap::getName( void ) const {
  return this->_name;
}

void ScavTrap::meleeAttack( std::string const & target ) const {
  this->announce();
  std::cout << " melee attacks " << target 
            << " causing " << this->_meleeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void ScavTrap::rangedAttack( std::string const & target ) const {
  this->announce();
  std::cout << " attacks " << target 
            << " at range, causing " << this->_rangeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void ScavTrap::takeDamage( unsigned int amount ) {
  int damage;

  if (amount > this->_armor) {
    amount -= this->_armor;
    this->_HP -= amount;
    damage = amount;
    if (this->_HP < 0) {
      damage = amount + this->_HP;
      this->_HP = 0;
    }
  } else {
    damage = 0;
  }
  this->announce();
  std::cout << " takes " << damage << " damage !" 
            << std::endl;
  return ;
}

void ScavTrap::beRepaired( unsigned int amount ) {
  this->_HP += amount;
  if (this->_HP > this->_maxHP) {
    this->_HP = this->_maxHP;
  }
  this->announce();
  std::cout << " heals for " << amount << " points."
            << std::endl;
  return ;
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

void ScavTrap::announce( void ) const {
  std::cout << this->_type << " " << this->_name;
  return ;
}

std::string ScavTrap::_attacks[5] = {
  " to a game of rock paper rainbow !",
  " to a dance off !",
  " to a staring contest !",
  " to a push up contest !",
  " rap battle !"
};