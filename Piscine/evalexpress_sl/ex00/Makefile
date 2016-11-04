# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee <slee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 19:57:57 by slee              #+#    #+#              #
#    Updated: 2016/07/28 20:35:17 by slee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btree_insert_data
HELP = ft_helper.c main.c -I ft_helper.h
SRC = btree_insert_data.c
INC = -I *.h
WFLAG = -Wall -Werror -Wextra
all: $(NAME)
help:
	gcc -o help $(WFLAG) $(HELP)
$(NAME):
	gcc -c $(WFLAG) $(SRC) $(INC)
	# gcc -o $(NAME) btree_apply_infix.o main.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all