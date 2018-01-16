#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

  class GradeTooHighException : public std::exception {

    public:
    
      virtual const char * what() const throw() {
        return "Grade is set too high";
      }
  
  };

  class GradeTooLowException : public std::exception {
  
    public:
  
      virtual const char * what() const throw() {
        return "Grade is set too low";
      }
  
  };

public:

  Bureaucrat( std::string const & name, int const grade );
  ~Bureaucrat( void );
  Bureaucrat( Bureaucrat const & src );
  Bureaucrat & operator=(Bureaucrat const & rhs);
  int getGrade( void ) const;
  std::string getName( void ) const;
  void bumpGrade( void );
  void dropGrade( void );
  void signForm( Form & src );  

private:

  Bureaucrat( void );
  std::string const _name;
  int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif