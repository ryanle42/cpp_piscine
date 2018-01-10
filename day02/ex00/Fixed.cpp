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

Fixed::~Fixed ( void ) {
  std::cout << "Destructor called" << std::endl;
  return ;
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

int const Fixed::_bits = 8;