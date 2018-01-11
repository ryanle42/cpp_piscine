#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointVal(0) {
  return ;
}

Fixed::Fixed( Fixed const & src ) {
  *this = src;
  return ;
}

Fixed::Fixed( int const n ) : _fixedPointVal(n) {
  this->_fixedPointVal = (n << _bits);
  return ;
} 

Fixed::Fixed( float const n ) {
  this->_fixedPointVal = roundf(n * (1 << _bits));
  return ;
}

Fixed::~Fixed ( void ) {
  return ;
}

Fixed & Fixed::min( Fixed & a, Fixed & b) {
  if (a.toFloat() <= b.toFloat()) {
    return a;
  } else {
    return b;
  }
}

Fixed const & Fixed::min( Fixed const & a, Fixed const & b) {
  if (a.toFloat() <= b.toFloat()) {
    return a;
  } else {
    return b;
  }
}

Fixed & Fixed::max( Fixed & a, Fixed & b) {
  if (a.toFloat() >= b.toFloat()) {
    return a;
  } else {
    return b;
  }
}

Fixed const & Fixed::max( Fixed const & a, Fixed const & b) {
  if (a.toFloat() >= b.toFloat()) {
    return a;
  } else {
    return b;
  }
}


int Fixed::toInt( void ) const {
  int n;

  n = this->getRawBits();
  return (n >> this->_bits);  
}

float Fixed::toFloat( void ) const {
  float n;

  n = getRawBits();
  return (n / (1 << this->_bits));
}

Fixed & Fixed::operator++( void ) {
  this->_fixedPointVal += 1;
  return *this;
}

Fixed Fixed::operator++( int n ) {
  Fixed before(this->toFloat());
  this->_fixedPointVal *= (1 << 1);
  return before;
}

Fixed & Fixed::operator--( void ) {
  this->_fixedPointVal -= 1;
  return *this;
}

Fixed Fixed::operator--( int n ) {
  Fixed before(this->toFloat());
  this->_fixedPointVal *= (1 << 1);
  return before;
}

bool Fixed::operator<( Fixed const & rhs ) {
  return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator<=( Fixed const & rhs ) {
  return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator==( Fixed const & rhs ) {
  return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=( Fixed const & rhs ) {
  return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator>=( Fixed const & rhs ) {
  return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator>( Fixed const & rhs ) {
  return this->toFloat() > rhs.toFloat();
}

Fixed Fixed::operator-( Fixed const & rhs ) {  
  return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator+( Fixed const & rhs ) {
  return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs ) {
  if (rhs.getRawBits() == 0) {
    return Fixed( 1 / rhs.getRawBits() );
  } else {
    return Fixed(this->toFloat() / rhs.toFloat());
  }
}
Fixed Fixed::operator*( Fixed const & rhs ) {
  return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed & Fixed::operator=( Fixed const & rhs ) {
  this->_fixedPointVal = rhs.getRawBits();
  return *this;
}

int Fixed::getRawBits( void ) const {
  return this->_fixedPointVal;
}

void Fixed::setRawBits( int const raw ) {
  this->_fixedPointVal = raw;
  return ;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ) {
  o << rhs.toFloat();
  return o;
}

int const Fixed::_bits = 8;