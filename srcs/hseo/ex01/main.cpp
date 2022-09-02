#include "phonebook.hpp"
#include <iostream>

int main()
{
    Phonebook phonebook;
    phonebook.initPhonebook();
    std::string command;

    while (1)
    {
        std::cout << "your command? (ADD | SEARCH | EXIT): ";
        std::getline (std::cin, command);
        if (command == "EXIT" || command == "exit") 
        {
            std::cout << "Program Terminiated.\n";
            break;
        }
        if (command == "ADD" || command == "add")
            phonebook.addContact();
        if (command == "search" || command == "SEARCH")
            phonebook.showContact();
    }
    return (0);
}