#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

public:
  Pony( std::string name, std::string birthplace );
  ~Pony( void );
  void dance( void );

private:
  std::string _name;
  std::string _birthplace;
};

#endif