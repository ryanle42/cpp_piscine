#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target) :
  Form("ShrubberyCreation", 72, 45),
  _target(target)
{
  std::srand(std::time(0));
  return ;
}

RobotomyRequestForm::RobotomyRequestForm( 
  RobotomyRequestForm const & src 
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

RobotomyRequestForm::~RobotomyRequestForm( void ) {
  return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( 
  RobotomyRequestForm const & rhs 
) {
  return *this;
}

std::string RobotomyRequestForm::getTarget( void ) const {
  return this->_target;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
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
  if (std::rand() % 2) {
    std::cout << this->_target << " has been robotomized successfully"
              << std::endl;
  } else {
    std::cout << this->_target << " failed to be robotomized"
              << std::endl;
  }
}
