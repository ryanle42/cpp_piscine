#ifndef HUMAN_CLASS_HPP
#define HUMAN_CLASS_HPP

#include <iostream>
#include "Brain.hpp"

class Human {

public:

  Human( void );
  ~Human( void );
  Brain const &getBrain( void ) const;
  std::string identify( void ) const;

private:

  Brain const *_brain;

};

#endif