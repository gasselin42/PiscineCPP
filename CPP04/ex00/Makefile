# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 12:56:05 by gasselin          #+#    #+#              #
#    Updated: 2022/01/10 13:05:46 by gasselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Animal

SRCS		= main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

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