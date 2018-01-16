#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:

  RobotomyRequestForm( std::string target );
  RobotomyRequestForm( RobotomyRequestForm const & src );
  ~RobotomyRequestForm( void );
  RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
  std::string getTarget( void ) const;
  void        execute( Bureaucrat const & executor ) const;

private:

  RobotomyRequestForm( void );
  std::string const _target;

};

#endif