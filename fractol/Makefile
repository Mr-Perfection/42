NAME = fractol
CFLAGS = -Wall -Werror -Wextra
SRC = display.c env.c event.c julia.c main.c mandelbrot.c newton.c tools.c
OBJ = $(SRC:.c=.o)
ATTACH  = -L./libft -lft -L./minilibx -lmlx -framework OpenGL -framework AppKit
ft = libft

all : $(NAME)

$(NAME) :
	@echo "Creating ..."
	make -C libft/
	gcc $(FLAGS) -I libft/ -I./minilibx/ -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) $(ATTACH)

libft:
	@make -C libft fclean
	@make -C libft

clean :
	@echo "Removing object files ..."
	@rm -f $(OBJ)

fclean : clean
	@echo "Removing $(NAME) ..."
	@rm -f $(NAME)

re : fclean all
