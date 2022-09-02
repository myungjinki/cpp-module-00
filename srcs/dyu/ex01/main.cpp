
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phone_book;
	std::string cmd;

	std::cout << "=============== !!start!! ===============\n";
	while (1)
	{
		std::cout << ":D Ready to follow your command [ADD / SEARCH / EXIT]: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phone_book.AddContact();
		else if (cmd == "SEARCH")
			phone_book.SearchContact();
		else if (cmd == "EXIT")
		{
			std::cout << "===============:D Thanks for evaluating my project 100/100 :D ================" << std::endl;
			return (0);
		}
	}
	return (0);
}
