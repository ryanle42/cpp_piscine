#include "Sorcerer.hpp"

Sorcerer::Sorcerer( 
  std::string const & name, 
  std::string const & title 
) : _name(name), _title(title) {
  std::cout << this->_name << ", " << this->_title
            << ", is born !"
            << std::endl;
  return ;
}

Sorcerer::Sorcerer( void ) {
  return ;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {
  *this = src;
  return ;
}

Sorcerer::~Sorcerer( void ) {
  std::cout << this->_name << ", " << this->_title
            << ", is dead. "
            << "Consequences will never be the same !"
            << std::endl;
  return ;
}

Sorcerer &Sorcerer::operator=( Sorcerer const & rhs ) {
  this->_name = rhs._name;
  this->_title = rhs._title;
  return *this;
}

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs ) {
  o << "I am " << rhs.getName() << ", " << rhs.getTitle()
    << ", and I like ponies !"
    << std::endl;
  return o;
}

std::string Sorcerer::getName( void ) const {
  return this->_name;
}

std::string Sorcerer::getTitle( void ) const {
  return this->_title;
}

void Sorcerer::polymorph( Victim const & target ) const {
  target.getPolymorphed();
  return ;
}