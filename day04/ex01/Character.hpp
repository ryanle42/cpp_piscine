#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character {
  
public:

  Character( std::string const & name );
  Character( Character const & src );
  ~Character( void );
  Character & operator=( Character const & rhs );
  std::string getName( void ) const;
  AWeapon * getWeapon( void ) const;
  int getAp( void ) const;
  void recoverAP( void );
  void equip( AWeapon * weapon );
  void attack( Enemy * enemy );

private:

  std::string _name;
  int _ap;
  AWeapon *_weapon;
  Character( void );

};

std::ostream & operator<<( std::ostream & o, Character const & rhs );

#endif