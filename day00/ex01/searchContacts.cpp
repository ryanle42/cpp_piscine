#include "phonebook.hpp"

static void printColumn(std::string column) {
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

static void printContactInfo(Contact contact) {
  std::cout << std::endl 
            << "First Name: " << contact.getFirstName() 
            << std::endl
            << "Last Name: " << contact.getLastName() 
            << std::endl
            << "Nickname: " << contact.getNickName() 
            << std::endl
            << "Login: " << contact.getLogin() 
            << std::endl
            << "Postal Address: " << contact.getPostal() 
            << std::endl
            << "Email Address: " << contact.getEmail() 
            << std::endl
            << "Phone Number: " << contact.getPhoneNumber() 
            << std::endl
            << "Birthday: " << contact.getBirthday() 
            << std::endl
            << "Favorite Meal: " << contact.getFavMeal() 
            << std::endl
            << "Underwear Color: " << contact.getUnderwearColor() 
            << std::endl
            << "Darkest Secret: " << contact.getDarkestSecret() 
            << std::endl 
            << std::endl;
}

static void printTable(Contact contactsList[], int contactLength) {
  std::cout << std::endl
  << "     Index|First Name| Last Name| Nick Name" << std::endl; 
  for (int i = 0; i < contactLength; i++) {
    std::cout << std::setw(10);
    std::cout << i;
    printColumn(contactsList[i].getFirstName());
    printColumn(contactsList[i].getLastName());
    printColumn(contactsList[i].getNickName());
    std::cout << std::endl;
  }
}

void searchContacts(Contact contactsList[], int contactLength) {
  std::string input;

  printTable(contactsList, contactLength);
  std::cout << std::endl << "Please enter an index" << std::endl;
  std::cin >> input;
  std::string cmp;
  for (int i = 0; i < contactLength; i++) {
    cmp = "";
    cmp += (char)(i + '0');
    if (input == cmp) {
      printContactInfo(contactsList[i]);
      return ;
    }
  }
  std::cout << std::endl << "Invalid input" << std::endl << std::endl;
  return ;
}