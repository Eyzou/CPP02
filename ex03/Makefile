NAME = fixed

CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
	Point.cpp \
	Fixed.cpp

OBJ = $(SRCS:%.cpp=%.o)

RM = rm -f


all: ${NAME}

%.o: %.cpp
	$(CC) $(FLAGS) -O2 -c $< -o $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
