#include "Form.hpp"

Form::Form( std::string const & name, int signRequiredGrade ) :
  _name(name),
  _signRequiredGrade(signRequiredGrade),
  _isSigned(false) 
{
  return ;
}

Form::Form( void ) :
  _signRequiredGrade(0)
{
  return ;
}

Form::~Form( void ) {
  return ;
}

Form::Form( Form const & src ) :
  _name(src._name),
  _signRequiredGrade(src._signRequiredGrade),
  _isSigned(src._isSigned)
{
  return ;
}

Form & Form::operator=(Form const & rhs) {
  this->_isSigned = rhs._isSigned;
  return *this;
}

std::string Form::getName( void ) const {
  return this->_name;
}

int Form::getSignRequiredGrade( void ) const {
  return this->_signRequiredGrade;
}

bool Form::getIsSigned( void ) const {
  return this->_isSigned;
}

void Form::beSigned( Bureaucrat const & src ) {
  if (src.getGrade() < 1) {
    throw Form::GradeTooHighException();
  }
  if (src.getGrade() > 150 || 
       src.getGrade() > this->_signRequiredGrade) {
    throw Form::GradeTooLowException();
  }
  this->_isSigned = true;
}

int Form::getSignRequiredGrade( void ) const {
  return this->_signRequiredGrade;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
  o << rhs.getName() << " with a required grade of " 
    << rhs.getSignRequiredGrade() << " is ";
  if (!rhs.getIsSigned()) {
    o << "not ";
  }
  o << "signed ";
  return o;
}
