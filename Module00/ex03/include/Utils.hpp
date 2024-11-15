
#ifndef UTILS_H
# define UTILS_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <cstdlib>
#include <vector>
#include <algorithm>

# define INVALID_NICK_NAME	"Invalid input. Cannot contain spaces and cannot be longer than 30 characters!"
# define INVALID_NAME		"At least the first character of the name must be a letter, cannot contain accents and cannot be longer than 30 characters!"
# define INVALID_PHONE		"Invalid phone number. Only numbers with a maximum of 15 digits and a minimum 6 digits are accepted!"
# define PHONE_EXISTS		"Invalid phone number. This number already belongs to another contact in the PhoneBook!"
# define HEADER				"|Index     |Name      |Nickname  |BookMarked|"
# define HEADER_BOOKMARK	"|Index     |Name      |Nickname  |"
# define INVALID_INDEX		"Invalid index. Check the first column in the list above."
# define ZERO_INDEX			"Zero is not a valid index! Check the first column in the list above."
# define BOOKMARK			"You can choice a index to show the informations about your contact or choice '0' to BOOKMARK/UNBOOKMARK a contact."
# define MAX_CONTACTS       10

void		checkCtrlD();
int			isValidName(std::string input);
int			isValidNoEspaces(std::string input);
int			isValidNumber(std::string input);
std::string	checkNameInput(std::string str);
std::string	checkNickInput(std::string str);
std::string	checkPhoneInput(std::string str);
std::string	truncString(std::string str);

#endif