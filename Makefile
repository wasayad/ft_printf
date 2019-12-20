# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/12/02 13:43:05 by wasayad      #+#   ##    ##    #+#        #
#    Updated: 2019/12/17 21:40:16 by wasayad     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRC = 		./libft/ft_itoa_base.c \
			./libft/ft_itoa_base_address.c \
			./libft/ft_atoi_base.c \
			./ft_printf.c \
			./libft/ft_strchr.c \
			./libft/ft_atoi.c \
			./libft/ft_strjoin.c \
			./libft/ft_itoa.c \
			./libft/ft_strdup.c \
			./libft/ft_strlen.c  \
			./libft/ft_calloc.c \
			./libft/ft_bzero.c \
			./ft_printf_norme.c \
			./libft/ft_atoi_width.c \
			./libft/ft_substr.c \
			./libft/ft_strjoinchar.c \
			./libft/ft_realloc.c \
			./libft/ft_strjoinf.c \
			./libft/ft_strcpy.c \
			./libft/ft_itoa_base_address.c \
			./ft_printf_init.c \
			./ft_printf_init_base.c \
			./ft_get_flag.c \
			./ft_manage_conv.c \
			./libft/ft_realloc_tab_int.c

OBJ = 		${SRC:.c=.o}
HEADER = 	libftprintf.h
NAME = 		libftprintf.a
CC = 		gcc
CFLAGS = 	-Wall -Wextra -Werror
RM = 		rm -rf

%.o: %.c ${HEADER}
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		@echo "\033[93m."

$(NAME) : ${OBJ} ${HEADER}
			@echo ''
	        @ar rc ${NAME} ${OBJ}
			@echo "\033[93mCompiling libftprintf.a...\033[37m"

all:      ${NAME}

clean:
		@${RM} -f ${OBJ}
		@echo "\033[91mDeleting object files...\033[37m"

fclean:     clean
	        @rm -f ${NAME}
			@echo "\033[91mDeleting libftprintf.a...\033[37m"

re : fclean all

.PHONY : all clean fclean re
