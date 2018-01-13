#include "Squad.hpp"

Squad::Squad( void ) {
  this->_nbUnits = 0;
  this->_squad = NULL;
  return ;
}

Squad::Squad( Squad const & src ) {
  *this = src;
  return ;
}

Squad::~Squad( void ) {
  this->_deleteSquad();
  return ;
}

Squad & Squad::operator=( Squad const & rhs ) {
  this->_deleteSquad();
  this->_squad = new ISpaceMarine*[rhs._nbUnits];
  for (int i = 0; i < rhs._nbUnits; i++) {
    this->_squad[i] = rhs._squad[i]->clone();
  }
  return *this;
}

void Squad::_deleteSquad( void ) {
  for (int i = 0; i < this->_nbUnits; i++) {
    delete this->_squad[i];
  }
  if (this->_squad) {
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
    for (int i = 0; i < this->_nbUnits; i++) {
      tmp[i] = this->_squad[i];
    }
    tmp[this->_nbUnits] = spaceMarine;
    if (this->_squad != NULL) {
      delete[] this->_squad;
    }
    this->_squad = tmp;
    this->_nbUnits++;
  }
  return this->_nbUnits;
}
