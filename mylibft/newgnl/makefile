# How to use:
# Simply type 'make'
# Then move the created libftprintf.a
NAME = gnl.a
LIBFT = ../libft/libft.a
all:
	gcc -Wall -Wextra -Werror -c *.c
	ar rcs $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
# For testing. Remember to uncomment main in ft_printf.c
t: re
	@make clean
	@gcc get_next_line.c $(NAME) $(LIBFT)
	./a.out
	@rm a.out
.PHONY: all clean fclean re t