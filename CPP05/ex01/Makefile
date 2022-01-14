# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 11:07:25 by gasselin          #+#    #+#              #
#    Updated: 2022/01/14 14:54:27 by gasselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= bureaucrat

SRCS		= main.cpp Bureaucrat.cpp Form.cpp

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