#include <iostream>
#include <string>
#include "phonebook.hpp"

void    Phonebook::initPhonebook()
{
    cnt = 0;
}

void    Phonebook::addContact()
{
    if (cnt == 8)
    {
        std::cout << "Your phonebook is full!\n\n";
        return ;
    }
    Contact contact;
    contact.getInfo();
    contactList[cnt] = contact;
    cnt++;
}

void    Phonebook::showContact()
{
    std::cout << "---------------------------------------------\n";
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
    std::cout << "---------------------------------------------\n";
    if (cnt == 0)
        return ;
    for (int i = 0 ; i < cnt ; i++)
    {
        std::cout << "|         " << i + 1 << "|";
        contactList[i].putIndex();
        std::cout << "\n";
    }
    std::cout << "\nWhose information do you want? (input INDEX number): ";
    getline (std::cin, index);
    for (unsigned long i = 0 ; i < index.size() ; i++)
    {
        if (!isdigit(index[i]))
        {
            std::cout << "Wrong input\n";
            return ;
        }
    }
    int number = std::stoi(index);
    if (number > 0 && number <= cnt)
        contactList[number - 1].showInfo();
    else
        std::cout << "No information!\n";
}