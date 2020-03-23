# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/22 11:55:57 by alessandro        #+#    #+#              #
#    Updated: 2020/03/23 10:11:00 by adorigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PHONEBOOK
INCLUDE = -I /include
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Contact.cpp Annuaire.cpp
FOLDER = src
SRCS = $(addprefix ${FOLDER}/, ${SRC})

all : $(NAME)

$(NAME) : 
	clang++ $(CFLAGS) $(INCLUDE) $(SRCS) -o $(NAME)

clean : 
		rm -f $(NAME)

fclean : clean

re : fclean all