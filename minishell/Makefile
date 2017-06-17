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

NAME = libshell
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
INC_DIR = includes/
SRC_DIR = srcs/
OBJ_DIR = .objects/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))
TARGET = $(NAME).a
BIN = minishell
ENV = $(shell uname -s)

SRC =               \
input_format.c  \
misc_string.c	\
manage_path.c \
build_props.c \
cleaner.c \
misc_prompt.c \
builtin_env.c \
builtin_unsetenv.c \
manage_builtins.c\
manage_interpretor.c\
update_last_environ.c \
builtin_exit.c \
builtin_setenv.c \
builtin_getenv.c \
builtin_cd.c \
empty_extern_environ.c \
misc_parse_env.c \
parse_env.c \
env_errors.c \
display_env.c \
run_under_env.c \
manage_link.c \
merge_environ.c \
misc_interpretor.c \
misc_read.c \
reader.c \
reader_helper.c \
cd_goto.c \
syntax.c \
misc_cd.c \
manage_fork.c \
format_path.c \
cd_opt.c \
misc_prompt2.c \
cd_is_valid.c \
misc_cd2.c \
chdir_var.c \
cd_symbolic.c


MAIN = srcs/main.c


.PHONY: all clean fclean re

default: all

all: $(NAME)
	@echo "Job done  $(shell pwd)"

$(NAME): $(OBJ_DIR) $(TARGET)

$(TARGET): $(OBJS)
	@make -C libft/ -j -s
	@ar -rcv $(TARGET) $(OBJS) > /dev/null
	@ranlib $(TARGET)
	@$(CC) $(CFLAGS) srcs/main.c $(TARGET) libft/libft.a -I $(INC_DIR) -I libft/includes  -o $(BIN)

clean:
	@echo " $(shell\
				if [ -d $(OBJ_DIR) ];\
				then\
					echo "Removing $(OBJ_DIR)";\
					rm -Rf $(OBJ_DIR);\
				else\
					echo "$(OBJ_DIR) does not exist!";\
				fi)"
	@make -C libft/ clean -s


fclean: clean
	@echo " $(shell\
					if [ -f libft/libft.a ];\
						then\
							echo "Removing libft.a";\
							rm -f libft/libft.a;\
					fi)"
	@echo " $(shell\
					if [ -f $(TARGET) ];\
					then\
						echo "Removing $(TARGET)";\
						rm -f $(TARGET);\
					else\
						echo "$(TARGET) does not exist!";\
					fi)"
	@echo " $(shell\
					if [ -f $(BIN) ];\
						then\
							echo "Removing $(BIN)";\
							rm -f $(BIN);\
					else\
							echo "$(BIN) does not exist!";\
					fi)"
	@echo " $(shell\
					if [ -r ./minishell.dSYM ];\
						then\
							echo "Removing minishell.dSYM";\
							rm -rf minishell.dSYM;\
					else\
							echo "minishell.dSYM does not exist!";\
					fi)"

re: fclean all

$(addprefix $(OBJ_DIR), %.o): $(addprefix $(SRC_DIR), %.c)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -I libft/includes -o $@ -c $<

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

