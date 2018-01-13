#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

int main()
{
  ISpaceMarine* bob = new TacticalMarine;
  ISpaceMarine* jim = new AssaultTerminator;
  Squad *asd = new Squad;
  ISquad* vlc = new Squad(*asd);
  // ISquad* squadCopy = new Squad(*asd);
  
  vlc->push(bob);
  vlc->push(jim);
  for (int i = 0; i < vlc->getCount(); ++i)
  {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
  }
  delete vlc;
  return 0;
}