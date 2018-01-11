#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void ) {
  std::srand(std::time(0));
  this->_type = "None";
  std::cout << "Zombie Event has started" << std::endl;
  return ;
}

ZombieEvent::~ZombieEvent( void ) {
  std::cout << "Zombie Event is over" << std::endl;
  return ;
}

void ZombieEvent::setZombieType( std::string type ) {
  std::cout << "Setting zombie type to " << type << std::endl;
  this->_type = type;
  return ;
}

Zombie *ZombieEvent::newZombie( std::string name ) const {
  Zombie *zombie = new Zombie;
  zombie->setName(name);
  zombie->setType(this->_type);
  return zombie;
}

void ZombieEvent::randomChump( void ) const {
  std::string randName = ZombieEvent::_nameList[rand() % 15];
  Zombie zombie;
  zombie.setName(randName);
  zombie.setType(this->_type);
  zombie.announce();
}

std::string ZombieEvent::_nameList[15] = {
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