NAME = convert

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ScalarConverter.cpp main.cpp utils.cpp
OBJ = $(SRC:%.cpp=%.o)
DPN = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME):  $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

-include $(DPN)

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -f $(OBJ) $(DPN)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re
