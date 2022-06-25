####### MAKEFILE #######

### Variables

SRCS_PATH		=	./srcs/
OBJS_PATH		=	./objs/

FILES			=	main.cpp

SRCS			=	${addprefix ${SRCS_PATH}, ${FILES}}
OBJS			=	${addprefix ${OBJS_PATH}, ${FILES:.cpp=.o}}

NAME			=	brain

CC				=	clang++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -std=c++98


### Commandes

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS_PATH}%.o:	${SRCS_PATH}%.cpp
				mkdir -p ${dir $@}
				${CC} -c ${CFLAGS} $< -o $@

clean:
				${RM} ${OBJS_PATH}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
