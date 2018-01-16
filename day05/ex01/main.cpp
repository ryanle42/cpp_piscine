#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {
  Bureaucrat schwarzenegger("Schwarzenegger", 50);
  Form chopperBill("get to the chopper", 1);

  schwarzenegger.signForm(chopperBill);

  
}