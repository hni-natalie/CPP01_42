CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

NAME = harl_filter

SRC = main.cpp Harl.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) 
	
fclean:
	@$(RM) $(NAME) $(OBJ)

re: fclean all

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)