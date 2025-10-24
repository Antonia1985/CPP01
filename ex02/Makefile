NAME = zombie
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

#take all files in SRC and replace .cpp with .o
OBJ = $(SRC:.cpp=.o)

#The default target. If you just run make, it will build whatever is in $(NAME) (so, zombie)
all: $(NAME) 

#at the linking step, we need all object files together: $(OBJ)
#How to build the program (zombie) from the object files (SRC = main.o):
#$(NAME) = zombie (the executable)
#$(OBJ) = main.o etc
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

#tells make how to handle any .cpp → .o transformation automatically.
#how to build one .o from one .cpp, not all of them at once.
#To build sth.o, look for sth.cpp.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
