#include "phonebook.hpp"

Contact::Contact( void ) {
  return ;
}

Contact::~Contact( void ) {
  return ;
}

std::string Contact::getFirstName( void ) const {
  return this->firstName;
}

std::string Contact::getLastName( void ) const {
  return this->lastName;
}

std::string Contact::getNickName( void ) const {
  return this->nickName;
}

std::string Contact::getLogin( void ) const {
  return this->login;
}

std::string Contact::getPostal( void ) const {
  return this->postal;
}

std::string Contact::getEmail( void ) const {
  return this->email;
}

std::string Contact::getPhoneNumber( void ) const {
  return this->phoneNumber;
}

std::string Contact::getBirthday( void ) const {
  return this->birthday;
}

std::string Contact::getFavMeal( void ) const {
  return this->favMeal;
}

std::string Contact::getUnderwearColor( void ) const {
  return this->underwearColor;
}

std::string Contact::getDarkestSecret( void ) const {
  return this->darkestSecret;
}

void Contact::setFirstName( std::string firstName) {
  this->firstName = firstName;
  return ;
}

void Contact::setLastName( std::string lastName) {
  this->lastName = lastName;
  return ;
}

void Contact::setNickName( std::string nickName) {
  this->nickName = nickName;
  return ;
}

void Contact::setLogin( std::string login) {
  this->login = login;
  return ;
}

void Contact::setPostal( std::string postal) {
  this->postal = postal;
  return ;
}

void Contact::setEmail( std::string email) {
  this->email = email;
  return ;
}

void Contact::setPhoneNumber( std::string phoneNumber) {
  this->phoneNumber = phoneNumber;
  return ;
}

void Contact::setBirthday( std::string birthday) {
  this->birthday = birthday;
  return ;
}

void Contact::setFavMeal( std::string favMeal) {
  this->favMeal = favMeal;
  return ;
}

void Contact::setUnderwearColor( std::string underwearColor) {
  this->underwearColor = underwearColor;
  return ;
}

void Contact::setDarkestSecret( std::string darkestSecret) {
  this->darkestSecret = darkestSecret;
  return ;
}
