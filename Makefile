COMPILE = gcc
FLAGS = -Wall -Wextra -Werror
MINILIBX = minilibx/libmlx.a -lXext -lX11 -lm
MYLIBFT = mylibft/*.a
NAME = fdf

all: $(NAME)
$(NAME):
	$(COMPILE) $(FLAGS) *.c $(MINILIBX) $(MYLIBFT) -o $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm fdf
re: fclean all
.PHONY: all object clean fclean re
