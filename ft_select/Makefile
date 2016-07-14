all: rule_2 clean

rule_1:
	@echo [31mRecompiling Library...[0m
	@cd libft && make fclean && make all && cd ..
	@echo [32mOK[0m

rule_2: rule_1
	@echo [31mCompiling Project...[0m
	@gcc -I includes -I libft/includes -Wall -Werror -Wextra shared/*.c src/*.c -o ft_select -L libft/lib -lft
	@echo [32mOK[0m

quick:
	@echo [31mCompiling Project...[0m
	@gcc -I includes -I libft/includes shared/*.c src/*.c -o ft_select -L libft/lib -lft
	@echo [32mOK[0m

clean:
	@echo [31mCleaning up useless files...[0m
	rm -f ._*
	rm -f .ft_select.*
	@echo [32mDONE[0m

fclean: clean
	@echo [31mCleaning up executables...[0m
	@rm -f ft_select
	@echo [32mDONE[0m

re: all
