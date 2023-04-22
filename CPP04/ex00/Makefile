NAME = Animals

SRCS = 	./sources/Animal.cpp \
		./sources/Cat.cpp \
		./sources/Dog.cpp \
		./sources/WrongAnimal.cpp \
		./sources/WrongCat.cpp \
		./sources/Animal_main.cpp \


OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/Animal.h \
		./includes/Cat.h \
		./includes/Dog.h \
		./includes/WrongAnimal.h \
		./includes/WrongCat.h \


all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean