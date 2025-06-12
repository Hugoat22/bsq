##
## EPITECH PROJECT, 2025
## My_bsq
## File description:
## Makefile lib
##

SRC =	main.c					\
		src/bsq.c				\
		src/find_square.c 		\
		src/find_big_square.c	\
		src/check_map.c

HEADER = my.h

NAME = My_bsq

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I include

LIB = lib/my/libmy.a

all: $(LIB) $(NAME)

$(LIB):
	$(MAKE) -C lib/my

$(NAME): $(OBJ)
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L lib/my -lmy

clean:
	$(MAKE) -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C lib/my fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re