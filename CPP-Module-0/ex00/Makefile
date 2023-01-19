NAME = megaphone

PATH_SRC = ./src

SRC = $(PATH_SRC)/megaphone.cpp

OBJ = $(SRC:%.cpp = %.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@printf "\033[44m[$(NAME) built!]\033[0m\n"

clean:
	@rm -rf *.opp

fclean: clean
	rm -rf $(NAME)

re: fclean all