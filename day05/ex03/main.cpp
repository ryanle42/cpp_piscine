#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main( void ) {
  Intern someRandomIntern;
  Form *form;
  Bureaucrat trump("Trmp", 10);

  form = someRandomIntern.makeForm("randoFormNotReal", "u");
  form = someRandomIntern.makeForm("PresidentialPardonForm", "u");
  form = someRandomIntern.makeForm("RobotomyRequestForm", "u");
  form = someRandomIntern.makeForm("ShrubberyCreationForm", "u");

  trump.signForm(*form);
  trump.executeForm(*form);
}