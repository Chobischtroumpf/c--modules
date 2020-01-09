# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/22 11:55:57 by alessandro        #+#    #+#              #
#    Updated: 2020/01/09 16:31:49 by adorigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PHONEBOOK
INCLUDE = -I /include
CFLAGS = -Wall -Wextra -Werror
SRC = search.cpp main.cpp ClassContact.cpp ClassAnnuaire.cpp
FOLDER = src
SRCS = $(addprefix ${FOLDER}/, ${SRC})

all : $(NAME)

$(NAME) : 
	clang++ $(CFLAGS) $(INCLUDE) $(SRCS) -o $(NAME)

clean : 
		rm -f $(NAME)

fclean : clean

re : fclean all