#include "Brain.hpp"

#include <sstream>

Brain::Brain( void ) {
  std::cout << "Brain born." << std::endl;
  return ;
}

Brain::~Brain( void ) {
  std::cout << "Brain is dead." << std::endl;
  return ;
}

void Brain::thoughts( void ) const {
	std::cout << "Did I leave the garage door open?" << std::endl;
	return ;
}

std::string Brain::identify( void ) const {
  const void *address = static_cast<const void *>(this);
  std::stringstream ss;
  ss << address;
  std::string strAddress = ss.str();
  return strAddress;
}
