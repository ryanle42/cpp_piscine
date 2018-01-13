#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <cstddef>

class TacticalMarine : public ISpaceMarine {

  public:

    TacticalMarine( void );
    TacticalMarine( TacticalMarine const & src );
    ~TacticalMarine( void );
    TacticalMarine & operator=( TacticalMarine const & rhs );
    ISpaceMarine* clone( void ) const;
    void battleCry( void ) const;
    void rangedAttack( void ) const;
    void meleeAttack( void ) const;

};

#endif