#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void ) {
  Bureaucrat schwarzenegger("Schwarzenegger", 5);
  ShrubberyCreationForm treeForm("home");
  PresidentialPardonForm pardonForm("turki");
  RobotomyRequestForm robotForm("ajit pai");

  try {
    treeForm.beSigned(schwarzenegger);
    schwarzenegger.executeForm(treeForm);
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
  
  try {
    pardonForm.beSigned(schwarzenegger);
    schwarzenegger.executeForm(pardonForm);
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }

  try {
    robotForm.beSigned(schwarzenegger);
    schwarzenegger.executeForm(robotForm);
  } catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
}