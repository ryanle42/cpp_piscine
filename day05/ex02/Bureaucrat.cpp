#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string const & name, int const grade ) :
  _name(name),
  _grade(grade) 
{
  if (grade < 1) {
    throw Bureaucrat::GradeTooHighException();
  }
  if (grade > 150) {
    throw Bureaucrat::GradeTooLowException();
  }
}

Bureaucrat::Bureaucrat( void ) {
  return ;
}

Bureaucrat::~Bureaucrat( void ) {
  return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) :
  _name(src._name),
  _grade(src._grade)
{
  return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
  this->_grade = rhs._grade;
  return *this;
}

std::string Bureaucrat::getName( void ) const {
  return this->_name;
}

int Bureaucrat::getGrade( void ) const {
  return this->_grade;
}

void Bureaucrat::bumpGrade( void ) {
  if (this->_grade - 1 < 1) {
    throw GradeTooHighException();
  }
  this->_grade--;
}

void Bureaucrat::dropGrade( void ) {
  if (this->_grade + 1 > 150) {
    throw GradeTooLowException();
  }
  this->_grade++;
}

void Bureaucrat::signForm( Form & src ) {
  try {
    src.beSigned(*this);
    std::cout << this->_name << " signs " 
              << src.getName() 
              << std::endl;
  } catch (std::exception & e) {
    std::cout << this->_name << " cannot sign " 
              << src.getName() << " because " << e.what()
              << std::endl;
  }
}

void Bureaucrat::executeForm( Form & form ) const {
  try {
    form.execute(*this);
    std::cout << this->_name << " executes " << form.getName() 
              << std::endl;
  } catch (std::exception & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs) {
  o << rhs.getName() << ", grade " << rhs.getGrade();
  return o;
}
