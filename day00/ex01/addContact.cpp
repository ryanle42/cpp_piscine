#include "phonebook.hpp"

void addContact( Contact contactsList[], int index ) {
  std::string input;

  std::cout << std::endl << "Please enter your first name" << std::endl;
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
  std::cout << std::endl << "Entry Added!" << std::endl << std::endl;
}
