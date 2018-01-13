#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ) {
  std::cout << "* teleports from space *"
            << std::endl;
  return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ) {
  *this = src;
  return ;
}

AssaultTerminator::~AssaultTerminator( void ) {
  std::cout << "I'll be back ..."
            << std::endl;
  return ;
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & rhs ) {
  return *this;
}

ISpaceMarine* AssaultTerminator::clone( void ) const {
  ISpaceMarine *copy = new AssaultTerminator(*this);
  return copy; 
}

void AssaultTerminator::battleCry( void ) const {
  std::cout << "This code is unclean. PURIFY IT !"
            << std::endl;
  return ;
}

void AssaultTerminator::rangedAttack( void ) const {
  std::cout << "* does nothing *"
            << std::endl;
  return ;
}

void AssaultTerminator::meleeAttack( void ) const {
  std::cout << "* attacks with chainfists *"
          << std::endl;
  return ;
}