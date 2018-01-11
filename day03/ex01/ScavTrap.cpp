#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name )
  : _name(name), _HP(100), _maxHP(100), 
  _EP(50), _maxEP(50), _level(1), _meleeDmg(20), 
  _rangeDmg(15), _armor(3) {
    std::srand(std::time(0));
    std::cout << "SC4V-TP " << name << " spawns." << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void ) {
  std::cout << "SC4V-TP " << this->_name << " dies." << std::endl;
}

std::string ScavTrap::getName( void ) const {
  return this->_name;
}

void ScavTrap::meleeAttack( std::string const & target ) const {
  std::cout << "SC4V-TP " << this->_name 
            << " melee attacks " << target 
            << " causing " << this->_meleeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void ScavTrap::rangedAttack( std::string const & target ) const {
  std::cout << "SC4V-TP " << this->_name 
          << " attacks " << target 
          << " at range, causing " << this->_rangeDmg 
          << " points of damage !" << std::endl;
  return ;
}

void ScavTrap::takeDamage( unsigned int amount ) {
  if (amount > this->_armor) {
    amount -= this->_armor;
    this->_HP -= amount;
  } else {
    amount = 0;
  }
  std::cout << "SC4V-TP " << this->_name 
            << " takes " << amount << " damage !" 
            << std::endl;
  return ;
}

void ScavTrap::beRepaired( unsigned int amount ) {
  this->_HP += amount;
  if (this->_HP > this->_maxHP) {
    this->_HP = this->_maxHP;
  }
  return ;
}

void ScavTrap::challengeNewcomer( std::string const & target ) {
  int n = rand() % 5;

  std::cout << "SC4V-TP " << this->_name << " challenges " 
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