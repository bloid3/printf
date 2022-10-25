# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: papereir <papereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 13:38:45 by papereir          #+#    #+#              #
#    Updated: 2022/10/25 17:40:35 by papereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_printf.c functions.c
OBJS    = ${SRCS:.c=.o}
OBJB    = ${SRCSB:.c=.o}
NAME    = libftprintf.a
LIB = libftprintf.h
CC  = gcc
RM  = rm -f
CFLAGS  = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:    $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
bonus:      ${OBJS} ${OBJB}
				${AR}  ${NAME} ${OBJB}
				ranlib ${NAME}
all:        ${NAME}
clean:
				${RM} ${OBJS} ${OBJB}
fclean:     clean
				${RM} ${NAME}
re:         fclean all
.PHONY:     all clean fclean re
