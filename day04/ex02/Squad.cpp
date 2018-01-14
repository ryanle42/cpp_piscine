#include "Squad.hpp"

Squad::Squad( void ) {
  this->_nbUnits = 0;
  this->_squad = NULL;
  return ;
}

Squad::Squad( Squad const & src ) {
  std::cout << "Squad copy constructor called" << std::endl;
  this->_squad = new ISpaceMarine*[src._nbUnits];
  for (int i = 0; i < src._nbUnits; i++) {
    this->_squad[i] = src._squad[i]->clone();
  }
  this->_nbUnits = src._nbUnits;
  *this = src;
  return ;
}

Squad::~Squad( void ) {
  std::cout << "Squad destructor called" << std::endl;
  this->_deleteSquad();
  return ;
}

Squad & Squad::operator=( Squad const & rhs ) {
  std::cout << "Squad assignment called" << std::endl;
  this->_deleteSquad();
  this->_squad = new ISpaceMarine*[rhs._nbUnits];
  for (int i = 0; i < rhs._nbUnits; i++) {
    this->_squad[i] = rhs._squad[i]->clone();
  }
  this->_nbUnits = rhs._nbUnits;
  return *this;
}

void Squad::_deleteSquad( void ) {
  if (this->_squad) {
    for (int i = 0; i < this->_nbUnits; i++) {
      delete this->_squad[i];
    }
    delete[] this->_squad;
  }
  this->_nbUnits = 0;
  return ;
}

int Squad::getCount( void ) const {
  return this->_nbUnits;
}

ISpaceMarine* Squad::getUnit( int index ) const {
  if (index >= 0 && index < this->_nbUnits) {
    return this->_squad[index];
  } else {
    return NULL;
  }
}

bool Squad::_isMarineInSquad( ISpaceMarine * spaceMarine ) const {
  for (int i = 0; i < this->_nbUnits; i++) {
    if (this->_squad[i] == spaceMarine) {
      return true;
    }
  }
  return false;
}

int Squad::push( ISpaceMarine * spaceMarine ) {
  if ( 
    spaceMarine && 
    _isMarineInSquad(spaceMarine) == false 
  ) {
    ISpaceMarine **tmp = new ISpaceMarine*[this->_nbUnits + 1];
    if (this->_squad) {
      for (int i = 0; i < this->_nbUnits; i++) {
        tmp[i] = this->_squad[i];
      }
      delete[] this->_squad;
    }
    tmp[this->_nbUnits] = spaceMarine;
    this->_squad = tmp;
    this->_nbUnits++;
  }
  return this->_nbUnits;
}
