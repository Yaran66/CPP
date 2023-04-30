#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 10:47:12 by wjasmine          #+#    #+#              #
#    Created: 2022/10/21 18:47:12 by wjasmine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = realtype

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

CC = c++

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp Base.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
