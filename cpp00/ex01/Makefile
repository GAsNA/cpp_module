####### MAKEFILE #######

### Variables

HEADERS			=	Phonebook.hpp	\
					Contact.hpp

SRCS			=	main.cpp		\
					phonebook.cpp	\
					contact.cpp

OBJS			=	${SRCS:.cpp=.o}

NAME			=	phonebook

CC				=	clang++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

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
