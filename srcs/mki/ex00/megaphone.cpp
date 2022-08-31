/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 23:10:40 by mki               #+#    #+#             */
/*   Updated: 2021/07/04 17:35:20 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Megaphone
{
private:
	int			m_argc;
	std::string	m_str;
public:
	Megaphone();
	Megaphone(int argc);
	Megaphone(const Megaphone &M);
	Megaphone &operator=(Megaphone &M);
	~Megaphone();
	void	ToUpper();
	void	ArgvJoin(char **argv);
	void	FeedbackNoise();
	void	Print();
};

Megaphone::Megaphone()
{
	m_argc = 1;
	m_str = "";
}

Megaphone::Megaphone(int argc)
{
	m_argc = argc;
	m_str = "";
}

Megaphone::Megaphone(const Megaphone &M)
{
	m_argc = M.m_argc;
	m_str = M.m_str;
}

Megaphone &Megaphone::operator=(Megaphone &M)
{
	m_argc = M.m_argc;
	m_str = M.m_str;
	return (*this);
}

Megaphone::~Megaphone()
{
}

void	Megaphone::ToUpper()
{
	for (int i = 0; i < (int)m_str.length(); i++)
	{
		m_str[i] = toupper(m_str[i]);
	}
}

void	Megaphone::ArgvJoin(char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		m_str += argv[i];
	}
}

void	Megaphone::FeedbackNoise()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

void	Megaphone::Print()
{
	try
	{
		if (m_argc == 1)
		{
			throw m_argc;
		}
		std::cout << m_str << std::endl;
	}
	catch (int e)
	{
		FeedbackNoise();	
	}
}

int	main(int argc, char *argv[])
{
	Megaphone	M(argc);
	
	M.ArgvJoin(argv);
	M.ToUpper();
	M.Print();
	return (0);
}
