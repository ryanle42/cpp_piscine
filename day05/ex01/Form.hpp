#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

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

public:

  Form( std::string const & name, int gradeRequired );
  ~Form( void );
  Form( Form const & src );
  Form & operator=(Form const & rhs);
  std::string getName( void ) const;
  int getGradeRequired( void ) const;
  bool getIsSigned( void ) const;
  void beSigned( Bureaucrat const & src );

private:

  Form( void );
  std::string const _name;
  int const _gradeRequired;
  bool _isSigned;

};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif