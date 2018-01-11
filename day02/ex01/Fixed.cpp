#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointVal(0) {
  std::cout << "Default constructor called" << std::endl;
  return ;
}

Fixed::Fixed( Fixed const & src ) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
  return ;
}

Fixed::Fixed( int const n ) : _fixedPointVal(n) {
  std::cout << "Int constructor called" << std::endl;
  this->_fixedPointVal = (n << _bits);
  return ;
} 

Fixed::Fixed( float const n ) {
  std::cout << "Float constructor called" << std::endl;
  this->_fixedPointVal = roundf(n * (1 << _bits));
  return ;
}

Fixed::~Fixed ( void ) {
  std::cout << "Destructor called" << std::endl;
  return ;
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

Fixed & Fixed::operator=( Fixed const & rhs ) {
  std::cout << "Assignation operator called" << std::endl;
  this->_fixedPointVal = rhs.getRawBits();
  return *this;
}

int Fixed::getRawBits( void ) const {
  std::cout << "getRawBits member function called" << std::endl;
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