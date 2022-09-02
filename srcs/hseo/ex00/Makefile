NAME = megaphone
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : fclean clean re all
