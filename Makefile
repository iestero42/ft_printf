# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iestero- <iestero-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 09:38:36 by iestero-          #+#    #+#              #
#    Updated: 2023/01/16 10:29:23 by iestero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME = libftprintf.a

INCLUDE = ft_printf.h

LIBFT = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC_DIR = src/

SRC_DIR_BONUS = srcbonus/

AR = ar rsc

RM = rm -f

# Sources

FT_PRINTF_FILE = ft_printf

FT_PRINTF_BONUS_FILE = ft_printf_bonus

SRC_FILES = format_chars format_int format_hex check_format format_ptr

SRC_FILES_BONUS = precision_bonus utils_bonus check_flags_bonus \
			hashflag_bonus minusflag_bonus plusflag_bonus \
			spaceflag_bonus width_bonus zeroflag_bonus store_format_bonus

SRC_PRINT = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))

FT_PRINTF = $(addprefix $(SRC_DIR), $(addsuffix .c, $(FT_PRINTF_FILE)))

SRC_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(SRC_FILES_BONUS)))

FT_PRINTF_BONUS = $(addprefix $(SRC_DIR_BONUS), $(addsuffix .c, $(FT_PRINTF_BONUS_FILE)))

OBJS = $(SRC_PRINT:.c=.o) $(FT_PRINTF:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o) $(SRC_PRINT:.c=.o) $(FT_PRINTF_BONUS:.c=.o)

# Rules

$(NAME): $(OBJS) $(INCLUDE)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)
	
bonus: $(OBJS_BONUS) $(INCLUDE)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS_BONUS)
	
clean:
	@$(RM) -rf $(addprefix $(SRC_DIR), *.o)
	@$(RM) -rf $(addprefix $(SRC_DIR_BONUS), *.o)
	@make clean -C $(LIBFT)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBFT)/libft.a

re: fclean all 

rebonus: fclean bonus

run:
	gcc  main.c -L/mnt/e/42_MADRID/42_CURSUS/ft_printf -lftprintf

.PHONY: all clean fclean re run bonus
