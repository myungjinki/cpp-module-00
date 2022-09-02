#include "Contact.hpp"

std::string Contact::fields_name[11] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Login",
	"Address",
	"E-mail",
	"Phone",
	"Birthday",
	"Favorite Meal",
	"Underwear Color",
	"Darkest Secret"
};

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool Contact::SetFields(int index)
{
	this->index = index;
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << ":D " << Contact::fields_name[i] << ":\n+";
		std::getline(std::cin, this->informations[i]);
		if (this->informations[i].length() <= 0)
		{
			std::cout << "plz, Enter whatever you need!" << std::endl;
			return (false);
		}
	}
	std::cout << ":D Save the personal info!" << std::endl;
	return (true);
}

void Contact::DisplayContactOutline()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->informations[i].length() > 10)
			std::cout << this->informations[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->informations[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::DisplayIndexedContact(void)
{
	std::cout << ":D personal info [" << this->index << "]" << std::endl;
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->informations[i] << std::endl;
	}
}
