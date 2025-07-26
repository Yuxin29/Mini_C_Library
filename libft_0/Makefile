# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 15:39:14 by yuwu              #+#    #+#              #
#    Updated: 2025/04/28 21:00:15 by yuwu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS := libft.h
NAME := libft.a
CFLAGS := -Wall -Wextra -Werror -Iinclude

SRCS := $(wildcard src/*.c)

BONUS_SRCS := f$(wildcard bonus_src/*.c)

OBJS := $(SRCS:%.c=%.o)
BONUS_OBJS := $(BONUS_SRCS:%.c=%.o)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o: %.c $(HEADERS)
	cc -c $< -o $@ $(CFLAGS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $^

.PHONY: all clean fclean re bonus
