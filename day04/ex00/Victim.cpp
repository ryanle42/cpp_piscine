#include "Victim.hpp"

Victim::Victim( std::string name ) 
  : _name(name) {
  std::cout << "Some random victim called "
            << this->_name << " just popped !"
            << std::endl;
  return ;
}

Victim::Victim( void ) {
  return ;
}

Victim::Victim( Victim const & src ) {
  *this = src;
  return ;
}

Victim::~Victim( void ) {
  std::cout << "Victim " << this->_name 
            << " just died for no apparent reason !"
            << std::endl;
  return ;
}

Victim & Victim::operator=( Victim const & rhs ) {
  this->_name = rhs._name;
  return *this;
}

std::ostream & operator<<( std::ostream & o, Victim const & rhs ) {
  o << "I'm " << rhs.getName() 
    << " and I like otters !"
    << std::endl;
  return o;
}

std::string Victim::getName( void ) const {
  return this->_name;
}

void Victim::getPolymorphed( void ) const {
  std::cout << this->_name 
            << " has been turned into a cute "
            << "little sheep !" 
            << std::endl;
}