##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC_DIR	=	./src/

S_ONE	=	step1/

S_TWO	=	step2/

S_THREE	=	step3/

S_FOUR	=	step4/

SRC	=	$(SRC_DIR)main.c				\
		$(SRC_DIR)error.c				\
		$(SRC_DIR)my_manage_list.c			\
		$(SRC_DIR)$(S_ONE)first_step.c			\
		$(SRC_DIR)$(S_ONE)my_put_in_list_head.c		\
		$(SRC_DIR)$(S_ONE)my_put_in_list_queue.c	\
		$(SRC_DIR)$(S_TWO)second_step.c			\
		$(SRC_DIR)$(S_TWO)my_circular.c			\
		$(SRC_DIR)$(S_THREE)third_step.c		\
		$(SRC_DIR)$(S_THREE)my_put_in_doublelist_head.c	\
		$(SRC_DIR)$(S_THREE)my_put_in_doublelist_queue.c\
		$(SRC_DIR)$(S_FOUR)my_calendar.c		\
		$(SRC_DIR)$(S_FOUR)my_doublecircular.c		\


OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -Llib/my -lmy -Iinclude

NAME	=	my_calendar

all:	$(OBJ)
	@make -sC ./lib/my
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@make -sC ./lib/my clean
	@make -sC ./tests clean
	@rm -f $(OBJ)

fclean:	clean
	@make -sC ./lib/my fclean
	@make -sC ./tests fclean
	@rm -f $(NAME)

tests_run:
	@make -sC ./lib/my
	@make -sC ./tests
	./tests/units-tests

re:	fclean all
