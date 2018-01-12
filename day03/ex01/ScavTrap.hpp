#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap {
  
public:

  ScavTrap( std::string name );
  ScavTrap( ScavTrap const & src );
  ~ScavTrap( void );
  ScavTrap & operator=( ScavTrap const & rhs );
  std::string getName( void ) const;
  void meleeAttack( std::string const & target ) const;
  void rangedAttack( std::string const & target ) const;
  void takeDamage( unsigned int amount );
  void beRepaired( unsigned int amount );
  void challengeNewcomer(std::string const & target);
  void announce( void ) const;

private:

  ScavTrap( void );
  static std::string _attacks[];
  std::string _name;
  std::string _type;
  int _HP;
  int _maxHP;
  int _EP;
  int _maxEP;
  int _level;
  int _meleeDmg;
  int _rangeDmg;
  unsigned int _armor;

};

#endif