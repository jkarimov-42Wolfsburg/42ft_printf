# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkarimov <jkarimov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 17:17:47 by jkarimov          #+#    #+#              #
#    Updated: 2023/12/27 13:31:13 by jkarimov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation
NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

# SRC Files
SRCS = ft_atoi.c ft_tolower.c ft_toupper.c ft_memmove.c ft_strlen.c\
       ft_bzero.c ft_memset.c ft_memcmp.c ft_memcpy.c ft_strncmp.c\
       ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	   ft_strnstr.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_calloc.c\
	   ft_strrchr.c ft_substr.c ft_memmove.c ft_strjoin.c ft_strtrim.c\
	   ft_itoa.c ft_memchr.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strdup.c
	   
# OBJ Files
OBJS =	$(SRCS:.c=.o)

# Bonus src files
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstclear.c\
		ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstiter.c ft_lstmap.c
# OBJ Files
BONUS_OBJS = $(BONUS:.c=.o)

# Rules
all: 	$(NAME)

$(NAME):	$(OBJS)
	ar	rc	$(NAME)	$(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM)	$(OBJS) $(BONUS_OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus


