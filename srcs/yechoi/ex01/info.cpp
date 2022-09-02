/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:49:29 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/18 17:37:18 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Info::inputInfo(void)
{
	int 		i;
	std::string category[11] = {"First Name", "Last Name", "Nickname",
		"Login", "Postal Address", "Email Address",
		"Phone Number", "Birthday Rate", "Favorite Meal",
		"Underwear Color", "Darkest Secret"};

	i = 0;
	while (i < 11)
	{
		std::cout<<category[i]<<": ";
		std::getline(std::cin, content[i++]);
	}
	std::cout<<std::endl;
}

void	Info::showBriefInfo(void)
{
	int			i;
	std::string	temp[3];

	i = 0;
	while (i < 2)
	{
		temp[i] = content[i].substr(0, 10);
		if (temp[i].length() >= 10)
			temp[i] = temp[i].replace(9, 1, ".");
		else
			temp[i].append(10 - temp[i].length(), ' ');	
		std::cout<<temp[i]<<"|";
		i++;
	}
	if (i == 2)
	{
		temp[i] = content[i].substr(0, 10);
		if (temp[i].length() >= 10)
			temp[i] = temp[i].replace(9, 1, ".");
		std::cout<<temp[i]<<std::endl;
	}
}

void	Info::showFullInfo(void)
{
	int 		i;
	std::string category[11] = {"First Name", "Last Name", "Nickname",
		"Login", "Postal Address", "Email Address",
		"Phone Number", "Birthday Rate", "Favorite Meal",
		"Underwear Color", "Darkest Secret"};

	std::cout<<"----------------------------------------------"<<std::endl;
	i = 0;
	while (i < 11)
	{
		std::cout<<category[i]<<": "<<content[i]<<std::endl;
		i++;
	}
	std::cout<<std::endl;
	std::cin.ignore();
}
