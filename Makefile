# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbelil <sbelil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 15:58:24 by sbelil            #+#    #+#              #
#    Updated: 2023/12/10 22:31:47 by sbelil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER 	=	libft.h

SRC		= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c         \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c       \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c   \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c   		   \
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c    \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c    \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
			
SRC_BN	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c 	   \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c	   \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
			
OBJS	=	$(SRC:.c=.o)

OBJS_BN	= 	$(SRC_BN:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	ar	rc	$(NAME)	$(OBJS)

bonus	:	$(OBJS)	$(OBJS_BN)
	ar	rc	$(NAME)	$(OBJS)	$(OBJS_BN)


%.o		:	%.c	$(HEADER)
	cc	-Wall -Wextra -Werror	-c	$<	-o	$@

clean	:
	rm	-f	$(OBJS)	$(OBJS_BN)

fclean	:
	rm	-f	$(NAME)	$(OBJS)	$(OBJS_BN)

re		:	fclean	all