INCL = -I includes -I libft/includes
FLAGS = -Wall -Werror -Wextra
SRC = src/*.c -o gnl -L libft/lib -lft

all: rule_2 clean

rule_1:
	@echo "\033[31mRecompiling Library...\033[0m"
	@cd libft && make fclean && make all && cd ..
	@echo "\033[32mOK\033[0m"

rule_2: rule_1
	@echo "\033[31mCompiling Project...\033[0m"
	@gcc $(INCL) $(FLAGS) $(SRC)
	@echo "\033[32mOK\033[0m"

quick:
	@echo "\033[31mCompiling Project...\033[0m"
	@gcc $(INCL) $(SRC)
	@echo "\033[32mOK\033[0m"

clean:
	@echo "\033[31mCleaning up useless files...\033[0m"
	@rm -f .*.swp
	@rm -f ._*
	@rm -f .*.swm
	@rm -f .*.swn
	@rm -f .*.swo
	@echo "\033[32mDONE\033[0m"

fclean: clean
	@echo "\033[31mCleaning up executables...\033[0m"
	@rm -f minishell
	@echo "\033[32mDONE\033[0m"

re: all