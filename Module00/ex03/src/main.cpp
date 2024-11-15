
#include "../include/PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;
	phoneBook.wellcome();
	
	while (1)
	{
		phoneBook.menuPhonebook();
		std::cout << "Command: ";
		std::getline(std::cin, command);
		std::cout << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << "exit" << std::endl;
			exit(0);
		}
		if (command == "ADD" || command == "add")
			phoneBook.addContact();
		else if (command == "SEARCH" || command == "search")
			phoneBook.searchContact();
		else if (command == "REMOVE" || command == "remove")
			phoneBook.removeContact();
		else if (command == "BOOKMARK" || command == "bookmark")
			phoneBook.searchContactsBookMarked();
		else if (command == "EXIT" || command == "exit")
		{
			phoneBook.exitPhoneBook();
			break;
		}
		else
			std::cout << "Invalid command." << std::endl << std::endl;
	}
	return (0);
}