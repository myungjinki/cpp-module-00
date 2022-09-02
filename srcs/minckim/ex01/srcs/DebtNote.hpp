/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DebtNote.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minckim <minckim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:24:08 by minckim           #+#    #+#             */
/*   Updated: 2020/12/08 22:22:15 by minckim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBTNOTE_HPP
# define DEBTNOTE_HPP
# define LEN_ROW 10
# define LEN_COL 10
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

enum	e_idx
{
	first_name = 0,
	last_name,
	nickname,
	postal_address,
	e_mail,
	phone,
	birth,
	favorite_meal,
	underwear_color,
	darkest_secret
};

class DebtNote
{
	private:
		std::string	key_str[LEN_COL];
		std::string	data[LEN_ROW * LEN_COL];
		static int	stack;
		static int	n_data;
	public:
		DebtNote();
		std::string	*pick_data(int);
		void		add(int);
		void		print_data_in_a_line(int);
		void		print_data(int);
		void		run();
};
#endif