#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <cstddef>

class Squad : public ISquad {

  public:

    Squad( void );
    Squad( Squad const & src );
    ~Squad( void );
    Squad & operator=( Squad const & rhs );
    int getCount( void ) const;
    ISpaceMarine* getUnit( int ) const;
    int push( ISpaceMarine * spaceMarine );

  private:

    int _nbUnits;
    ISpaceMarine **_squad;
    void _deleteSquad( void );
    bool _isMarineInSquad( ISpaceMarine * spaceMarine ) const;
  
};

#endif