#include <iostream>

int main( void ) {
  std::string msg = "HI THIS IS BRAIN";

  std::string *ptr = &msg;
  std::string &ref = msg;

  std::cout << *ptr << std::endl;
  std::cout << ref << std::endl;
}