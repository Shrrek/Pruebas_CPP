# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperales <jperales@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 17:49:36 by jperales          #+#    #+#              #
#    Updated: 2022/10/26 17:29:22 by jperales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp

RM = rm -f

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

SRC = clases1.cpp\

OBJS = $(SRC:.cpp=.o)

.cpp.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
