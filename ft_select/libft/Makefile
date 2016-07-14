all: rule_2 clean

rule_1:
	@gcc -c -I includes -Wall -Werror -Wextra src/*.c

rule_2: rule_1
	@ar rc lib/libft.a *.o
	@ranlib lib/libft.a

clean:
	@rm -f *.o
	@rm -f ft_select

fclean: clean
	@rm -f lib/libft.a

re: fclean all

