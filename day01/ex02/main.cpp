#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main( void ) {
  ZombieEvent zGenerator;
  Zombie *zombie;

  zGenerator.randomChump();
  zGenerator.setZombieType("green");
  zombie = zGenerator.newZombie("joe");
  zombie->announce();
  delete zombie;
  zGenerator.setZombieType("moist");
  zGenerator.randomChump();
}