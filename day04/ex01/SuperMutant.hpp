#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy {

public:

  SuperMutant( void );
  SuperMutant( SuperMutant const & src );
  ~SuperMutant( void );
  SuperMutant & operator=( SuperMutant const & rhs );
  void takeDamage( int amount );

};

#endif