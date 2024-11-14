#ifndef CONTACTLIST_H
#define CONTACTLIST_H

# include "contact.h"
# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <cstdlib>
# include <vector>
# include <algorithm>

class ContactList
{
public:
    ContactList();
    ContactList(const ContactList &copy);
    ~ContactList();

    Contact getContact(int index) const;
    bool    findContact(int index, std::string& search) const;
    void    addContact(const Contact& contact);
    void    removeContact(int index);
    int     getSizeContactsList();


    ContactList &operator=(const ContactList &copy);

private:

    std::vector<Contact> contacts_;
};

#endif // CONTACTLIST_H
