# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:00:43 by iestero-          #+#    #+#              #
#    Updated: 2023/01/16 09:37:50 by iestero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable

NAME = libft.a

INCLUDE = libft.h

SRC_DIR = src/

OBJ_DIR = obj

IS_TO_DIR = ft_is_to/

LST_DIR = ft_lst/

MEM_DIR = ft_mem/

NUM_DIR = ft_num/

PUT_DIR = ft_put/

STR_DIR = ft_str/

TREE_DIR = ft_tree/

CC = gcc

CFLAGS = -g -Wall -Wextra -Werror

#Sources

FT_IS_TO_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c
		
SRC_IS_TO = $(addprefix $(SRC_DIR), $(addprefix $(IS_TO_DIR), $(FT_IS_TO_FILES)))

FT_LST_FILES = ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c \
			ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c
			
SRC_LST = $(addprefix $(SRC_DIR), $(addprefix $(LST_DIR), $(FT_LST_FILES)))

FT_MEM_FILES = ft_memmove.c ft_memcmp.c ft_memset.c ft_memchr.c ft_memcpy.c

SRC_MEM = $(addprefix $(SRC_DIR), $(addprefix $(MEM_DIR), $(FT_MEM_FILES)))

FT_NUM_FILES = ft_bzero.c ft_atoi.c ft_calloc.c  ft_itoa.c

SRC_NUM = $(addprefix $(SRC_DIR), $(addprefix $(NUM_DIR), $(FT_NUM_FILES)))

FT_PUT_FILES = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c
		
SRC_PUT = $(addprefix $(SRC_DIR), $(addprefix $(PUT_DIR), $(FT_PUT_FILES)))

FT_STR_FILES = ft_strmapi.c ft_split.c ft_striteri.c  ft_strjoin.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c  ft_strnstr.c ft_strlcpy.c \
		ft_strlcat.c ft_strlen.c ft_substr.c ft_strtrim.c ft_strdup.c
		
SRC_STR = $(addprefix $(SRC_DIR), $(addprefix $(STR_DIR), $(FT_STR_FILES)))

FT_TREE_FILES = ft_find_tree.c ft_insert_node.c ft_new_node.c ft_clear_tree.c
		
SRC_TREE = $(addprefix $(SRC_DIR), $(addprefix $(TREE_DIR), $(FT_TREE_FILES)))

SRC = $(SRC_IS_TO) $(SRC_LST) $(SRC_MEM) $(SRC_NUM) $(SRC_PUT) $(SRC_STR) $(SRC_TREE)

OBJS = $(SRC:.c=.o)

#Rules

$(OBJ_DIR)/%.o:	%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(INCLUDE)
	@ar rsc $(NAME) $(OBJS)
	
all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS) $(INCLUDE)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(IS_TO_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(MEM_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(NUM_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(LST_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(STR_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(PUT_DIR), *.o))
	@rm -fr $(addprefix $(SRC_DIR), $(addprefix $(TREE_DIR), *.o))

fclean: clean
	@rm -f $(NAME)

re: fclean all 

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus

