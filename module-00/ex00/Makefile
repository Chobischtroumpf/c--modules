# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/22 11:55:57 by alessandro        #+#    #+#              #
#    Updated: 2021/01/19 13:40:59 by adorigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CFLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

all : $(NAME)

$(NAME) : 
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

clean : 
		rm -f $(NAME)

fclean : clean

re : fclean all