NAME = libftprintf.a

SRC = ft_printf.c ft_hexa.c ft_percent.c ft_print_pointer.c ft_print_unsigned.c \
		ft_putchar.c ft_putstr.c ft_putnbr.c
 
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
