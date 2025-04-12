NAME := fixed
CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRC := main.cpp Fixed.cpp
OBJ := ${SRC:.cpp=.o}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

${NAME}: ${OBJ}
	${CC} ${CFLAGS} $< -o ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: all clean fclean re