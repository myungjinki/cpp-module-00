
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		amount;
	void	ShowOutline(void);
public:
	PhoneBook();
	virtual ~PhoneBook();
	void	AddContact(void);
	void	SearchContact(void);

};

#endif
