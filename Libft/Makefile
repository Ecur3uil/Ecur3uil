# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stduval <stduval@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 12:37:15 by stduval           #+#    #+#              #
#    Updated: 2023/05/25 12:15:30 by stduval          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strnstr.c\
	  ft_atoi.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c\
	  ft_itoa.c\
	  ft_strmapi.c\
	  ft_striteri.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_printnbr.c\
	  ft_printpercent.c\
	  ft_specifier.c\
	  ft_printf.c\
	  ft_hexlen.c\
	  ft_puthex.c\
	  ft_printhex.c\
	  ft_putptr.c\
	  ft_ptrlen.c\
	  ft_printptr.c\
	  ft_numlen.c\
	  ft_uitoa.c\
	  ft_printuint.c\
	  get_next_line.c\
	  ft_getstrlen.c\
	  ft_getstrchr.c\
	  ft_getstrjoin.c\
	  
SRC_BONUS = ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\

OBJ	= $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC	= gcc
RM	= rm -f
FLAG	= -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME):	$(OBJ)
				ar rcs $(NAME) $(OBJ)

clean:
		$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(NAME) $(OBJ) $(OBJ_BONUS)
		ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
		
.PHONY: all clean fclean re
