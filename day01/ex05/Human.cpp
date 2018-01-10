#include "Human.hpp"

Human::Human( void ) {
  this->_brain = new Brain();
  std::cout << "Human born." << std::endl;
  return ;
}

Human::~Human( void ) {
  std::cout << "Human ded." << std::endl;
  delete this->_brain;
  return ;
}

Brain const &Human::getBrain( void ) const {
  return *(this->_brain);
}

std::string Human::identify( void ) const {
  return this->_brain->identify();
}
