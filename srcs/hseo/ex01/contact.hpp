#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    private:
        std::string contactInfo[11];
    public:
        void    getInfo();
        void    showInfo();
        void    putIndex();
};

#endif