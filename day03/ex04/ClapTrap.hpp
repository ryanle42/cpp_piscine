#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class ClapTrap {
  
public:

  ClapTrap( std::string const & name );
  ClapTrap( std::string const & name, std::string const & type );
  ClapTrap( ClapTrap const & src );
  ~ClapTrap( void );
  ClapTrap & operator=( ClapTrap const & rhs );
  std::string getName( void ) const;
  void meleeAttack( std::string const & target ) const;
  void rangedAttack( std::string const & target ) const;
  void takeDamage( unsigned int amount );
  void beRepaired( unsigned int amount );
  void announce( void ) const;
  int getHP( void ) const;

protected:

  ClapTrap( void );
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