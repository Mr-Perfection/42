# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slee <slee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/13 11:34:39 by slee              #+#    #+#              #
#    Updated: 2017/06/16 06:50:57 by slee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
INC_DIR = includes/
SRC_DIR = srcs/
OBJ_DIR = .objects/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
TARGET = $(NAME).a
ENV = $(shell uname -s)

SRC =               \
ft_absint.c			\
ft_atoi.c           \
ft_bubble_sort.c	\
ft_bzero.c			\
ft_isalnum.c        \
ft_isalpha.c        \
ft_isascii.c        \
ft_isblank.c        \
ft_isdigit.c        \
ft_isprint.c        \
ft_itoa.c			\
ft_lstiter.c		\
ft_lstmap.c			\
ft_lstadd_end.c		\
ft_lstdel.c			\
ft_lstdelone.c		\
ft_lstadd.c			\
ft_lstnew.c			\
ft_lstsplit.c		\
ft_lz_strsplit.c		\
ft_memalloc.c		\
ft_memccpy.c		\
ft_memchr.c			\
ft_memcmp.c			\
ft_memcpy.c			\
ft_memdel.c			\
ft_memmove.c		\
ft_memset.c			\
ft_nbrlen.c			\
ft_nstrlen.c		\
ft_putchar.c        \
ft_putchar_fd.c		\
ft_putendl.c		\
ft_putnbr.c         \
ft_putnbr_fd.c		\
ft_putstr.c         \
ft_putstr_fd.c		\
ft_remove_useless.c	\
ft_str2dup.c        \
ft_str2defrag.c     \
ft_str2del.c        \
ft_str2len.c        \
ft_strcasestr.c		\
ft_strcat.c			\
ft_strchr.c			\
ft_strclr.c			\
ft_strcmp.c			\
ft_strcpy.c			\
ft_strdel.c			\
ft_strnew.c			\
ft_strdup.c			\
ft_strequ.c			\
ft_striter.c		\
ft_striteri.c		\
ft_strjoin.c		\
ft_strlcat.c		\
ft_putendl_fd.c		\
ft_strlen.c         \
ft_strmap.c			\
ft_strmapi.c		\
ft_strncat.c		\
ft_strncmp.c		\
ft_strncpy.c		\
ft_strndup.c		\
ft_strnequ.c		\
ft_strnstr.c		\
ft_strrchr.c		\
ft_strsplit.c		\
ft_strstr.c			\
ft_strsub.c			\
ft_strtrim.c		\
ft_tolower.c        \
ft_toupper.c


.PHONY: all clean fclean re

default: all

all: $(NAME)
	@echo "Job done  $(shell pwd)"

$(NAME): $(OBJ_DIR) $(TARGET)

$(TARGET): $(OBJS)
	@ar -rcv $(TARGET) $(OBJS) > /dev/null
	@ranlib $(TARGET)

clean:
	@echo " $(shell\
				if [ -d $(OBJ_DIR) ];\
				then\
					rm -Rf $(OBJ_DIR);\
				else\
					echo "Nothing to clean";\
				fi)"


fclean: clean
	@echo " $(shell\
    				if [ -f $(TARGET) ];\
    				then\
    					rm -f $(TARGET);\
    				else\
    					echo "Nothing to fclean";\
    				fi)"


re: fclean all 

$(addprefix $(OBJ_DIR), %.o): $(addprefix $(SRC_DIR), %.c)
	@$(CC) -I $(INC_DIR) $(CFLAGS) -o $@ -c $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	$(cp $(SRC_DIR)/$(ENV)/* $(SRC_DIR) ;)
