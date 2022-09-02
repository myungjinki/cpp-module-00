#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AddContact(void)
{
	if (this->amount == 8)
		std::cout << "><Warning!: You can't save info over 8!" << std::endl;
	else if (this->contacts[this->amount].SetFields(this->amount + 1))
		this->amount++;
}

void PhoneBook::ShowOutline(void)
{
	std::cout << "=============================================" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].DisplayContactOutline();
	std::cout << "=============================================" << std::endl;
}

void PhoneBook::SearchContact(void)
{
	int index;

	if (this->amount == 0)
		std::cout << ":D Searching, enter the personal info first!" << std::endl;
	else
	{
		this->ShowOutline();
		std::cout << ":D Enter index to look at the personal info or 0 to exit!\nIndex you wanna look at: ";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "I've got the wrong number.\nEnter the index again: ";
		}
		std::cin.ignore(INT_MAX, '\n');
		if (index > 0)
			this->contacts[index - 1].DisplayIndexedContact();
	}
}
