##
## Makefile for LibMy in /home/rajiska/Epitech/CPool_Day10/lib/my
## 
## Made by Corlouer Doriann
## Login   <corlouer_d@epitech.net>
## 
## Started on  Fri Oct 14 10:26:38 2016 Corlouer Doriann
## Last update Tue Jan 31 11:15:29 2017 Corlouer Doriann
##

CC	=	gcc

CFLAGS  =       -ansi -pedantic -g -I. -Wall -Wextra -Wfloat-equal
CFLAGS  +=      -Wwrite-strings -Wpointer-arith -Wcast-qual
CFLAGS  +=      -Wcast-align -Wshadow -Wredundant-decls
CFLAGS  +=      -Winit-self -Wswitch-default -Wswitch-enum
CFLAGS  +=      -Wundef -Wlogical-op -Winline -Wdouble-promotion

NAME	=	libmy.a

SRC	=	my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_power_rec.c			\
		my_putchar.c			\
		my_putchar_err.c		\
		my_put_nbr.c			\
		my_putstr.c			\
		my_putstr_err.c			\
		my_revstr.c			\
		my_wordtab_show.c		\
		my_square_root.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c			\
		my_strdup.c			\
		my_strsplit.c			\
		my_wordtab_free.c		\
		my_inttohex.c			\
		my_puttohex.c			\
		my_str_shiftleft.c		\
		my_str_stripchar.c		\
		my_str_shiftright.c		\
		my_str_cmpnb.c			\
		my_str_nbstripzeros.c		\
		my_str_extractbychar.c		\
		my_str_excludebychar.c		\
		my_str_append.c			\
		my_itoa.c			\
		my_wordtab_shiftleft.c		\
		my_str_printtonb.c		\
		my_memset.c			\
		my_put_unbr.c			\
		my_put_lnbr.c			\
		my_printf.c			\
		my_ltobase.c			\
		my_realloc.c			\
		my_wordtab_count.c		\
		get_next_line.c			\
		my_fetch_env.c			\
		my_str_replace.c		\
		my_putnstr.c			\
		my_str_findchar.c		\
		my_realloc_clean.c		\
		my_swap_void.c			\
		my_swap_2dvec.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

RMDIR	=	rmdir

CP	=	cp

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rvs $(NAME) $(OBJ)
	$(CP) my.h ../../include/
	$(CP) get_next_line.h ../../include
	$(CP) $(NAME) ../

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../include/my.h
	$(RM) ../../include/get_next_line.h

re:	fclean all

.PHONY:	all clean fclean re
