/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:03 by mki               #+#    #+#             */
/*   Updated: 2021/07/01 19:33:24 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	cnt_ = -1;
}

std::string	Contact::GetCommand()
{
	return (command_);
}

void	Contact::Prompt()
{
	std::cout << "Put command [ADD, SEARCH, EXIT]: ";
}

void	Contact::SetCommand()
{
	getline(std::cin, command_);
	for (int i = 0; i < (int)command_.length(); i++)
	{
		command_[i] = toupper(command_[i]);
	}
}

void	Contact::Exit()
{
	std::cout << "BYE" << std::endl;
	::exit(0);
}

int	Contact::AddHelper(std::string str, std::string &var)
{
	std::cout << str;
	getline(std::cin, var);
	if (std::cin.eof())
	{
		return (1);
	}
	return (0);
}

void	Contact::Add()
{
	if (cnt_ > 8)
	{
		std::cout << "FULL" << std::endl;
	}
	else
	{
		cnt_++;
		if (AddHelper("first_name: ", first_name_[cnt_]))
		{
			return ;
		}
		if (AddHelper("last_name: ", last_name_[cnt_]))
		{
			return ;
		}
		if (AddHelper("nickname: ", nickname_[cnt_]))
		{
			return ;
		}
		if (AddHelper("login: ", login_[cnt_]))
		{
			return ;
		}
		if (AddHelper("postal_address: ", postal_address_[cnt_]))
		{
			return ;
		}
		if (AddHelper("email_address: ", email_address_[cnt_]))
		{
			return ;
		}
		if (AddHelper("phone_number: ", phone_number_[cnt_]))
		{
			return ;
		}
		if (AddHelper("birthday_date: ", birthday_date_[cnt_]))
		{
			return ;
		}
		if (AddHelper("favorite_meal: ", favorite_meal_[cnt_]))
		{
			return ;
		}
		if (AddHelper("underwear_color: ", underwear_color_[cnt_]))
		{
			return ;
		}
		if (AddHelper("darkest_secret: ", darkest_secret_[cnt_]))
		{
			return ;
		}
	}
}

int		FtStoi(std::string str)
{
	if (str == "0")
		return (0);
	else if (str == "1")
		return (1);
	else if (str == "2")
		return (2);
	else if (str == "3")
		return (3);
	else if (str == "4")
		return (4);
	else if (str == "5")
		return (5);
	else if (str == "6")
		return (6);
	else if (str == "7")
		return (7);
	else if (str == "8")
		return (8);
	else if (str == "9")
		return (9);
	else
		return (10);
}

void	Contact::ShowStatus()
{
	int	i;
	std::string	tmp;
	
	std::cout << "PUT INDEX: ";
	getline(std::cin, tmp);
	i = FtStoi(tmp);
	if (i <= cnt_)
	{
		std::cout << "first_name: " << first_name_[i] << std::endl;
		std::cout << "last_name: " << last_name_[i] << std::endl;
		std::cout << "nickname " << nickname_[i] << std::endl;
		std::cout << "login: " << login_[i] << std::endl;
		std::cout << "postal_address: " << postal_address_[i] << std::endl;
		std::cout << "email_address: " << email_address_[i] << std::endl;
		std::cout << "phone_number: " << phone_number_[i] << std::endl;
		std::cout << "birthday_date: " << birthday_date_[i] << std::endl;
		std::cout << "favorite_meal: " << favorite_meal_[i] << std::endl;
		std::cout << "underwear_color: " << underwear_color_[i] << std::endl;
		std::cout << "darkest_secret: " << darkest_secret_[i] << std::endl;
	}
	else
	{
		std::cout << "Wrong input" << std::endl;
	}
}

void	CutString(char *str)
{
	int	length = strlen(str);

	if (length > 10)
	{
		str[9] = '.';
		str[10] = 0;
	}
}

void	ChangeWhiteSpace(char *str)
{
	int	i = -1;

	while (str[++i])
	{
		if (9 <= str[i] && str[i] <= 13)
		{
			str[i] = ' ';
		}
	}
}

void	Contact::SearchPhonebook(int i)
{
	char	tmp[12];
	
	std::cout << "|" << std::setw(10) << std::right << i << "|";
	memset(tmp, 0, 11);
	first_name_[i].copy(tmp, 11, 0);
	ChangeWhiteSpace(tmp);
	CutString(tmp);
	std::cout << std::setw(10) << std::right << tmp << "|";
	memset(tmp, 0, 11);
	last_name_[i].copy(tmp, 11, 0);
	ChangeWhiteSpace(tmp);
	CutString(tmp);
	std::cout << std::setw(10) << std::right << tmp << "|";
	memset(tmp, 0, 11);
	nickname_[i].copy(tmp, 11, 0);
	ChangeWhiteSpace(tmp);
	CutString(tmp);
	std::cout << std::setw(10) << std::right << tmp << "|" << std::endl;
}

void	Contact::Search()
{
	if (cnt_ == -1)
	{
		std::cout << "NO CONTACT" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i <= cnt_; i++)
	{
		SearchPhonebook(i);
	}
	std::cout << "---------------------------------------------" << std::endl;
	ShowStatus();
}

void	Contact::ErrorMessage()
{
	std::cout << "WRONG COMMAND" << std::endl;
}
