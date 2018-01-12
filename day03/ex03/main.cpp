#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main( void ) {
  FragTrap fragBob("Bob");
  ScavTrap scavTim("Tim");
  NinjaTrap ninjaMax("Max");
  ClapTrap clapMatt("Matt");

  fragBob.meleeAttack("joe");
  fragBob.rangedAttack("donald");
  fragBob.vaulthunter_dot_exe("jones");
  fragBob.vaulthunter_dot_exe("jones");
  fragBob.vaulthunter_dot_exe("jones");
  fragBob.vaulthunter_dot_exe("jones");
  fragBob.vaulthunter_dot_exe("jones");
  fragBob.takeDamage(10);
  fragBob.beRepaired(20);

  std::cout << std::endl;

  scavTim.meleeAttack("joe");
  scavTim.rangedAttack("donald");
  scavTim.challengeNewcomer(fragBob.getName());
  scavTim.challengeNewcomer(fragBob.getName());
  scavTim.challengeNewcomer(fragBob.getName());
  scavTim.challengeNewcomer(fragBob.getName());
  scavTim.challengeNewcomer(fragBob.getName());
  scavTim.takeDamage(10);
  scavTim.beRepaired(20);

  std::cout << std::endl;

  ninjaMax.meleeAttack("donny");
  ninjaMax.rangedAttack("sally");
  ninjaMax.ninjaShoebox(scavTim);
  ninjaMax.ninjaShoebox(ninjaMax);
  ninjaMax.ninjaShoebox(fragBob);
  ninjaMax.ninjaShoebox(clapMatt);
}