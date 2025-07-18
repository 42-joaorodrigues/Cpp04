NAME	= ex02
CC		= c++
FLAGS	= -Werror -Wextra -Wall -std=c++98
RM		= rm -rf

SRC		= main.cpp \
		  AAnimal.cpp \
		  Cat.cpp \
		  Dog.cpp \
		  Brain.cpp
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
