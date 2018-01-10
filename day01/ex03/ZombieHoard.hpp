#ifndef ZOMBIEHOARD_HPP
#define ZOMBIEHOARD_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieHoard {

public:

  ZombieHoard( int n, std::string type );
  ~ZombieHoard( void );
  void announce( void ) const;

private:

  static std::string _nameList[];
  std::string _type;
  Zombie *_hoard;
  int _nbZombies;

};

#endif