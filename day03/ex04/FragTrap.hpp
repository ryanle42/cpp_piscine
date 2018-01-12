#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
  
public:

  FragTrap( std::string const & name );
  FragTrap( FragTrap const & src );
  ~FragTrap( void );
  FragTrap & operator=( FragTrap const & rhs );
  void vaulthunter_dot_exe(std::string const & target);

private:

  FragTrap( void );
  static std::string _attacks[];

};

#endif