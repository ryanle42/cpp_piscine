#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
  FragTrap bob("Bob");
  ScavTrap tim("Tim");

  bob.meleeAttack("joe");
  bob.rangedAttack("donald");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.takeDamage(10);
  bob.beRepaired(20);

  std::cout << std::endl;

  tim.meleeAttack("joe");
  tim.rangedAttack("donald");
  tim.challengeNewcomer(bob.getName());
  tim.challengeNewcomer(bob.getName());
  tim.challengeNewcomer(bob.getName());
  tim.challengeNewcomer(bob.getName());
  tim.challengeNewcomer(bob.getName());
  tim.takeDamage(10);
  tim.beRepaired(20);
}