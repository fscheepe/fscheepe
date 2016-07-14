# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fscheepe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 11:17:37 by fscheepe          #+#    #+#              #
#    Updated: 2016/07/07 14:47:15 by fscheepe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lib/libft.a
CFILES = src/*.c
OFILES = *.o
FLAGS = -Wall -Werror -Wextra

all: rule_b clean

rule_a:
	@gcc -c -I includes $(FLAGS) $(CFILES)

rule_b: rule_a
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)

clean:
	@rm -f *.o
	@rm -f *.out

fclean: clean
	@rm -f $(NAME)

re: fclean all
