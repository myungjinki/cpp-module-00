/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:57:38 by mki               #+#    #+#             */
/*   Updated: 2021/07/01 19:34:30 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	main()
{
	Contact	contact;

	while(!std::cin.eof())
	{
		contact.Prompt();
		contact.SetCommand();
		if (std::cin.eof())
		{
			return (0);
		}
		if (contact.GetCommand() == "EXIT")
		{
			contact.Exit();
		}
		else if (contact.GetCommand() == "ADD")
		{
			contact.Add();
		}
		else if (contact.GetCommand() == "SEARCH")
		{
			contact.Search();
		}
		else
		{
			contact.ErrorMessage();
		}
	}	
	return (0);
}
