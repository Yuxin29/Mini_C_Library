# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:58:20 by yuwu              #+#    #+#              #
#    Updated: 2025/05/09 17:11:01 by yuwu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
HEADERS := include/ft_printf.h
CFLAGS := -Wall -Wextra -Werror
CC := cc
SRC_DIR := src

#SRCS := $(wildcard src/*.c)
SRCS := $(SRC_DIR)/ft_printf.c $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_putstr.c \
		$(SRC_DIR)/ft_putdec.c $(SRC_DIR)/ft_putdecu.c \
		$(SRC_DIR)/ft_puthexlower.c $(SRC_DIR)/ft_puthexupper.c \
		$(SRC_DIR)/ft_putptr.c \

OBJS := $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
		ar -rcs $@ $^

%.o: %.c $(HEADERS)
		$(CC) $(CFLAGS) -Iinclude -c $< -o $@

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re			
