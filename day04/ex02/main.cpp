#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

int main( void ) {
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;
  bob = jim;
  Squad *ogSquad = new Squad;
  Squad *cp = new Squad;
  
  ogSquad->push(bob);
  ogSquad->push(jim);
  *cp = *ogSquad;
  delete ogSquad;
  cp->getUnit(0)->meleeAttack();

  // copySquad->push(copySquad->getUnit(0));
  // for (int i = 0; i < copySquad->getCount(); ++i)
  // {
  //   ISpaceMarine* cur = copySquad->getUnit(i);
  //   cur->battleCry();
  //   cur->rangedAttack();
  //   cur->meleeAttack();
  // }
  // delete copySquad;
  // return 0;
}