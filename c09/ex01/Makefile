# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 19:27:22 by jvalkama          #+#    #+#              #
#    Updated: 2025/02/05 16:39:34 by jvalkama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR			= ./srcs
INCLUDE_DIR		= ./includes

SRCS			= $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c \
			$(SRC_DIR)/ft_srlen.c $(SRC_DIR)/ft_putstr.c \
			$(SRC_DIR)/ft_strcmp.c

OBJS			= $(SRCS:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)

CC 			= cc -I$(INCLUDE_DIR)

CFLAGS 			= -Wall -Wextra -Werror

RM			= rm -f

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
			ar rcs $(NAME) $(OBJS)

$(SRC_DIR)/%.o):	$(SRC_DIR)/%.c)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all
