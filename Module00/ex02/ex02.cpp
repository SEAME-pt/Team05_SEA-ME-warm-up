// Exercise 02 : Do you know string??
// How deeply do you know about C++? Let’s start from the beginning again. The first one is just for using string.

// Make the program as follows this:
// Use simple string class
// To convert UPPER CASE
// To convert LOWER CASE
// Use string class’s functions
// substr, append, insert, replace, erase, etc..
// The program gets two arguments:
// ./convert {command} {string}
// ex) ./convert up I’m the one!
// output: I’M THE ONE!
// ex) ./convert down I’m A SMall man
// output: i’m a small man

#include <algorithm> // Para std::transform
#include <iostream>
#include <string>

class SimpleString
{
  private:
    std::string str;

  public:
    // Default constructor
    SimpleString() : str("")
    {
    }

    // Constructor with parameter
    SimpleString(const std::string &s) : str(s)
    {
    }

    // Copy constructor
    SimpleString(const SimpleString &other) : str(other.str)
    {
    }

    // Copy assignment operator
    SimpleString &operator=(const SimpleString &other)
    {
        if (this != &other)
        {
            str = other.str;
        }
        return *this;
    }

    // Destructor
    ~SimpleString()
    {
    }

    void toUpperCase()
    {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    void toLowerCase()
    {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    void print() const
    {
        std::cout << str << std::endl;
    }
};

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cerr << "Uso: " << argv[0] << " {up|down} {string}" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    std::string inputString = argv[2];

    for (int i = 3; i < argc; ++i)
    {
        inputString += " " + std::string(argv[i]);
    }

    SimpleString myString(inputString);

    if (command == "up")
    {
        myString.toUpperCase();
        myString.print();
    }
    else if (command == "down")
    {
        myString.toLowerCase();
        myString.print();
    }
    else
    {
        std::cerr << "Invalid command. Use 'up' for uppercase or 'down' for lowercase." << std::endl;
        return 1;
    }
    return 0;
}