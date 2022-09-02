# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 14:55:08 by yechoi            #+#    #+#              #
#    Updated: 2020/10/15 15:10:48 by yechoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= megaphone.o

CC		= clang++

FLAG	= -Wall -Wextra -Werror

$(NAME)	:
	clang++ $(FLAG) $(SRCS) -o $(NAME) 

clean	: 
	rm -rf $(OBJS)


fclean	: clean
	rm -rf $(NAME)

re		: fclean all