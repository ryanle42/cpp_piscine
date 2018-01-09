#include "phonebook.hpp"

static void displayPrompt( void ) {
  std::cout << "Please choose an option:" << std::endl;
  std::cout << "ADD" << std::endl;
  std::cout << "SEARCH" << std::endl;
  std::cout << "EXIT" << std::endl << std::endl;
}

int main( void ) {
  int numberOfContacts = 0;
  std::string input;
  Contact contactsList[7];

  while (1) {
    displayPrompt();
    std::cin >> input;
    if (input == "ADD") {
      addContact(contactsList, numberOfContacts);
      numberOfContacts++;
    } else if (input == "SEARCH") {
      searchContacts(contactsList, numberOfContacts);
    } else if (input == "EXIT") {
      break;
    } else {
      std::cout << "Unknown command" << std::endl << std::endl;
    }
  }
}