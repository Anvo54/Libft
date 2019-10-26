# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avornane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 15:27:04 by avornane          #+#    #+#              #
#    Updated: 2019/10/25 13:59:24 by avornane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC =	ft_memset.c ft_strcat.c ft_strcpy.c ft_strdup.c ft_strlen.c \
		ft_strncpy.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strncat.c

OBJECTS = ${SRC:.c=.o}

HEADERS = ./

all: $(NAME)

$(NAME) :
	gcc -I $(HEADERS) -c $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
