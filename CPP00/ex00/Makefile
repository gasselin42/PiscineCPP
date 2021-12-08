# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 11:33:52 by gasselin          #+#    #+#              #
#    Updated: 2021/11/23 14:52:14 by gasselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRCS	= megaphone.cpp
OBJS	= megaphone.o

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -c -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
