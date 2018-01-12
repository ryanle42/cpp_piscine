#include "Peon.hpp"

Peon::Peon( std::string name ) 
  : Victim(name) {
  std::cout << "Zog zog."
            << std::endl;
  return ;
}

Peon::Peon( void ) {
  return ;
}

Peon::Peon( Peon const & src ) 
  : Victim(src) {
  *this = src;
  return ;
}

Peon::~Peon( void ) {
  std::cout << "Bleuark..."
            << std::endl;
  return ;
}

void Peon::getPolymorphed( void ) const {
  std::cout << this->_name 
            << " has been turned into a pink pony !" 
            << std::endl;
}