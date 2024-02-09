NAME = Animals
CFLAG = -Wall -Werror -Wextra -g -std=c++98 ##-fsanitize=address
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)
HEADER = Animal.hpp Cat.hpp Dog.hpp  WrongAnimal.hpp WrongCat.hpp Brain.hpp

%.o: %.cpp
	$(CC) -I. $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HEADER) Makefile
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

git: fclean
	git add *
	git commit -m "auto commit"
	git push

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean