#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

  Form( std::string const & name, int signRequiredGrade );
  ~Form( void );
  Form( Form const & src );
  Form & operator=(Form const & rhs);
  std::string  getName( void ) const;
  int          getSignRequiredGrade( void ) const;
  bool         getIsSigned( void ) const;
  void         beSigned( Bureaucrat const & src );

protected:

  class GradeTooHighException : public std::exception {
    
    public:

      virtual const char * what() const throw() {
        return "Grade is too high";
      }    

  };

  class GradeTooLowException : public std::exception {
    
    public:

      virtual const char * what() const throw() {
        return "Grade is too low";
      }

  };

  Form( void );
  std::string const _name;
  int         const _signRequiredGrade;
  bool              _isSigned;

};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif