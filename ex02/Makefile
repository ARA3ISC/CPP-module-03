NAME= fragtrap
CXX= c++
RM= rm -rf
CXXFLAGS= -Werror -Wextra -Wall -std=c++98
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
