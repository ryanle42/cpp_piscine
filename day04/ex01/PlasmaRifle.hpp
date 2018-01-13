#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon {

public:

  PlasmaRifle( void );
  PlasmaRifle( PlasmaRifle const & src );
  ~PlasmaRifle( void );
  PlasmaRifle & operator=( PlasmaRifle const & rhs );
  void attack() const;
  
};

#endif