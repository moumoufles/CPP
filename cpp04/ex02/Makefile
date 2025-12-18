NAME	:= Abstract_class
CC		:= c++
CFLAGS	:= -Wextra -Wall -Werror -std=c++98 -I includes/

SRCS_D	:= srcs
OBJS_D	:= obj

SRC		:=	srcs/main.cpp			\
			srcs/Animal.cpp			\
			srcs/Dog.cpp			\
			srcs/Cat.cpp			\
			srcs/WrongCat.cpp		\
			srcs/WrongAnimal.cpp	\
			srcs/Brain.cpp

OBJ		:= $(SRC:srcs/%.cpp=$(OBJS_D)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJS_D)/%.o: $(SRCS_D)/%.cpp
	@mkdir -p $(OBJS_D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_D)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re