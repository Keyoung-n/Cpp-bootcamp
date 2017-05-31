NAME = ex00

SRC = whatever.cpp

OFILES = whatever.o

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
