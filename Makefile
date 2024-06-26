# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 16:00:05 by zibnoukh          #+#    #+#              #
#    Updated: 2023/11/25 20:49:01 by zibnoukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC =  ./ft_isalpha.c ./ft_isdigit.c ./ft_isdigit.c ./ft_isalnum.c \
	   ./ft_isascii.c ./ft_isprint.c ./ft_strlen.c ./ft_memset.c \
	   ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c ./ft_strlcpy.c \
	   ./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c \
	   ./ft_strrchr.c ./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c \
	   ./ft_strnstr.c ./ft_atoi.c ./ft_calloc.c ./ft_strdup.c ./ft_substr.c  \
	   ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c ./ft_strmapi.c \
	   ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c \
	   ./ft_putendl_fd.c ./ft_putnbr_fd.c \

BONUS_SRC = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c ./ft_lstlast_bonus.c \
			./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c ./ft_lstclear_bonus.c ./ft_lstiter_bonus.c \
			./ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	
$(BONUS_OBJ) : $(BONUS_SRC)
	$(CC) $(CFLAGS) -c $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_OBJ)
	
bonus: $(BONUS_OBJ)
		
clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
