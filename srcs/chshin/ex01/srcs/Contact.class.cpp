/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:35:56 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:35:59 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void		Contact::smallPrint(void)
{
	std::string	str[3] = {this->firstName, this->lastName, this->nickname};
	int		i;
	int		j;
	int		k;

	k = 0;
	while (k < 3)
	{
		std::cout << "|";
		i = -1;
		while (++i < (int) (10 - str[k].length()))
			std::cout << " ";
		j = 0;
		while (i++ < 9)
			std::cout << str[k].at(j++);
		if (str[k].length() > 10)
			std::cout << ".";
		else
			std::cout << str[k].at(j);
		k++;
	}
	std::cout << "|" << std::endl;
	return ;
}

void		Contact::print(void)
{
	std::cout << "first name: " << this->firstName << std::endl;
	std::cout << "last name: " << this->lastName << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "login: " << this->login << std::endl;
	std::cout << "postal address: " << this->postalAddress << std::endl;
	std::cout << "phone number: " << this->phoneNumber << std::endl;
	std::cout << "birthday date: " << this->birthdayDate << std::endl;
	std::cout << "favorite meal: " << this->favoriteMeal << std::endl;
	std::cout << "underwear color: " << this->underwearColor << std::endl;
	std::cout << "darkest secret: " << this->darkestSecret << std::endl;
}

void		Contact::setFirstName(std::string str)
{
	this->firstName = str;
	return ;	
}

void		Contact::setLastName(std::string str)
{
	this->lastName = str;
	return ;	
}

void		Contact::setNickname(std::string str)
{
	this->nickname = str;
	return ;	
}

void		Contact::setLogin(std::string str)
{
	this->login = str;
	return ;	
}

void		Contact::setPostalAddress(std::string str)
{
	this->postalAddress = str;
	return ;	
}

void		Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
	return ;	
}

void		Contact::setBirthdayDate(std::string str)
{
	this->birthdayDate = str;
	return ;	
}

void		Contact::setFavoriteMeal(std::string str)
{
	this->favoriteMeal = str;
	return ;	
}

void		Contact::setUnderwearColor(std::string str)
{
	this->underwearColor = str;
	return ;	
}

void		Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
	return ;	
}

std::string		Contact::getFirstName()
{
	return	(this->firstName);
}

std::string		Contact::getLastName()
{
	return	(this->lastName);
}

std::string		Contact::getNickname()
{
	return	(this->nickname);
}
	
std::string		Contact::getLogin()
{
	return	(this->login);
}

std::string		Contact::getPostalAddress()
{
	return	(this->postalAddress);
}

std::string		Contact::getPhoneNumber()
{
	return	(this->phoneNumber);
}

std::string		Contact::getBirthdayDate()
{
	return	(this->birthdayDate);
}

std::string		Contact::getFavoriteMeal()
{
	return	(this->favoriteMeal);
}

std::string		Contact::getUnderwearColor()
{
	return	(this->underwearColor);
}

std::string		Contact::getDarkestSecret()
{
	return	(this->darkestSecret);
}
