
# include "../include/Utils.hpp"

void	checkCtrlD()
{
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::cout << "exit" << std::endl;
		exit(1);
	}
}

int		isValidName(std::string input)
{
	if (!std::isalpha(input[0])) {
		return false;
	}
	for(size_t i = 1; i < input.length(); i++)
	{
		if (!std::isalpha(input[i]) && !std::isdigit(input[i]) && input[i] != ' ')
			return false;
	}
	return true;
}

int		isValidNoEspaces(std::string input)
{
	for(size_t i = 0; i < input.length(); i++)
	{
		if (std::isspace(input[i]))
			return false;
	}
	return true;
}

int		isValidNumber(std::string input)
{
	for(size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
			return false;
	}
	return true;
}

std::string	checkNameInput(std::string str)
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	checkCtrlD();
	if (input.empty() || !isValidName(input) || input.length() > 30)
	{
		std::cout << INVALID_NAME << std::endl;
		return (checkNameInput(str));
	}
	return (input);
}

std::string	checkNickInput(std::string str)
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	checkCtrlD();
	if (input.empty() || !isValidNoEspaces(input) || input.length() > 30)
	{
		std::cout << INVALID_NICK_NAME << std::endl;
		return (checkNickInput(str));
	}
	return (input);
}

std::string	checkPhoneInput(std::string str)
{
	std::string input;

	std::cout << str;
	std::getline(std::cin, input);
	checkCtrlD();
	if (input.empty() || !isValidNumber(input) || input.length() > 15 || input.length() < 6)
	{
		std::cout << INVALID_PHONE << std::endl;
		return (checkPhoneInput(str));
	}
	return (input);
}

std::string	truncString(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}
