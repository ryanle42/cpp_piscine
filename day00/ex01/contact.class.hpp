#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {

public:
  Contact( void );
  ~Contact( void );
  std::string getFirstName( void ) const;
  std::string getLastName( void ) const;
  std::string getNickName( void ) const;
  std::string getLogin( void ) const;
  std::string getPostal( void ) const;
  std::string getEmail( void ) const;
  std::string getPhoneNumber( void ) const;
  std::string getBirthday( void ) const;
  std::string getFavMeal( void ) const;
  std::string getUnderwearColor( void ) const;
  std::string getDarkestSecret( void ) const;
  void setFirstName( std::string );
  void setLastName( std::string );
  void setNickName( std::string );
  void setLogin( std::string );
  void setPostal( std::string );
  void setEmail( std::string );
  void setPhoneNumber( std::string );
  void setBirthday( std::string );
  void setFavMeal( std::string );
  void setUnderwearColor( std::string );
  void setDarkestSecret( std::string );

private:
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string login;
  std::string postal;
  std::string email;
  std::string phoneNumber;
  std::string birthday;
  std::string favMeal;
  std::string underwearColor;
  std::string darkestSecret;
};

#endif