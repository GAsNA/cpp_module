####### MAKEFILE #######

### Variables

SRCS			=	main.cpp	\
					Harl.cpp

OBJS			=	${SRCS:.cpp=.o}

NAME			=	harl

CC				=	clang++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

### Commandes

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.cpp.o:
				${CC} -c ${CFLAGS} $^ -o $@

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean
