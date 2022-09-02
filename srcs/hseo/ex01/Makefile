NAME = phonebook
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = phonebook.cpp \
		contact.cpp \
		main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -I .

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : fclean clean re all
