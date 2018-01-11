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
  Fixed & operator++( void );
  Fixed operator++( int n );  
  Fixed & operator--( void );
  Fixed operator--( int n );  
  bool operator<( Fixed const & rhs );
  bool operator<=( Fixed const & rhs );
  bool operator==( Fixed const & rhs );
  bool operator!=( Fixed const & rhs );
  bool operator>=( Fixed const & rhs );
  bool operator>( Fixed const & rhs );
  Fixed operator-( Fixed const & rhs );
  Fixed operator+( Fixed const & rhs );
  Fixed operator/( Fixed const & rhs );
  Fixed operator*( Fixed const & rhs );
  Fixed & operator=( Fixed const & rhs );
  static Fixed & min( Fixed & a, Fixed & b);
  static Fixed const & min( Fixed const & a, Fixed const & b);
  static Fixed & max( Fixed & a, Fixed & b);
  static Fixed const & max( Fixed const & a, Fixed const & b);
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