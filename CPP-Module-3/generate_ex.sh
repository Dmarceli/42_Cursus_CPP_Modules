#!/bin/bash

RED='\033[0;31m'
PURPLE='\033[0;35m'
RESET='\033[0m'
GREEN='\033[0;32m'
printf "${PURPLE}Enter the number of the exercise:${RESET}"
read dir_name
mkdir ex$dir_name
cd ex$dir_name
mkdir incs
mkdir src && cd src && touch main.cpp && cd ..
printf "${PURPLE}Enter the name of the executable:${RESET}" 
read executable_name

echo "NAME = $executable_name

PATH_SRC = ./src

SRC = \$(PATH_SRC)/main.cpp 

INCLUDES	=	./incs

OBJ = \$(SRC:%.cpp = %.o)

CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98 -fsanitize=address 

all: \$(NAME)

\$(NAME): \$(OBJ)
	@\$(CC) \$(FLAGS) -I\$(INCLUDES) -o \$(NAME) \$(OBJ) 
	@printf \"\\033[44m[\$(NAME) built!]\\033[0m\\n\"

clean:
	@rm -rf *.opp
	@printf \"\\033[38;5;1m[Cleaned objects!]\\033[0m\\n\"

fclean: clean
	@rm -rf \$(NAME)
	@printf \"\\033[38;5;1m[Cleaned Bin!]\\033[0m\\n\"

re: fclean all" > Makefile

printf "${GREEN}Directory ex$dir_name and its subdirectories have been created\n${RESET}"