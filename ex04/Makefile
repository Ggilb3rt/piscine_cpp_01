#Coucou

NAME = replacer
FLAGS = -Wall -Wextra -Werror 
STD = -std=c++98
COMPIL = c++
SRC = main.cpp
TESTFILES = files/
OBJ = $(SRC:.cpp=.o)

.PHONY : all re fclean clean test

%.o: %.cpp
	$(COMPIL) $(FLAGS) $(STD) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPIL) $(FLAGS) $(STD) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf $(TESTFILES)*.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

test : all
	./test.sh