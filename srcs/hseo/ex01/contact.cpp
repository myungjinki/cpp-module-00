#include <iostream>
#include <string>
#include "contact.hpp"

void    Contact::getInfo() 
{
    std::cout << "input first name: ";
    getline (std::cin, contactInfo[0]);
    std::cout << "input last name: ";
    getline (std::cin, contactInfo[1]);
    std::cout << "input nickname: ";
    getline (std::cin, contactInfo[2]);
    std::cout << "input login: ";
    getline (std::cin, contactInfo[3]);
    std::cout << "input postal address: ";
    getline (std::cin, contactInfo[4]);
    std::cout << "input email: ";
    getline (std::cin, contactInfo[5]);
    std::cout << "input phonenumber: ";
    getline (std::cin, contactInfo[6]);
    std::cout << "input birthday: ";
    getline (std::cin, contactInfo[7]);
    std::cout << "input favorite meal: ";
    getline (std::cin, contactInfo[8]);
    std::cout << "input underwear: ";
    getline (std::cin, contactInfo[9]);
    std::cout << "input secret: ";
    getline (std::cin, contactInfo[10]);
    std::cout << "input info completed!\n\n";
}

void    Contact::showInfo()
{
    std::cout << "first name: " << contactInfo[0] << std::endl;
    std::cout << "last name: " << contactInfo[1] << std::endl;
    std::cout << "nickname: " << contactInfo[2] << std::endl;
    std::cout << "login: " << contactInfo[3] << std::endl;
    std::cout << "postal address: " << contactInfo[4] << std::endl;
    std::cout << "email: " << contactInfo[5] << std::endl;
    std::cout << "phonenumber: " << contactInfo[6] << std::endl;
    std::cout << "birthday: " << contactInfo[7] << std::endl;
    std::cout << "favorite meal: " << contactInfo[8] << std::endl;
    std::cout << "underwear: " << contactInfo[9] << std::endl;
    std::cout << "secret: " << contactInfo[10] << std::endl;
    std::cout << "\n";
}

void    Contact::putIndex()
{
    for (int i = 0; i < 3 ; i++)
    {
        if (contactInfo[i].size() > 10)
        {
            for (int k = 0 ; k < 9 ; k++)
                std::cout << contactInfo[i].at(k);
            std::cout << ".|";
        }
        else
        {
            int cap = 10 - contactInfo[i].size();
            for (int j = 0 ; j < cap ; j++)
                std::cout << " ";
            std::cout << contactInfo[i] << "|";
        }
    }    
}