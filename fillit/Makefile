# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee <slee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 20:28:35 by slee              #+#    #+#              #
#    Updated: 2016/11/16 16:49:26 by ddowty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAG = -Wall -Werror -Wextra #-fsanitize=address -ggdb
LFLAGS = -L ./libft/ -lft

SRC =	read.c \
		solver.c \
		main.c \

OBJ = $(SRC:.c=.o)
SRCDIR = src/
INCLUDE = include

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	@ gcc -c $(FLAG) $(addprefix $(SRCDIR),$(SRC)) -I $(INCLUDE)
	@ gcc -o $(NAME) $(OBJ) $(LFLAGS)
	@ echo ~~ready~~

clean:
	@ /bin/rm -f $(OBJ)

fclean: clean
	@ /bin/rm -f $(NAME)
re: fclean all