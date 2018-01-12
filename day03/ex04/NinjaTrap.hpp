#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
  
public:

  NinjaTrap( std::string const & name );
  NinjaTrap( NinjaTrap const & src );
  ~NinjaTrap( void );
  NinjaTrap & operator=( NinjaTrap const & rhs );
  void ninjaShoebox( NinjaTrap & target );
  void ninjaShoebox( ClapTrap & target );
  void ninjaShoebox( FragTrap & target );
  void ninjaShoebox( ScavTrap & target );

private:

  NinjaTrap( void );
  static std::string _attacks[];

};

#endif