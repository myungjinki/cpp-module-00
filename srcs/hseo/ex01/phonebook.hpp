#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
    Contact contactList[8];
    int     cnt;
    std::string index;

    public:
        void    initPhonebook(); 
        void    addContact();
        void    showContact();
        int     getIndex();
        void    showInfo();
};

#endif