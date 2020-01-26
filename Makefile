##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

NAME	=	libmy.a

OBJS    =       $(SRC:.c=.o)

CC	=	gcc -c

AR      =       ar rc libmy.a

RM	=	rm -f

SRC	=	*.c


all: $(NAME)

$(NAME):
	$(CC) $(SRC)
	$(AR) *.o

clean:
	$(RM) $(OBJS)
	$(RM) *.o

fclean:		 clean
	$(RM) $(NAME) $(clean)

re: fclean all

.PHONY: all clean fclean re
