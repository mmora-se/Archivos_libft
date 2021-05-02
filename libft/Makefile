# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmora-se <mmora-se@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/08 11:40:37 by mmora-se          #+#    #+#              #
#    Updated: 2021/05/02 13:55:03 by mmora-se         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a

# -I se utiliza para indicar al compilador dónde estarán los .h que no logre encontrar
CFLAGS 	= -Wall -Wextra -Werror -I.

# Ficheros a compilar
SRCS 	=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c 	\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c 	\
			ft_strchr.c 	\
			ft_strrchr.c 	\
			ft_strnstr.c 	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c 	\
			ft_substr.c 	\
			ft_strjoin.c 	\
			ft_strtrim.c 	\
			ft_split.c 		\
			ft_itoa.c		\
			ft_strmapi.c 	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c \
			ft_putnbr_fd.c 	\
			ft_pow.c				  

# Ficheros a compilar Bonus
SRCS_B 	= ft_lstnew.c	
		  
OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

all: $(NAME)

# compilamos a código objeto cada .c
$(OBJS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)
	
$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_B)
	ar rcs $(NAME) $(OBJS) $(OBJS_B)

$(OBJS_B): $(SRCS_B)
	gcc $(CFLAGS) -c $(SRCS_B)
	
clean:
	rm -f $(OBJS) $(OBJS_B)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

test:	re
	gcc $(CFLAGS) -g3 main.c $(NAME)
	./a.out

.PHONY:	all bonus clean fclean re
