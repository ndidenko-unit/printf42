#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/02 15:57:00 by ndidenko          #+#    #+#              #
#    Updated: 2018/05/02 15:57:03 by ndidenko         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libftprintf.a

FILE_C = ft_main.c \
		ft_print_conv.c \
		parsing.c \
		processing_s.c \
		processing_c.c \
		processing_invalid.c \
		left_right.c \
		processing_u.c \
		processing_u_1.c \
		processing_p.c \
		processing_d.c \
		processing_d_1.c \
		processing_o.c \
		processing_o_1.c \
		processing_x.c \
		processing_x_1.c \
		processing_x_2.c \
		processing_x_3.c \
		processing_unicode.c \
		processing_pct.c \
		check.c \
		ft_2to10.c \
		ft_itoa_max.c \
		libft/ft_atoi.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_strcat.c \
		libft/ft_strchr.c \
		libft/ft_strdel.c \
		libft/ft_strcpy.c \
		libft/ft_strlen.c \
		libft/ft_strnew.c \
		libft/ft_strjoin.c \
		libft/ft_strsub.c \
		libft/ft_memalloc.c \
		libft/ft_memset.c \
		libft/ft_strdup.c

FILE_O = $(FILE_C:.c=.o)

GCC = @gcc -Wall -Wextra -Werror -c -o

all: $(NAME)
	
$(NAME): $(FILE_O)
	@ar rc $(NAME) $(FILE_O)
	@echo "-----====== COMPLETE ======-----"

%.o: %.c
	$(GCC) $@ $<

clean:
	@rm -f $(FILE_O)
	@echo "---=== CLEANING DONE RIGHT ===---"

fclean: clean
	@rm -f $(NAME)

re: fclean all