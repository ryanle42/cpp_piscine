#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent {

public:
  ZombieEvent( void );
  ~ZombieEvent( void );
  void    setZombieType( std::string type );
  Zombie  *newZombie( std::string name ) const;
  void    randomChump( void ) const;

private:
  static std::string _nameList[];
  std::string _type;
};

#endif