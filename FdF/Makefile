# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atopalli <atopalli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 08:06:39 by atopalli          #+#    #+#              #
#    Updated: 2022/08/22 07:17:50 by atopalli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FDF = main.c
FDF_OBJ = $(FDF:.c=.o)

$(NAME): $(FDF_OBJ)
	$(CC) $(FDF_OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(FDF_OBJ)

fclean: clean
	$(RM) *.out *.a

re: flcean all
