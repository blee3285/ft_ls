# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blee <blee@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/18 14:11:04 by blee              #+#    #+#              #
#    Updated: 2018/04/14 19:02:19 by blee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC_DIR = ./srcs
OBJ_DIR = ./objs
LIBFT = ./libft/libft.a


SRC_FILES = bt_func.c \
	    bt_func2.c \
			build_tree.c \
			check_inputs.c \
			file_att1.c \
			file_att2.c \
			ft_ls.c \
			get_len.c \
			init_file.c \
			main.c \
			printing.c \
			print_func.c \
			print_long.c \
			print_dir.c \
			free_ls.c

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

all: $(NAME)

$(LIBFT):
	make -C libft

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -Wall -Wextra -Werror -c $< -o $@ -I ./includes

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT)
	gcc -o $(NAME) $(OBJS) $(LIBFT)

clean:
	rm -rf $(OBJ_DIR)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: clean all
