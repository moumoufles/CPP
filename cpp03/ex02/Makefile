NAME	:= FragTrap
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98

SRCS	:= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
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