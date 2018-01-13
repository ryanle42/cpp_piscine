#include <iostream>

int main( void ) {
  std::string *test[];
  
  test = new std::string*[5];

  test[0] = new std::string("hello");
  std::cout << *(test[0]) << std::endl;
}