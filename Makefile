# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fschnorr <fschnorr@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 13:30:00 by fschnorr          #+#    #+#              #
#    Updated: 2024/11/25 16:03:43 by fschnorr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	$(addsuffix .c,							\
		$(addprefix src/ctype/, 				\
		                		ft_isalnum   	\
                            	ft_isalpha   	\
								ft_isascii   	\
								ft_isdigit   	\
								ft_isprint   	\
								ft_tolower   	\
								ft_toupper   	\
        ))										\
    	$(addsuffix .c,							\
		$(addprefix src/memory/, 				\
								ft_bzero    	\
							 	ft_memchr   	\
							 	ft_memcmp   	\
								ft_memcpy   	\
							 	ft_memmove  	\
							 	ft_memset   	\
		))										\
		$(addsuffix .c,							\
		$(addprefix src/stdio/, 				\
								ft_putchar_fd	\
								ft_putendl_fd	\
								ft_putnbr_fd	\
								ft_putptr_fd	\
								ft_putstr_fd	\
		))										\
		$(addsuffix .c,							\
		$(addprefix src/stdlib/, 				\
								ft_atoi			\
								ft_atol			\
								ft_calloc		\
								ft_intlen		\
								ft_itoa			\
		))										\
		$(addsuffix .c,							\
		$(addprefix src/string/, 				\
								ft_split		\
								ft_str_isin_strs\
								ft_strchr		\
								ft_strcmp		\
								ft_strdup		\
								ft_striteri		\
								ft_strjoin		\
								ft_strlcat		\
								ft_strlcpy		\
								ft_strlen		\
								ft_strmapi		\
								ft_strncmp		\
								ft_strnstr		\
								ft_strrchr		\
								ft_strtrim		\
								ft_substr		\
											))	\
		$(addsuffix .c, 						\
		$(addprefix src/utils/, 				\
								ft_c_isin_str	\
								ft_linelen		\
		))
OBJS := $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "ran ar for libft"

%.o: %.c
	@cc -Wextra -Wall -Werror -Iincludes -c $< -o $@
	
clean:
	@rm -f $(OBJS)
	
fclean: clean
	@rm -f $(NAME)
	@echo "ran fclean for libft"

re: fclean all
