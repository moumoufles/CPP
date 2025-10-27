# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 14:26:51 by lucas             #+#    #+#              #
#    Updated: 2025/09/08 16:55:10 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98

SRCS	:= megaphone.cpp
OBJS    := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re