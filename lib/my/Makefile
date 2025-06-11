##
## EPITECH PROJECT, 2025
## My_bsq
## File description:
## Makefile lib
##

SRC = 	file_size.c				\
		open_file.c				\
		my_str_to_word_array.c	\
		my_strdup.c 			\
		my_strlen.c		


HEADER = my.h

NAME = libmy.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(HEADER) ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../../include/$(HEADER)

re: fclean all

.PHONY: all clean fclean re