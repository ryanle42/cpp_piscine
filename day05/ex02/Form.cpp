#include "Form.hpp"

Form::Form( std::string const & name, int gradeRequired ) :
  _name(name),
  _gradeRequired(gradeRequired),
  _isSigned(false) 
{
  return ;
}

Form::Form( void ) :
  _gradeRequired(0)
{
  return ;
}

Form::~Form( void ) {
  return ;
}

Form::Form( Form const & src ) :
  _name(src._name),
  _gradeRequired(src._gradeRequired),
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

int Form::getGradeRequired( void ) const {
  return this->_gradeRequired;
}

bool Form::getIsSigned( void ) const {
  return this->_isSigned;
}

void Form::beSigned( Bureaucrat const & src ) {
  if (src.getGrade() < 1) {
    throw Form::GradeTooHighException();
  }
  if (src.getGrade() > 150 || 
       src.getGrade() > this->_gradeRequired) {
    throw Form::GradeTooLowException();
  }
}

std::ostream & operator<<(std::ostream & o, Form const & rhs) {
  o << rhs.getName() << " with a required grade of " 
    << rhs.getGradeRequired() << " is ";
  if (!rhs.getIsSigned()) {
    o << "not ";
  }
  o << "signed ";
  return o;
}
