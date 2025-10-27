# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucas <lucas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/04 15:03:05 by lucas             #+#    #+#              #
#    Updated: 2025/10/20 17:47:02 by lucas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98

SRCS	:= main.cpp Contact.cpp PhoneBook.cpp
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