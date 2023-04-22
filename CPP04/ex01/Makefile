NAME = AnimalsWithBrains

SRCS = 	./sources/Animal.cpp \
		./sources/Brain.cpp \
		./sources/Cat.cpp \
		./sources/Dog.cpp \
		./sources/main.cpp \
		./sources/WrongAnimal.cpp \
		./sources/WrongCat.cpp \


OBJS = $(SRCS:cpp=o)

CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = ./includes/Animal.cpp \
		./includes/Brain.cpp \
		./includes/Cat.cpp \
		./includes/Dog.cpp \
		./includes/main.cpp \
		./includes/WrongAnimal.cpp \
		./includes/WrongCat.cpp \


all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean