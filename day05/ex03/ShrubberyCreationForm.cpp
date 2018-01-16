#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) :
  Form("ShrubberyCreation", 145, 137),
  _target(target)
{
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( 
  ShrubberyCreationForm const & src 
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

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
  return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( 
  ShrubberyCreationForm const & rhs 
) {
  (void)rhs;
  return *this;
}

std::string ShrubberyCreationForm::getTarget( void ) const {
  return this->_target;
}

void ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {
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
  std::string fileName = "./" + _target + "_shrubbery";
  std::string trees =
                    "            ,@@@@@@@,\n"
                    "    ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
                    " ,&%%%%&%%&&%%,@@@@@/@@@@@8888/8/8\n"
                    ",%%&\\%%&&%%&&%%,@@@\\@@@/@@@8 8/8/88'\n"
                    "%%&&%%&%%&/%%&&%%@@\\@@/ /@@@8888888'\n"
                    "%%&&%%/ %%&%%%%&&@@\\ V /@@' `88/88'\n"
                    "`&%%\\ ` /%%&'    |.|        \\ '|8'\n"
                    "    |o|        | |         | |\n"
                    "    |.|        | |         | |\n"
                    " \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
  std::ofstream file;
  file.open(fileName.c_str());
  file << trees;
  file.close();
}
