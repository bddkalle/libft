# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 13:30:00 by fschnorr          #+#    #+#              #
#    Updated: 2024/10/08 11:23:38 by fschnorr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIRS = src/ctype src/memory src/stdio src/string src/stdlib src/utils
SRC = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.c))
OBJS := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "ran ar."

%.o: %.c
	@cc -Wextra -Wall -Werror -Iincludes -c $< -o $@
	@echo "ran cc."

clean:
	@rm -f $(OBJS)
	@echo "ran clean."

fclean: clean
	@rm -f $(NAME)
	@echo "ran fclean."

re: fclean all
