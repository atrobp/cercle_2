# **************************************************************************** #
#                                      			if (success){};                #
#                                                                              #
#   Makefile                                                                   #
#                                         			██   ██ ██████             #
#   By: @atopalli | github/atrobp         			██   ██      ██            #
#                                         			███████  █████             #
#   Created: 2022/10/14 06:10:42 by @atopalli			 ██ ██                 #
#   Updated: 2022/10/16 13:24:14 by @atopalli			 ██ ███████.qc         #
#                                                                              #
# **************************************************************************** #

NAME   = push_swap
# CC     = gcc -Wall -Werror -Wextra
CC     = gcc

# FILES  = $(shell find . -name "*.c")
# FILESO = $(FILES:.c=.o)


$(NAME):
	$(CC) -o $(NAME) $(shell find . -name "*.c")

all: $(NAME)

clean:
	# rm *.o

fclean:
	rm push_swap

re: fclean all

norm:
	norminette

.phony: push_swap all clean fclean re norm