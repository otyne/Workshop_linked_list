##
## EPITECH PROJECT, 2018
## Makefile tests
## File description:
## unit test makefile
##

SRC_LIB	=	../lib/my/my_strcmp.c

SRC_UT	=	test_my_strcmp.c

OBJ	=	$(SRC_LIB:.c=.o) $(SRC_UT:.c=.o)

CFLAGS	=	-I../include

LDFLAGS	=	-lcriterion --coverage

NAME	=	units-tests

all:	$(OBJ)
	@make -sC ../lib/my
	@cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	@rm -f $(OBJ)
	@rm -f $(SRC_LIB:.c=.gcno)
	@rm -f $(SRC_LIB:.c=.gcda)
	@rm -f $(SRC_UT:.c=.gcno)
	@rm -f $(SRC_UT:.c=.gcda)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
