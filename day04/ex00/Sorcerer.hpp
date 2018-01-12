#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:

  Sorcerer( std::string name, std::string title);
  Sorcerer( Sorcerer const & src );
  ~Sorcerer( void );
  Sorcerer &operator=( Sorcerer const & rhs );
  void polymorph( Victim const & target ) const;
  std::string getName( void ) const;
  std::string getTitle( void ) const;

private:

  Sorcerer( void );
  std::string _name;
  std::string _title;

};

std::ostream &operator<<( std::ostream & o, Sorcerer const & rhs );

#endif