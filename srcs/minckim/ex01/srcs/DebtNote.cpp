/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebtNote.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minckim <minckim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:24:08 by minckim           #+#    #+#             */
/*   Updated: 2020/12/08 22:22:27 by minckim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DebtNote.hpp"

int				DebtNote::stack = 0;
int				DebtNote::n_data = 0;

DebtNote::DebtNote()
{
	key_str[first_name] = "First name";
	key_str[last_name] = "Last name";
	key_str[nickname] = "Nickname";
	key_str[postal_address] = "Postal address";
	key_str[e_mail] = "E-mail";
	key_str[phone] = "Phone number";
	key_str[birth] = "Birth date";
	key_str[favorite_meal] = "Favorite meal";
	key_str[underwear_color] = "Underwear color";
	key_str[darkest_secret] = "Darkest secret";
}

std::string*	DebtNote::pick_data(int idx)
{
	return (data + LEN_ROW * idx);
}

void			DebtNote::add(int idx)
{
	std::string	*current_data;

	current_data = pick_data(idx);
	for (int i = 0 ; i < LEN_ROW ; i++)
	{
		std::cout << key_str[i] << ": ";
		std::getline(std::cin, current_data[i]);
	}
}

void			DebtNote::print_data_in_a_line(int idx)
{
	std::string		current_data[4];

	current_data[0] = std::to_string(idx + 1);
	current_data[1] = pick_data(idx)[first_name];
	current_data[2] = pick_data(idx)[last_name];
	current_data[3] = pick_data(idx)[nickname];
	std::cout << '|';
	for (int i = 0 ; i < 4 ; i++)
	{
		if (current_data[i].length() > 9)
		{
			current_data[i].resize(9);
			current_data[i].push_back('.');
		}
		std::cout << std::setw(10) << current_data[i] << '|';
	}
	std::cout << std::endl;
}

void			DebtNote::print_data(int idx)
{
	std::string		*current_data = pick_data(idx);

	for (int i = 0 ; i < LEN_ROW ; i++)
		std::cout << std::setw(15) << key_str[i] << ": " << current_data[i] << "\n";
}

void			DebtNote::run()
{
	std::string		command;
	int				idx;

	while (42)
	{
		std::cout << "Command >> ";
		std::getline(std::cin, command);
		if (command == "EXIT" || command.length() == 0)
		{
			std::cout << "Bye Bye!" << std::endl;
			return ;
		}
		else if (command == "ADD")
		{
			add(stack++);
			stack = stack == LEN_COL ? 0 : stack;
			n_data += n_data == LEN_COL ? 0 : 1;
		}
		else if (command == "SEARCH")
		{
			std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
			std::cout << "|----------|----------|----------|----------|\n";
			for (int i = 0 ; i < n_data ; i++)
			{
				print_data_in_a_line(i);
			}
			std::cout << "|----------|----------|----------|----------|\n";
			if (n_data == 0)
				continue ;
			std::cout << "Index(" << 1 << " ~ " << n_data << ") >> ";
			std::getline(std::cin, command);
			std::stringstream(command) >> idx;
			if (idx <= 0 || n_data < idx)
				std::cout << "Invalid input:" << command << std::endl;
			else
				print_data(idx - 1);
		}
		else
		{
			std::cout << "Invalid input\n";
			std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		}
	}
}