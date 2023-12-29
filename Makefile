NAME = libftprintf.a

SRC = ft_printf.c

SUB_DIR = libft

SUB_OBJS = libft/libft.a

OBJS = ${SRC:.c=.o}

CC = cc

RM = rm -f

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

all :	${SUB_DIR} ${NAME}

${NAME}: ${OBJS}
	cp ${SUB_OBJS} ./${NAME}
	${AR} ${NAME} ${OBJS}

$(OBJS):
	$(CC) -c $(CFLAGS) ${SRC}

${SUB_DIR}:
	cd ${SUB_DIR} && ${MAKE}

clean:
	${RM} ${OBJS}
	cd ${SUB_DIR} && ${MAKE} clean

fclean:	clean
	${RM} ${NAME}
	cd ${SUB_DIR} && ${MAKE} fclean

re: fclean all

.PHONY: all clean fclean re ${SUB_DIR}