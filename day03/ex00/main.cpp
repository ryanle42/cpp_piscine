#include "FragTrap.hpp"

int main( void ) {
  FragTrap bob("bob");

  bob.meleeAttack("joe");
  bob.rangedAttack("donald");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.vaulthunter_dot_exe("jones");
  bob.takeDamage(10);
  bob.beRepaired(20);
}