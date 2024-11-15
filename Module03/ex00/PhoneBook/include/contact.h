#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
public:
    Contact();
    Contact(std::string& name, std::string& nickName, std::string& phoneNumber, std::string& email);
    Contact(const Contact& copy);
    Contact& operator=(const Contact& copy);
    ~Contact();

    std::string	getName() const;
    std::string	getNickName() const;
    std::string getEmail() const;
    std::string	getPhoneNumber() const;
    //std::string getTest() const;
    void		setName(std::string& str);
    void		setNickName(std::string& str);
    void		setEmail(std::string& email);
    void		setPhoneNumber(std::string& str);
    //void        setTest(std::string& test);

private:
    std::string name_;
    std::string nickName_;
    std::string phoneNumber_;
    std::string email_;
};

#endif // CONTACT_H
