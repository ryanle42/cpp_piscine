#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {

public:

  PresidentialPardonForm( std::string target );
  PresidentialPardonForm( PresidentialPardonForm const & src );
  ~PresidentialPardonForm( void );
  PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
  std::string getTarget( void ) const;
  void        execute( Bureaucrat const & executor ) const;

private:

  PresidentialPardonForm( void );
  std::string const _target;

};


#endif