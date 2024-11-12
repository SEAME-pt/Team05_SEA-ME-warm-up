
#include "../include/Contact.hpp"

Contact::Contact() : name_(""), nickName_(""), phoneNumber_(""), isBookMarked_(false) {}

Contact::Contact(std::string name, std::string nickName, std::string phoneNumber)
	: name_(name), nickName_(nickName), phoneNumber_(phoneNumber), isBookMarked_(false) {}

Contact::Contact(const Contact &copy) : name_(copy.name_), nickName_(copy.nickName_), 
							phoneNumber_(copy.phoneNumber_), isBookMarked_(copy.isBookMarked_) {}

Contact &Contact::operator=(const Contact &copy)
{
	if (this != &copy)
	{
		this->name_ = copy.name_;
		this->nickName_ = copy.nickName_;
		this->phoneNumber_ = copy.phoneNumber_;
		this->isBookMarked_ = copy.isBookMarked_;
	}
	return (*this);
}

Contact::~Contact()
{
}

void	Contact::setName(std::string name)
{
	this->name_ = name;
}

void	Contact::setNickName(std::string nickname)
{
	this->nickName_ = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber_ = phoneNumber;
}

void	Contact::setIsBookMarked(bool marked)
{
	this->isBookMarked_ = marked;
}

std::string	Contact::getName() const
{
	return (this->name_);
}

std::string	Contact::getNickName() const
{
	return (this->nickName_);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phoneNumber_);
}

bool	Contact::getIsBookMarked() const
{
	return (this->isBookMarked_);
}