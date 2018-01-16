#include "Bureaucrat.hpp"

int main( void ) {
  Bureaucrat DonaldTrump("Donald", 150);
  Bureaucrat justRight("Just Right", 50);


  try {
    justRight.dropGrade();
    std::cout << justRight << std::endl;
    DonaldTrump.dropGrade();
    std::cout << DonaldTrump << std::endl;
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }

  try {
    Bureaucrat tooHigh("Too High", 0);
    std::cout << tooHigh << std::endl;
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
}