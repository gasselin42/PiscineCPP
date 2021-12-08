# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 15:10:43 by gasselin          #+#    #+#              #
#    Updated: 2021/12/08 15:16:52 by gasselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= this_is_string

SRCS		= main.cpp

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