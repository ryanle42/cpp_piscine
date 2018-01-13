#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon {

public:

  AWeapon( std::string const & name, int apcost, int damage );
  AWeapon( AWeapon const & src );
  ~AWeapon( void );
  AWeapon & operator=( AWeapon const & rhs );
  std::string getName() const;
  int getAPCost() const;
  int getDamage() const;
  virtual void attack() const = 0;

protected:

  AWeapon( void );
  std::string _name;
  int _apCost;
  int _damage;

};

#endif