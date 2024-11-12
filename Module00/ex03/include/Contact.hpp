
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Utils.hpp"

class Contact
{
	public:
		Contact();
		Contact(std::string name, std::string nickName, std::string phoneNumber);
		Contact(const Contact &copy);
		Contact &operator=(const Contact &copy);
		~Contact();
		std::string	getName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		bool		getIsBookMarked() const;
		void		setName(std::string str);
		void		setNickName(std::string str);
		void		setPhoneNumber(std::string str);
		void		setIsBookMarked(bool marked);
		
	private:
		std::string name_;
		std::string nickName_;
		std::string phoneNumber_;
		bool		isBookMarked_;
};

#endif