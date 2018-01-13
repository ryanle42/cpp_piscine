#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy {

public:

  RadScorpion( void );
  RadScorpion( RadScorpion const & src );
  ~RadScorpion( void );
  RadScorpion & operator=( RadScorpion const & rhs );
  void takeDamage( int amount );

};

#endif