# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 12:34:38 by ekruhliu          #+#    #+#              #
#    Updated: 2017/10/30 12:34:40 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = ./
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
SRC = ./ft_isalpha.c ./ft_memchr.c ./ft_strcat.c ./ft_strlcat.c ./ft_strnstr.c \
		./ft_isascii.c ./ft_memcmp.c ./ft_strchr.c ./ft_strlen.c ./ft_strrchr.c \
		./ft_atoi.c ./ft_isdigit.c ./ft_memcpy.c ./ft_strcmp.c ./ft_strncat.c	\
		./ft_strstr.c ./ft_bzero.c ./ft_isprint.c ./ft_memmove.c ./ft_strcpy.c \
		./ft_strncmp.c ./ft_tolower.c ./ft_isalnum.c ./ft_memccpy.c ./ft_memset.c \
		./ft_strdup.c ./ft_strncpy.c ./ft_toupper.c ./ft_memalloc.c ./ft_memdel.c \
		./ft_strnew.c ./ft_strdel.c ./ft_strclr.c ./ft_striter.c  ./ft_striteri.c \
		./ft_strmap.c ./ft_strmapi.c ./ft_strequ.c ./ft_strnequ.c ./ft_strsub.c \
		./ft_strjoin.c ./ft_strtrim.c ./ft_strsplit.c ./ft_itoa.c ./ft_putchar.c \
		./ft_putstr.c ./ft_putendl.c ./ft_putnbr.c ./ft_putchar_fd.c ./ft_putstr_fd.c \
		./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_lstnew.c ./ft_lstdelone.c ./ft_middle.c \
		./ft_lstdel.c ./ft_lstadd.c ./ft_lstiter.c ./ft_lstmap.c ./ft_isnegative.c \
		./ft_strnlen.c ./ft_same_symbol.c ./ft_swap.c ./get_next_line.c \

OBJ = ft_isalpha.o ft_memchr.o ft_strcat.o ft_strlcat.o ft_strnstr.o \
		ft_isascii.o ft_memcmp.o ft_strchr.o ft_strlen.o ft_strrchr.o \
		ft_atoi.o ft_isdigit.o ft_memcpy.o ft_strcmp.o ft_strncat.o	\
		ft_strstr.o ft_bzero.o ft_isprint.o ft_memmove.o ft_strcpy.o \
		ft_strncmp.o ft_tolower.o ft_isalnum.o ft_memccpy.o ft_memset.o \
		ft_strdup.o ft_strncpy.o ft_toupper.o ft_memalloc.o ft_memdel.o \
		ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o \
		ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o \
		ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_putchar.o \
		ft_putstr.o ft_putendl.o ft_putnbr.o ft_putchar_fd.o ft_putstr_fd.o \
		ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o ft_lstdelone.o \
		ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_isnegative.o \
		ft_middle.o ft_strnlen.o ft_same_symbol.o ft_swap.o get_next_line.o \

all: $(NAME)

$(NAME):
		@ gcc $(FLAGS) $(HDR) $(SRC)
		@ ar rc $(NAME) $(OBJ)
		@ ranlib $(NAME)
clean:
		@ /bin/rm -f $(OBJ)
		
fclean: clean
		@ /bin/rm -f $(NAME)

re: fclean all
