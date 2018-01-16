#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:

  ShrubberyCreationForm( std::string target );
  ShrubberyCreationForm( ShrubberyCreationForm const & src );
  ~ShrubberyCreationForm( void );
  ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
  std::string getTarget( void ) const;
  void        execute( Bureaucrat const & executor ) const;

private:

  ShrubberyCreationForm( void );
  std::string const _target;

};


#endif