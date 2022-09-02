/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minckim <minckim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:29:01 by minckim           #+#    #+#             */
/*   Updated: 2020/12/04 12:11:55 by minckim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
I think that
calling print out function per a character is not usefull,
so I changed all characters before print
*/

void	ft_str_upper(char *str)
{
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str &= ~32;
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*++argv)
		{
			ft_str_upper(*argv);
			std::cout << *argv;
		}
		std::cout << std::endl;
	}
	return (0);
}