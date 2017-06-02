NAME = ex02

SRC = Array.cpp main.cpp

OFILES = Array.o main.o

FLAGS = -Wall -Wextra -Werror

all:
	@clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run: re
	./$(NAME)
