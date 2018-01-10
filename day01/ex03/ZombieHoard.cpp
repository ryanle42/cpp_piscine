#include "ZombieHoard.hpp"
#include "Zombie.hpp"

ZombieHoard::ZombieHoard( int n, std::string type ) : _type(type) {
  std::srand(std::time(0));
  std::cout << "A Zombie hoard appears" << std::endl;
  Zombie *hoard = new Zombie[n];
  for (int i = 0; i < n; i++) {
    hoard[i].setName(this->_nameList[rand() % 15]);
    hoard[i].setType(type);
  }
  this->_nbZombies = n;
  this->_hoard = hoard;
  return ;
}

ZombieHoard::~ZombieHoard( void ) {
  delete[] this->_hoard;
  std::cout << "Zombie hoard disappears" << std::endl;
  return ;
}

void ZombieHoard::announce( void ) const {
  for (int i = 0; i < this->_nbZombies; i++) {
    this->_hoard[i].announce();
  }
}

std::string ZombieHoard::_nameList[15] = {
  "Adolf",
  "Bertha",
  "Pud",
  "Olga",
  "Nigel",
  "Helga",
  "Gretel",
  "Anous",
  "Grogda",
  "Angus",
  "Bogart",
  "Beryl",
  "Boris",
  "Garth",
  "Rupert"
};