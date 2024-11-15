#include "contactlist.h"

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

Contact& ContactList::getContact(int index)
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

bool ContactList::saveToFile(QString& fileName) const
{
    if (!fileName.endsWith(".txt", Qt::CaseInsensitive)) {
        fileName += ".txt";
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream out(&file);
    for (const Contact& contact : contacts_)
    {
        out << QString::fromStdString(contact.getName()) << ";"
            << QString::fromStdString(contact.getNickName()) << ";"
            << QString::fromStdString(contact.getPhoneNumber()) << ";"
            << QString::fromStdString(contact.getEmail()) << "\n";
    }
    file.close();
    return true;
}

bool ContactList::loadFromFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);
    contacts_.clear();
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList fields = line.split(';');
        if (fields.size() == 4)
        {
            std::string name = fields[0].toStdString();
            std::string nickName = fields[1].toStdString();
            std::string phoneNumber = fields[2].toStdString();
            std::string email = fields[3].toStdString();

            contacts_.emplace_back(name, nickName, phoneNumber, email);
        }
    }
    file.close();
    return true;
}

int     ContactList::getSizeContactsList()
{
    return (this->contacts_.size());
}

ContactList::~ContactList()
{
}
