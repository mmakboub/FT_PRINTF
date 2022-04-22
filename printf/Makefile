# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 15:35:07 by mmakboub          #+#    #+#              #
#    Updated: 2021/12/08 21:39:41 by mmakboub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FONCTIONS = fct_auxil_hex.c\
			ft_fctauxiliare.c\
			ft_printf.c
GC = gcc
CFLAG = -Wall -Werror -Wextra
RM = rm -f
AR = ar
ARFLAG = -crs
INCLUDE = ft_printf.h

OBJS = $(FONCTIONS:.c=.o)

all : $(NAME)


$(NAME):$(OBJS) $(INCLUDE)
	$(AR) $(ARFLAG) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean : clean
	$(RM) $(NAME)

re: fclean all
