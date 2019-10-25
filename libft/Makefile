NAME = testprogram

SRC = main.c ft_memccpy.c ft_memmove.c ft_memchr.c

OBJECTS = ft_memccpy.o ft_memmove.o ft_memchr.o

INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -I $(INCLUDES)

clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
