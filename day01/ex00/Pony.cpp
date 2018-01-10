#include "Pony.hpp"

Pony::Pony( std::string name, std::string birthplace ) 
  : _name(name), _birthplace(birthplace) {
  std::cout << name << " the Pony is born on the " 
            << birthplace << "." << std::endl;
  return ;
}

Pony::~Pony( void ) {
  std::cout << this->_name << " has died." << std::endl;
  return ;
}

void Pony::dance( void ) {
  std::cout << this->_name << " dances." << std::endl;
  return ;
}