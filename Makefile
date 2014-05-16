# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/27 19:17:42 by mschmit           #+#    #+#              #
#    Updated: 2014/05/13 17:31:48 by mschmit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

SRC =		srcs/

INCDIR =	includes/

SOURCE =	$(SRC)list.c \
		$(SRC)main.c \
		$(SRC)swap.c \
		$(SRC)take.c \
		$(SRC)sort.c \
		$(SRC)rotate_start.c \
		$(SRC)rotate_end.c

OBJ =		$(SOURCE:.c=.o)

LIBDIR =	libft/

LIB =		$(LIBDIR)libft.a

LIB_COMP =	-L ./$(LIBDIR) -lft

CC =		gcc

FLAG =		-I $(INCDIR) -Wall -Wextra -Werror -g

RED = \033[33;31m
BLUE = \033[33;34m
GREEN = \033[33;32m
RESET = \033[0m

.PHONY: all re fclean

all: $(NAME)

$(LIB):
		@$(MAKE) -C $(LIBDIR)

$(NAME): $(LIB) $(OBJ)
		@$(CC) -o $(NAME) $(FLAG) $^ $(LIB)
		@rm -f $(DEP).gch
		@echo "[$(GREEN)Compilation $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

%.o: %.c
		@$(CC) -c -o $@ $(FLAG) $^

clean:
	@cd $(LIBDIR) && $(MAKE) $@
	@rm -f $(OBJ)
	@echo "[$(RED)Supression des .o de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

fclean: clean
		@cd $(LIBDIR) && $(MAKE) $@
		@rm -f $(NAME)
		@echo "[$(RED)Supression de $(BLUE)$(NAME) $(GREEN)ok$(RESET)]"

re: fclean all
