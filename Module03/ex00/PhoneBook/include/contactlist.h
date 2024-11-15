#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

    Contact&    getContact(int index);
    bool        findContact(int index, std::string& search) const;
    void        addContact(const Contact& contact);
    void        removeContact(int index);
    bool        saveToFile(QString& fileName) const;
    bool        loadFromFile(const QString& fileName);
    int         getSizeContactsList();

    ContactList &operator=(const ContactList &copy);

private:

    std::vector<Contact> contacts_;
};

#endif // CONTACTLIST_H
