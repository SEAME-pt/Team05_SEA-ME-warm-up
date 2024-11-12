
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "Utils.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		~PhoneBook();

		PhoneBook &operator=(const PhoneBook &copy);

		void	wellcome();
		void	menuPhonebook();
		void	addContact();
		void	searchContact();
		void	searchContactsBookMarked();
		void	removeContact();
		void	exitPhoneBook();

	private:
		int		phoneNumberExists(std::string input);
		void	sortContactsByName();
		void	repeatSearch();
		void	removeContactByIndex();
		void	removeContactByPhone();
		void	printContacts();
		void	printContactInfo(Contact contact);
		void	bookMarkContact();
		void	repeatSearchBookMark();
		int		printContactsBookMarked();
		bool	bookMarkIsEmpty();

		std::vector<Contact> contacts_;
};

#endif