SRC			= main.c ft_create_matrix.c ft_putchar.c ft_rev_str.c ft_strlen.c

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRE			= ./src/

HEAD		= ./includes/

DICT		= ./dicts/

NAME		= rush-02

RM			= rm -f

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

