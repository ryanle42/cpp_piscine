#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap :
  public FragTrap, 
  public NinjaTrap {
  
public:

  SuperTrap( std::string name );
  SuperTrap( SuperTrap const & src );
  ~SuperTrap( void );
  SuperTrap & operator=( SuperTrap const & rhs );
  
private:

  SuperTrap( void );

};

#endif