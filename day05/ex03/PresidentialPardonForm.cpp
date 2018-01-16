#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target) :
  Form("PresidentialPardonForm", 25, 5),
  _target(target)
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm( 
  PresidentialPardonForm const & src 
) :
  Form(
    src._name, 
    src._signRequiredGrade, 
    src._executeRequiredGrade
  ),
  _target(src._target)
{
  return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
  return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( 
  PresidentialPardonForm const & rhs 
) {
  (void)rhs;
  return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const {
  return this->_target;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
  if (executor.getGrade() < 1) {
    throw Form::GradeTooHighException();
  }
  if (executor.getGrade() > 150 || 
       executor.getGrade() > this->_executeRequiredGrade) {
    throw Form::GradeTooLowException();
  }
  if (!this->_isSigned) {
    throw Form::FormNotSignedException();
  }
  std::cout << this->_target << " has been pardoned by Zafod Beeblebrox"
            << std::endl;
}
