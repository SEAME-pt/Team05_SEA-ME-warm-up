#include "contact.h"

#include <QDebug>

Contact::Contact() : name_(""), nickName_(""), phoneNumber_(""), email_("") {}

Contact::Contact(std::string& name, std::string& nickName, std::string& phoneNumber, std::string& email)
    : name_(name), nickName_(nickName), phoneNumber_(phoneNumber), email_(email) {}

Contact::Contact(const Contact& copy) : name_(copy.name_), nickName_(copy.nickName_),
    phoneNumber_(copy.phoneNumber_), email_(copy.email_) {}

Contact &Contact::operator=(const Contact& copy)
{
    if (this != &copy)
    {
        this->name_ = copy.name_;
        this->nickName_ = copy.nickName_;
        this->phoneNumber_ = copy.phoneNumber_;
        this->email_ = copy.email_;
    }
    return (*this);
}

Contact::~Contact()
{
}

void	Contact::setName(std::string& name)
{
    this->name_ = name;
}

void	Contact::setNickName(std::string& nickname)
{
    this->nickName_ = nickname;
}

void	Contact::setPhoneNumber(std::string& phoneNumber)
{
    this->phoneNumber_ = phoneNumber;
}

void	Contact::setEmail(std::string& email)
{
    this->email_ = email;
    //qDebug() << QString::fromStdString(this->email_);
}

//void    Contact::setTest(std::string& test)
//{
//    this->test_ = test;
//}

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

std::string	Contact::getEmail() const
{
    return (this->email_);
}

//std::string Contact::getTest() const
//{
 //   return (this->test_);
//}
