NAME = libft.a

all:
	gcc -Wall -Wextra -Werror -c *.c
	ar rcs $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re t
	