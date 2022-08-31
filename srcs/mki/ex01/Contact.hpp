/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:25:30 by mki               #+#    #+#             */
/*   Updated: 2021/07/04 17:44:28 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int			cnt_;
	std::string	command_;
	std::string	first_name_[8];
	std::string	last_name_[8];
	std::string	nickname_[8];
	std::string	login_[8];
	std::string	postal_address_[8];
	std::string	email_address_[8];
	std::string	phone_number_[8];
	std::string	birthday_date_[8];
	std::string	favorite_meal_[8];
	std::string	underwear_color_[8];
	std::string	darkest_secret_[8];
public:
	Contact();
	void		Prompt();
	void		SetCommand();
	std::string	GetCommand();
	void		ErrorMessage();
	void		Exit();
	void		Add();
	int			AddHelper(std::string str, std::string &var);
	void		SearchPhonebook(int i);
	void		Search();
	void		ShowStatus();
};

#endif
