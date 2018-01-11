#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name )
  : _name(name), _HP(100), _maxHP(100), 
  _EP(100), _maxEP(100), _level(1), _meleeDmg(30), 
  _rangeDmg(20), _armor(5) {
    std::srand(std::time(0));
    std::cout << "FR4G-TP " << name << " spawns." << std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
  std::cout << "FR4G-TP " << this->_name << " dies." << std::endl;
}

std::string FragTrap::getName( void ) const {
  return this->_name;
}

void FragTrap::meleeAttack( std::string const & target ) const {
  std::cout << "FR4G-TP " << this->_name 
            << " melee attacks " << target 
            << " causing " << this->_meleeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void FragTrap::rangedAttack( std::string const & target ) const {
  std::cout << "FR4G-TP " << this->_name 
          << " attacks " << target 
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
  std::cout << "FR4G-TP " << this->_name 
            << " takes " << amount << " damage !" 
            << std::endl;
  return ;
}

void FragTrap::beRepaired( unsigned int amount ) {
  this->_HP += amount;
  if (this->_HP > this->_maxHP) {
    this->_HP = this->_maxHP;
  }
  return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
  int n = rand() % 5;

  if (this->_EP - 25 < 0) {
    std::cout << "FR4G-TP " << this->_name 
              << " does not have enough energy for this attack" 
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

std::string FragTrap::_attacks[5] = {
  " insults ",
  " farts on ",
  " tells ",
  " wet willies ",
  " spoils game of thrones for "
};