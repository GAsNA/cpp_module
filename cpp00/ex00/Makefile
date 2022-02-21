####### MAKEFILE #######

### Variables

SRCS			=	megaphone.cpp

OBJS			=	${SRCS:.cpp=.o}

NAME			=	megaphone

CC				=	clang++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror

### Commandes

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o:
				${CC} -c ${CFLAGS} $^ -o $@

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean
