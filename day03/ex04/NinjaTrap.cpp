#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string const & name ) 
  : ClapTrap(name, "N1NJ4-TP") {
  std::srand(std::time(0));

  this->_HP = 60;
  this->_maxHP = 60;
  this->_EP = 120;
  this->_maxEP = 120;
  this->_level = 1;
  this->_meleeDmg = 60;
  this->_rangeDmg = 5;
  this->_armor = 0;
  this->_type = "N1NJ4-TP";

  this->announce();
  std::cout << " spawns." << std::endl;
  return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) 
  : ClapTrap(src) {
  *this = src;
  return ;
}

NinjaTrap::NinjaTrap( void ) {
  return ;
}

NinjaTrap::~NinjaTrap( void ) {
  this->_type = "N1NJ4-TP";
  this->announce();
  std::cout << " dies." << std::endl;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs ) {
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

void NinjaTrap::ninjaShoebox( NinjaTrap & target ) {
  this->announce();
  std::cout << " throws a dirty shoebox at ";
  target.announce();
  std::cout << std::endl; 
}

void NinjaTrap::ninjaShoebox( ClapTrap & target ) {
  this->announce();
  std::cout << " gives a round of applause for ";
  target.announce();
  std::cout << std::endl; 
}

void NinjaTrap::ninjaShoebox( FragTrap & target ) {
  this->announce();
  std::cout << " opens the wrong shoebox not meant for ";
  target.announce();
  std::cout << std::endl; 
}

void NinjaTrap::ninjaShoebox( ScavTrap & target ) {
  this->announce();
  std::cout << " gives an empty shoebox to ";
  target.announce();
  std::cout << std::endl; 
}
