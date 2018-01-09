#include "phonebook.hpp"

void displayPrompt( void ) {
  std::cout << "Please choose an option:" << std::endl;
  std::cout << "ADD" << std::endl;
  std::cout << "SEARCH" << std::endl;
  std::cout << "EXIT" << std::endl << std::endl;
}

void addContact( Contact contactsList[], int index ) {
  std::string input;

  std::cout << "Please enter your first name" << std::endl;
  std::cin.ignore();
  std::getline(std::cin, input);
  contactsList[index].setFirstName(input);
  std::cout << "Please enter your last name" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setLastName(input);
  std::cout << "Please enter your nickname" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setNickName(input);
  std::cout << "Please enter your login" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setLogin(input);
  std::cout << "Please enter your postal address" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setPostal(input);
  std::cout << "Please enter your email address" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setEmail(input);
  std::cout << "Please enter your phone number" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setPhoneNumber(input);
  std::cout << "Please enter your birthday" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setBirthday(input);
  std::cout << "Please enter your favorite meal" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setFavMeal(input);
  std::cout << "Please enter your underwear color" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setUnderwearColor(input);
  std::cout << "Please enter your darkest secret" << std::endl;
  std::getline(std::cin, input);
  contactsList[index].setDarkestSecret(input);
  std::cout << "Entry Added!" << std::endl << std::endl;
}

void printColumn(std::string column) {
  int i = 0;

  std::cout << '|';
  std::cout << std::setw(10 - (column.length() - 1));
  while (i < 9 && column[i]) {
    std::cout << column[i];
    i++;
  }
  if (column.length() > 10) {
    std::cout << '.';
  } else {
    std::cout << column[i];
  }
}

void printContactInfo(Contact contact) {
  std::cout << "First Name: " << contact.getFirstName() << std::endl
  << "Last Name: " << contact.getLastName() << std::endl
  << "Nickname: " << contact.getNickName() << std::endl
  << "Login: " << contact.getLogin() << std::endl
  << "Postal Address: " << contact.getPostal() << std::endl
  << "Email Address: " << contact.getEmail() << std::endl
  << "Phone Number: " << contact.getPhoneNumber() << std::endl
  << "Birthday: " << contact.getBirthday() << std::endl
  << "Favorite Meal: " << contact.getFavMeal() << std::endl
  << "Underwear Color: " << contact.getUnderwearColor() << std::endl
  << "Darkest Secret: " << contact.getDarkestSecret() << std::endl << std::endl;
}

void searchContacts(Contact contactsList[], int contactLength) {
  std::cout << "     Index| FirstName|  LastName|  NickName" << std::endl; 
  for (int i = 0; i < contactLength; i++) {
    std::cout << std::setw(10);
    std::cout << i;
    printColumn(contactsList[i].getFirstName());
    printColumn(contactsList[i].getLastName());
    printColumn(contactsList[i].getNickName());
    std::cout << std::endl;
  }

  std::string input;

  std::cin >> input;
  for (int i = 0; i < contactLength; i++) {
    std::string cmp;
  
    cmp += (char)(i + 48);
    if (input == cmp) {
      printContactInfo(contactsList[i]);
      return ;
    }
  }
  std::cout << "Invalid input" << std::endl << std::endl;
  return ;
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