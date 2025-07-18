NAME	= ex03
CC		= c++
FLAGS	= -Werror -Wextra -Wall -std=c++98
RM		= rm -rf

SRC		= main.cpp \
		  AMateria.cpp \
		  Ice.cpp \
		  Cure.cpp \
		  Character.cpp \
		  MateriaSource.cpp
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
