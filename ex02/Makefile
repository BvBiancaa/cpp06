# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:50:58 by bmuni             #+#    #+#              #
#    Updated: 2023/04/14 14:48:51 by bmuni            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=rand

all: $(NAME)

$(NAME):
	c++ -g -Wall -Wextra -Werror -std=c++98 main.cpp Base.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re
