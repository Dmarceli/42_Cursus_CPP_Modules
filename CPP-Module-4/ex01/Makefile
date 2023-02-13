NAME = Brain

PATH_SRC = ./src

SRC = $(PATH_SRC)/main.cpp \
		$(PATH_SRC)/Animal.cpp \
		$(PATH_SRC)/Dog.cpp \
		$(PATH_SRC)/Cat.cpp \
		$(PATH_SRC)/Brain.cpp 

INCLUDES	=	./incs

OBJ = $(SRC:%.cpp = %.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -I$(INCLUDES) -o $(NAME) $(OBJ) 
	@printf "\033[44m[$(NAME) built!]\033[0m\n"

clean:
	@rm -rf *.opp
	@printf "\033[38;5;1m[Cleaned objects!]\033[0m\n"

fclean: clean
	@rm -rf $(NAME)
	@printf "\033[38;5;1m[Cleaned Bin!]\033[0m\n"

re: fclean all
