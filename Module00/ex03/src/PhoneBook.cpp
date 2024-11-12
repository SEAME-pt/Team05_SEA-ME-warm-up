
#include "../include/PhoneBook.hpp"
#include "../include/Utils.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::PhoneBook(const PhoneBook &copy) : contacts_(copy.contacts_) {}

PhoneBook &PhoneBook::operator=(const PhoneBook &copy)
{
	if (this != &copy)
	{
		this->contacts_ = copy.contacts_;
	}
	return (*this);
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::wellcome()
{
	std::cout << "+-----------------------------------------------+" << std::endl;
	std::cout << "|           Welcome to the PhoneBook!           |" << std::endl;
	std::cout << "+-----------------------------------------------+" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::menuPhonebook()
{
	std::cout << "+-----------------------------------------------+" << std::endl;
	std::cout << "|     Choice one of the following commands:     |" << std::endl;
	std::cout << "| ADD      - Add a new contact.                 |" << std::endl;
	std::cout << "| SEARCH   - Search for a contact.              |" << std::endl;
	std::cout << "| REMOVE   - Remove a contact.                  |" << std::endl;
	std::cout << "| BOOKMARK - List up the bookmarked contact.    |" << std::endl;
	std::cout << "| EXIT     - Exit the PhoneBook.                |" << std::endl;
	std::cout << "+-----------------------------------------------+" << std::endl;
	std::cout << std::endl;

}

void	PhoneBook::sortContactsByName() 
{
	std::sort(this->contacts_.begin(), this->contacts_.end(), [](const Contact& a, const Contact& b) {
        std::string nameA = a.getName();
        std::string nameB = b.getName();

        std::transform(nameA.begin(), nameA.end(), nameA.begin(), ::tolower);
        std::transform(nameB.begin(), nameB.end(), nameB.begin(), ::tolower);

        return nameA < nameB;
    });
}

void	PhoneBook::addContact()
{
	std::string name;
	std::string nickName;
	std::string phoneNumber;

	name = checkNameInput("Name: ");
	nickName = checkNickInput("Nickname: ");
	while (phoneNumber.empty())
	{
		phoneNumber = checkPhoneInput("Phone Number: ");
		if (phoneNumberExists(phoneNumber) >= 0)
		{
			std::cout << PHONE_EXISTS << std::endl;
			phoneNumber.clear();
		}
	}
	std::cout << std::endl;
	this->contacts_.emplace_back(name, nickName, phoneNumber);
	sortContactsByName();
	std::cout << "          Contact Saved With Sucess!   " << std::endl;
	std::cout << std::endl;
}

bool	PhoneBook::bookMarkIsEmpty()
{
	for (size_t i = 0; i < this->contacts_.size(); i++)
	{
		if (this->contacts_[i].getIsBookMarked() == true)
			return (false);
	}
	return (true);
}

int		PhoneBook::printContactsBookMarked()
{
	if (bookMarkIsEmpty())
	{
		std::cout << "BookMark is empty!" << std::endl << std::endl;
		return (1);
	}
	else
	{
		int index = 1;

		std::cout << "+----------+----------+----------+" << std::endl;
		std::cout << HEADER_BOOKMARK << std::endl;
		std::cout << "+----------+----------+----------+" << std::endl;
		for (size_t i = 0; i < this->contacts_.size(); i++)
		{
			if (this->contacts_[i].getIsBookMarked() == true)
			{
				std::cout << "|" << std::setw(10) << index << "|";
				std::cout << std::setw(10) << truncString(this->contacts_[i].getName()) << "|";
				std::cout << std::setw(10) << truncString(this->contacts_[i].getNickName()) << "|";
				std::cout << std::endl;
				std::cout << "+----------+----------+----------+" << std::endl;
				index++;
			}
		}
	}
	return (0);
}

void	PhoneBook::repeatSearchBookMark()
{
	std::string option;

	while (option != "y" || option != "Y" || option != "n" || option != "N")
	{
		std::cout << "Do you want to search again? (y/n): ";
		std::getline(std::cin, option);
		checkCtrlD();
		if (option == "y" || option == "Y")
		{
			std::cout << std::endl;
			searchContactsBookMarked();
			break;
		}
		else if (option == "n" || option == "N")
			break;
	}
	std::cout << std::endl;
}

void	PhoneBook::searchContactsBookMarked()
{
	std::string input;
	int index;
	int i = 0;

	if (this->contacts_.size() == 0)
		std::cout << "PhoneBook is empty!" << std::endl << std::endl;
	else
	{
		if (printContactsBookMarked())
			return ;
		std::cout << std::endl << "Choice a index to show informations about your contact or digit '0' to exit." << std::endl;
		std::cout << std::endl << "Index: ";
		std::getline(std::cin, input);
		checkCtrlD();
		std::cout << std::endl;
		try 
		{
			index = std::stoi(input);
			if (index == 0)
			{
				std::cout << std::endl << "Exiting BOOKMARK..." << std::endl;
				return ;
			}
			else if (index >= 1 && index <= this->contacts_.size())
			{
				for (int l = 0; l < this->contacts_.size(); l++)
				{
					if (this->contacts_[l].getIsBookMarked())
						i++;
					if (i == index)
					{
						printContactInfo(this->contacts_[l]);
						index = -1;
						break;
					}
				}
				if (index != -1)
					std::cout << INVALID_INDEX << std::endl << std::endl;
			}
			else
				std::cout << INVALID_INDEX << std::endl << std::endl;
    	} 
		catch (const std::invalid_argument& e) {
        	std::cerr << "Invalid input. Please enter a valid number." << std::endl << std::endl;
		} 
		catch (const std::out_of_range& e) {
			std::cerr << "Number is out of range." << std::endl << std::endl;
		}
		repeatSearchBookMark();
	}
}

void	PhoneBook::printContacts()
{
	std::string isBookMarked;

	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << HEADER << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (size_t i = 0; i < this->contacts_.size(); i++)
	{
		if (this->contacts_[i].getIsBookMarked() == true)
			isBookMarked = "yes";
		else
			isBookMarked = "no";
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncString(this->contacts_[i].getName()) << "|";
		std::cout << std::setw(10) << truncString(this->contacts_[i].getNickName()) << "|";
		std::cout << std::setw(10) << isBookMarked << "|";
		std::cout << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
}

void	PhoneBook::printContactInfo(Contact contact)
{
	std::string isBookMarked;

	if (contact.getIsBookMarked() == true)
		isBookMarked = "yes";
	else
		isBookMarked = "no";

	std::cout << "+-----------------------------------------------+" << std::endl;
	std::cout << "|              Contact informations             |" << std::endl;
	std::cout << "+---------------+-------------------------------+" << std::endl;
	std::cout << "|Name           | ";
	std::cout <<std::left << std::setw(30) << contact.getName() << "|" << std::endl;
	std::cout << "+---------------+-------------------------------+" << std::endl;
	std::cout << "|Nickname       | ";
	std::cout <<std::left << std::setw(30) << contact.getNickName() << "|" << std::endl;
	std::cout << "+---------------+-------------------------------+" << std::endl;
	std::cout << "|Phone number   | ";
	std::cout <<std::left << std::setw(30) << contact.getPhoneNumber() << "|" << std::endl;
	std::cout << "+---------------+-------------------------------+" << std::endl;
	std::cout << "|Bookmarked     | ";
	std::cout <<std::left << std::setw(30) << isBookMarked << "|" << std::endl;
	std::cout << "+---------------+-------------------------------+" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::removeContactByPhone()
{
	std::string phoneNumber;
	int i;

	printContacts();
	std::cout << "Enter phone number to remove contact or '0' to exit." << std::endl;

	phoneNumber = checkPhoneInput("Phone Nubmer: ");
	i = phoneNumberExists(phoneNumber);
	if (i >= 0)
	{
		this->contacts_.erase(this->contacts_.begin() + i);
		std::cout << "Your contact was removed with sucess!" << std::endl;
	}
	else
	{
		std::cout << "This phone number don't exist in your PhoneBook." << std::endl;
		removeContact();
	}
}

void	PhoneBook::removeContactByIndex()
{
	std::string input;
	int index;
	int i;

	printContacts();
	std::cout << std::endl;
	std::cout << "Choice a index to remove the contact or '0' to exit!" << std::endl;
	std::cout << std::endl << "Index: ";
	std::getline(std::cin, input);
	checkCtrlD();
	std::cout << std::endl;
	try
	{
		index = std::stoi(input);
		if (index == 0)
			std::cout << "Exiting REMOVE contact..." << std::endl;
		else if (index >= 1 && index <= this->contacts_.size())
		{
			this->contacts_.erase(this->contacts_.begin() + index - 1);
			std::cout << "Your contact was removed with success!" << std::endl;
		}
		else
		{
			std::cout << INVALID_INDEX << std::endl << std::endl;
			removeContact();
		}
	} 
	catch (const std::invalid_argument& e) {
		std::cerr << "Invalid input. Please enter a valid number." << std::endl;
	} 
	catch (const std::out_of_range& e) {
		std::cerr << "Number is out of range." << std::endl;
	}
}

void	PhoneBook::removeContact()
{
	std::string option;

	if (this->contacts_.size() == 0)
		std::cout << "PhoneBook is empty!" << std::endl << std::endl;
	else
	{
		while (option != "0" || option != "1" || option != "2")
		{
			std::cout << "Digit '0' to exit, '1' to remove contact by index or '2' to remove contact by phone number: ";
			std::getline(std::cin, option);
			checkCtrlD();
			std::cout << std::endl;
			if (option == "0")
			{
				std::cout << "Exiting Remove Contact..." << std::endl;
				break;
			}
			else if (option == "1")
			{
				std::cout << std::endl;
				removeContactByIndex();
				break;
			}
			else if (option == "2")
			{
				std::cout << std::endl;
				removeContactByPhone();
				break;
			}
		}
		std::cout << std::endl;
	}
}

void	PhoneBook::bookMarkContact()
{
	std::string input;
	int index;

	std::cout << "Choice a index to bookmark the contact or '0' to exit!" << std::endl;
	std::cout << std::endl << "Index: ";
	std::getline(std::cin, input);
	checkCtrlD();
	std::cout << std::endl;
	try 
	{
		index = std::stoi(input);
		if (index == 0)
			std::cout << "Exiting BOOKMARK..." << std::endl << std::endl;
		else if (index >= 1 && index <= this->contacts_.size())
		{
			this->contacts_[index - 1].setIsBookMarked(!this->contacts_[index - 1].getIsBookMarked());
			std::cout << "Your contact was bookmarked with sucess!" << std::endl << std::endl;
		}
		else
		{
			std::cout << INVALID_INDEX << std::endl << std::endl;
			bookMarkContact();
		}
	} 
	catch (const std::invalid_argument& e) {
		std::cerr << "Invalid input. Please enter a valid number." << std::endl;
	} 
	catch (const std::out_of_range& e) {
		std::cerr << "Number is out of range." << std::endl;
	}
}

void	PhoneBook::repeatSearch()
{
	std::string option;

	while (option != "y" || option != "Y" || option != "n" || option != "N")
	{
		std::cout << "Do you want to search again? (y/n): ";
		std::getline(std::cin, option);
		checkCtrlD();
		if (option == "y" || option == "Y")
		{
			std::cout << std::endl;
			searchContact();
			break;
		}
		else if (option == "n" || option == "N")
			break;
	}
	std::cout << std::endl;
}

void	PhoneBook::searchContact()
{
	std::string input;
	int index;

	if (this->contacts_.size() == 0)
		std::cout << "PhoneBook is empty!" << std::endl << std::endl;
	else
	{
		printContacts();
		std::cout << std::endl << BOOKMARK << std::endl;
		std::cout << std::endl << "Index: ";
		std::getline(std::cin, input);
		checkCtrlD();
		std::cout << std::endl;
		try 
		{
			index = std::stoi(input);
			if (index == 0)
				bookMarkContact();
			else if (index >= 1 && index <= this->contacts_.size())
				printContactInfo(this->contacts_[index - 1]);
			else
				std::cout << INVALID_INDEX << std::endl << std::endl;
    	} 
		catch (const std::invalid_argument& e) {
        	std::cerr << "Invalid input. Please enter a valid number." << std::endl << std::endl;
		} 
		catch (const std::out_of_range& e) {
			std::cerr << "Number is out of range." << std::endl << std::endl;
		}
		repeatSearch();
	}
}

int PhoneBook::phoneNumberExists(std::string input)
{
	for (int i = 0; i < this->contacts_.size(); i++)
	{
		if (input == this->contacts_[i].getPhoneNumber()) {
			return i;
		}
	}
	return -1;
}

void	PhoneBook::exitPhoneBook()
{
	std::cout << "Goodbye!" << std::endl << std::endl;
}
