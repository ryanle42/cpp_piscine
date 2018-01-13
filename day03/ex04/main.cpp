#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main( void ) {
  SuperTrap test("test");
  SuperTrap &ref = test;

  std::cout << "HP: " << ref.getHP() << std::endl;
  
  test.meleeAttack("john");
  test.takeDamage(100);
  std::cout << "HP: " << ref.getHP() << std::endl;
}