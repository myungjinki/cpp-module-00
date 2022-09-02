/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minckim <minckim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:22:01 by minckim           #+#    #+#             */
/*   Updated: 2020/12/09 00:01:45 by minckim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "DebtNote.hpp"

void	print_title()
{
	std::cout << "______  _____ ______  _____   _   _  _____  _____  _____ \n";
	std::cout << "|  _  \\|  ___|| ___ \\|_   _| | \\ | ||  _  ||_   _||  ___|\n";
	std::cout << "| | | || |__  | |_/ /  | |   |  \\| || | | |  | |  | |__  \n";
	std::cout << "| | | ||  __| | ___ \\  | |   | . ` || | | |  | |  |  __| \n";
	std::cout << "| |/ / | |___ | |_/ /  | |   | |\\  |\\ \\_/ /  | |  | |___ \n";
	std::cout << "|___/  \\____/ \\____/   \\_/   \\_| \\_/ \\___/   \\_/  \\____/\n";
	std::cout << "Welcome to Debt Note. (NOT \"death\")\n";
	std::cout << "There is no place to hide.\n";
	std::cout << "Pay back my money.\n" << std::endl;
}

int		main()
{
	DebtNote	note;

	print_title();
	note.run();
}