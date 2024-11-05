# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yawang <yawang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 16:45:36 by yawang            #+#    #+#              #
#    Updated: 2024/11/05 23:16:36 by yawang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c alg_utils.c algorithms1.c algorithms2.c checks.c errors.c \
	free.c helpers.c normalize.c rules1.c rules2.c rules3.c
OBJS = ${SRCS:%.c=%.o}

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -Ift_printf/libft -Ift_printf -c $? -o $@

${NAME}: ${OBJS}
	@make -C ft_printf/libft
	@make -C ft_printf
	${CC} ${CFLAGS} $^ -Lft_printf/libft -lft -Lft_printf -lftprintf -o ${NAME}

libft:
	make -C ft_printf/libft

printf:
	make -C ft_printf

clean:
	make clean -C ft_printf/libft
	make clean -C ft_printf
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}
	${RM} ft_printf/libftprintf.a ft_printf/libft/libft.a

re:	fclean all

.PHONY:	libft printf