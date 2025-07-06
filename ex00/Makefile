NAME	= ex00
CC		= c++
FLAGS	= -Werror -Wextra -Wall -std=c++98
RM		= rm -rf

SRC		= main.cpp \
		  Animal.cpp \
		  Cat.cpp \
		  Dog.cpp \
		  WrongAnimal.cpp \
		  WrongCat.cpp
OBJ		= $(SRC:%.cpp=obj/%.o)

all: $(NAME)

obj/%.o : %.cpp
	mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	$(RM) obj

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
