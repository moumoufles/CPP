# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:32:43 by lucas             #+#    #+#              #
#    Updated: 2025/09/08 18:23:01 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= MoarBrainz
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98

SRCS	:= main.cpp Zombie.cpp zombieHorde.cpp
OBJS	:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re