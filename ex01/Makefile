#Coucou

NAME = zombie
FLAGS = -Wall -Wextra -Werror 
STD = -std=c++98
COMPIL = c++
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp ZombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY : all re fclean clean

%.o: %.cpp
	$(COMPIL) $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPIL) $(FLAGS) $(STD) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test : all
	./$(NAME)