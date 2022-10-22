# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 10:47:12 by wjasmine          #+#    #+#              #
#    Created: 2022/10/21 18:47:12 by wjasmine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	 megaphone

SRCS	=	 megaphone.cpp

OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -rf

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic

.PHONY:		all clean fclean re test

all:		${NAME}

%.o: %.cpp
			${CC} ${CPPFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

test:		${NAME}
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone
