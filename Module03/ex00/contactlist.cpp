#include "contactlist.h"
#include <algorithm>
#include <string>
#include <QDebug>

ContactList::ContactList() {}

ContactList::ContactList(const ContactList &copy) : contacts_(copy.contacts_) {}

ContactList &ContactList::operator=(const ContactList &copy)
{
    if (this != &copy)
    {
        this->contacts_ = copy.contacts_;
    }
    return (*this);
}

void ContactList::addContact(const Contact& contact)
{
    contacts_.push_back(contact);
}

void ContactList::removeContact(int index)
{
    contacts_.erase(contacts_.begin() + index);
}

Contact ContactList::getContact(int index) const
{
    return contacts_[index];
}

bool    ContactList::findContact(int index, std::string& search) const
{
    std::string name = contacts_[index].getName();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    std::transform(search.begin(), search.end(), search.begin(), ::tolower);

    if (name.find(search) != std::string::npos) {
        return (true);
    } else {
        return (false);
    }
}

int     ContactList::getSizeContactsList()
{
    return (this->contacts_.size());
}

ContactList::~ContactList()
{
}
