#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon {

public:

  PowerFist( void );
  PowerFist( PowerFist const & src );
  ~PowerFist( void );
  PowerFist & operator=( PowerFist const & rhs );
  void attack() const;

private:


};

#endif