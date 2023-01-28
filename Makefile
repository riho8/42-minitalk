# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/20 20:22:25 by rsihmaok          #+#    #+#              #
#    Updated: 2023/01/20 20:22:25 by rsihmaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

SERVER = server
S_SRC = server.c

CLIENT = client
C_SRC = client.c

LIBFTDIR = libft
LIBFT = $(LIBFTDIR)/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(SERVER) $(CLIENT)

all: $(NAME)

$(SERVER): $(S_SRC) $(LIBFT)
	$(CC) $(CFLAGS) -o  $(SERVER) $(S_SRC) $(LIBFT)

$(CLIENT): $(C_SRC) $(LIBFT)
	$(CC) $(CFLAGS) -o  $(CLIENT) $(C_SRC) $(LIBFT)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR) 

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	
fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(SERVER) $(CLIENT) 

re: fclean all

.PHONY: all clean fclean re
