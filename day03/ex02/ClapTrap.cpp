#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const & name ) : 
  _name(name),
  _type("CL4P-TP")
{
  std::srand(std::time(0));
  
  this->announce();
  std::cout << " spawns." << std::endl;
  return ;
}

ClapTrap::ClapTrap( 
  std::string const & name, 
  std::string const & type 
) : 
  _name(name), 
  _type(type) 
{
  std::srand(std::time(0));

  std::cout << "CL4P-TP " << this->_name;
  std::cout << " spawns." << std::endl;
  return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) :
  _name(src._name),
  _type(src._type),
  _HP(src._HP), 
  _maxHP(src._maxHP), 
  _EP(src._EP),
  _maxEP(src._maxEP),
  _level(src._level),
  _meleeDmg(src._meleeDmg),
  _rangeDmg(src._rangeDmg),
  _armor(src._armor)
{
  *this = src;
  return ;
}

ClapTrap::ClapTrap( void ) {
  return ;
}

ClapTrap::~ClapTrap( void ) {
  std::cout << "CL4P-TP " << this->_name;
  std::cout << " dies." 
            << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
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

void ClapTrap::meleeAttack( std::string const & target ) const {
  this->announce();
  std::cout << " melee attacks " << target 
            << " causing " << this->_meleeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void ClapTrap::rangedAttack( std::string const & target ) const {
  this->announce();
  std::cout << " attacks " << target 
            << " at range, causing " << this->_rangeDmg 
            << " points of damage !" << std::endl;
  return ;
}

void ClapTrap::takeDamage( unsigned int amount ) {
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

void ClapTrap::beRepaired( unsigned int amount ) {
  this->_HP += amount;
  if (this->_HP > this->_maxHP) {
    this->_HP = this->_maxHP;
  }
  this->announce();
  std::cout << " heals for " << amount << " points."
            << std::endl;
  return ;
}

void ClapTrap::announce( void ) const {
  std::cout << this->_type << " " << this->_name;
  return ;
}

std::string ClapTrap::getName( void ) const {
  return this->_name;
}

