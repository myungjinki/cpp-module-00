/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:52:39 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/22 14:09:57 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    showPrompt(void)
{
    std::cout<<"=============================================="<<std::endl;
    std::cout<<"Phonebook || input ADD, SEARCH or EXIT: ";
}

int     main(void)
{
    int         ret;
    std::string cmd;
    Phonebook   phonebook;
    showPrompt();
    while (std::getline(std::cin, cmd))
    {
        std::cout<<"----------------------------------------------"<<std::endl;
        if (cmd == "ADD")
            phonebook.addContact();
        else if (cmd == "SEARCH")
        {
            if ((ret = phonebook.searchContact()) == -1)
                return (-1);
        }
        else if (cmd == "EXIT")
        {
            std::cout<<"deleting phonebook..."<<std::endl;
            return (0);
        }
        else
            std::cout<<"Error: Wrong Command."<<std::endl<<std::endl;    
        showPrompt();
    }
    return (-1);
}