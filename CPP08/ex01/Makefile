#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 10:47:12 by wjasmine          #+#    #+#              #
#    Created: 2022/10/21 18:47:12 by wjasmine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	span

HEADER	=	Span.h

SRCS	=	main.cpp Span.cpp

OBJS	=	${SRCS:%.cpp=%.o}

CC		=	c++

RM		=	rm -rf

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CPPFLAGS} -o ${NAME} ${OBJS}

%.o: %.cpp	${HEADER} Makefile
			${CC} ${CPPFLAGS} -c $< -o $@

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
