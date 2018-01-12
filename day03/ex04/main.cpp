#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main( void ) {
  SuperTrap test("test");
  SuperTrap &ref = test;

  std::cout << "HP: " << ref._HP << std::endl;
  std::cout << "maxHP: " << ref._maxHP << std::endl;
  std::cout << "EP: " << ref._EP << std::endl;
  std::cout << "maxEP: " << ref._maxEP << std::endl;
  std::cout << "meleeDmg: " << ref._meleeDmg << std::endl;
  std::cout << "rangeDmg: " << ref._rangeDmg << std::endl;
  std::cout << "armor: " << ref._armor << std::endl;

  test.meleeAttack("john");
  test.takeDamage(100);
  std::cout << "HP: " << ref._HP << std::endl;
}