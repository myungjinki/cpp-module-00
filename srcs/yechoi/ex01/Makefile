# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 20:12:23 by yechoi            #+#    #+#              #
#    Updated: 2020/10/18 16:54:02 by yechoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS	= phonebook.cpp info.cpp main.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++

HEADER	= -I .

FLAG	= -Wall -Wextra -Werror

$(NAME)	:
	clang++ $(FLAG) $(SRCS) -o $(NAME) $(HEADER) 

all		: $(NAME)

clean	: 
	rm -rf $(OBJS)


fclean	: clean
	rm -rf $(NAME)

re		: fclean all