# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 13:51:53 by gasselin          #+#    #+#              #
#    Updated: 2021/12/07 14:05:02 by gasselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRCS		= main.cpp Contact.cpp Phonebook.cpp

OBJS		= $(SRCS:.cpp=.o)
OBJ_DIR		= objs

OBJS_PATH	= $(addprefix $(OBJ_DIR)/, $(OBJS))

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

$(NAME): $(OBJ_DIR) $(OBJS_PATH)
	$(CC) $(OBJS_PATH) -o $(NAME)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)

clean :
	@rm -rf $(OBJS_PATH) $(OBJ_DIR)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re