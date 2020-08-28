# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yshimada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/28 10:56:34 by yshimada          #+#    #+#              #
#    Updated: 2020/08/28 11:28:21 by yshimada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-01
SRC = *.c

all: $(NAME)

$(NAME): $(SRC) rush01.h
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
