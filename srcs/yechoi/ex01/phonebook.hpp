/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:23:02 by yechoi            #+#    #+#             */
/*   Updated: 2020/10/22 14:19:50 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "info.hpp"

class Phonebook
{
    private:
        int     num;
        Info    contact[8];
    public:
        Phonebook(void);
        void    addContact(void);
        int		searchContact(void);
};

#endif