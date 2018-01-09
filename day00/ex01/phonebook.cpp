#include "phonebook.hpp"

static void displayPrompt( int numberOfContacts ) {
  std::cout << "Please choose an option:" << std::endl;
  if (numberOfContacts <= 7) {
    std::cout << "ADD" << std::endl;
  }
  std::cout << "SEARCH" << std::endl;
  std::cout << "EXIT" << std::endl << std::endl;
}

int main( void ) {
  int numberOfContacts = 0;
  std::string input;
  Contact contactsList[8];

  while (1) {
    displayPrompt(numberOfContacts);
    std::cin >> input;
    if (input == "ADD") {
      if (numberOfContacts <= 7) {
        addContact(contactsList, numberOfContacts);
        numberOfContacts++;
      } else {
        std::cout << std::endl 
        << "Contact List is at maximum capacity" 
        << std::endl << std::endl;
      }
    } else if (input == "SEARCH") {
      searchContacts(contactsList, numberOfContacts);
    } else if (input == "EXIT") {
      break;
    } else {
      std::cout << "Unknown command" << std::endl << std::endl;
    }
  }
}