#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:

  Zombie(void);
  ~Zombie(void);
  void setType(std::string type);
  void setName(std::string name);
  void announce(void) const;

private:

  std::string _name;
  std::string _type;

};

#endif