NAME = btc

SRC = BitcoinExchange.cpp main.cpp 

OBJ = $(SRC:.cpp=.o)

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all