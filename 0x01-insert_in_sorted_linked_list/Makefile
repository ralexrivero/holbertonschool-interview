CC = gcc
SRC = 0-main.c linked_lists.c 0-insert_number.c
OBJ = $(SRC:.c=.o)
NAME = insert
CFLAGS = -Wall -Werror -Wextra -pedantic
.PHONY: all clean oclean fclean re
all: lists.h $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
clean:
	$(RM) *~ $(NAME)
oclean:
	$(RM) $(OBJ)
fclean: clean oclean
re: fclean all