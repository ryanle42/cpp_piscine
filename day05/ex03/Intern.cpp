#include "Intern.hpp"

Intern::Intern( void ) {
  return ;
}

Intern::Intern( Intern const & src ) {
  (void)src;
  return ;
}

Intern::~Intern( void ) {
  return ;
}

Intern & Intern::operator=( Intern const & rhs ) {
  (void)rhs;
  return *this;
}

Form * Intern::makeForm( std::string formType, std::string target) const {
  Form *form;

  if (formType == "PresidentialPardonForm") {
    form = new PresidentialPardonForm(target);
  } else if (formType == "ShrubberyCreationForm") {
    form = new ShrubberyCreationForm(target);
  } else if (formType == "RobotomyRequestForm") {
    form = new RobotomyRequestForm(target);  
  } else {
    std::cout << "Error: unknown form"
              << std::endl;
    return NULL;
  }
  std::cout << "Intern creates " << formType
            << std::endl;
  return form;
}