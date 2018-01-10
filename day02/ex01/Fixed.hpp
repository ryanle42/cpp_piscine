#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
  Fixed( void );
  Fixed( Fixed const & src );
  Fixed( int const n );
  Fixed( float const f );
  ~Fixed( void );
  Fixed & operator=( Fixed const & rhs );
  int toInt( void ) const;
  float toFloat( void ) const;
  int getRawBits( void ) const;
  void setRawBits( int const raw );

private:
  int               _fixedPointVal;
  static int const  _bits;

};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif