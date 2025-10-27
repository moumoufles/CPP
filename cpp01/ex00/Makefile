# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 16:44:23 by lucas             #+#    #+#              #
#    Updated: 2025/09/08 17:32:56 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Brainz
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98

SRCS	:= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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