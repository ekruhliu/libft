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
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
HDR = -c -I $(HEADER)
SRC = ./srcs/ft_isalpha.c ./srcs/ft_memchr.c ./srcs/ft_strcat.c ./srcs/ft_strlcat.c ./srcs/ft_strnstr.c \
		./srcs/ft_isascii.c ./srcs/ft_memcmp.c ./srcs/ft_strchr.c ./srcs/ft_strlen.c ./srcs/ft_strrchr.c \
		./srcs/ft_atoi.c ./srcs/ft_isdigit.c ./srcs/ft_memcpy.c ./srcs/ft_strcmp.c ./srcs/ft_strncat.c	\
		./srcs/ft_strstr.c ./srcs/ft_bzero.c ./srcs/ft_isprint.c ./srcs/ft_memmove.c ./srcs/ft_strcpy.c \
		./srcs/ft_strncmp.c ./srcs/ft_tolower.c ./srcs/ft_isalnum.c ./srcs/ft_memccpy.c ./srcs/ft_memset.c \
		./srcs/ft_strdup.c ./srcs/ft_strncpy.c ./srcs/ft_toupper.c ./srcs/ft_memalloc.c ./srcs/ft_memdel.c \
		./srcs/ft_strnew.c ./srcs/ft_strdel.c ./srcs/ft_strclr.c ./srcs/ft_striter.c  ./srcs/ft_striteri.c \
		./srcs/ft_strmap.c ./srcs/ft_strmapi.c ./srcs/ft_strequ.c ./srcs/ft_strnequ.c ./srcs/ft_strsub.c \
		./srcs/ft_strjoin.c \

OBJ = ft_isalpha.o ft_memchr.o ft_strcat.o ft_strlcat.o ft_strnstr.o \
		ft_isascii.o ft_memcmp.o ft_strchr.o ft_strlen.o ft_strrchr.o \
		ft_atoi.o ft_isdigit.o ft_memcpy.o ft_strcmp.o ft_strncat.o	\
		ft_strstr.o ft_bzero.o ft_isprint.o ft_memmove.o ft_strcpy.o \
		ft_strncmp.o ft_tolower.o ft_isalnum.o ft_memccpy.o ft_memset.o \
		ft_strdup.o ft_strncpy.o ft_toupper.o ft_memalloc.o ft_memdel.o \
		ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o \
		ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o \
		ft_strjoin.o \

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
