##
## Makefile for navy in /home/rajiska/Epitech/PSU_2016_navy
## 
## Made by Corlouer Doriann
## Login   <corlouer_d@epitech.net>
## 
## Started on  Mon Jan 30 09:34:42 2017 Corlouer Doriann
## Last update Mon Jan 30 09:36:17 2017 Corlouer Doriann
##

CC      =	gcc

CFLAGS  =	-ansi -pedantic -ggdb -Wall -Wextra -Wfloat-equal
CFLAGS  +=	-DDEBUG -Wwrite-strings -Wpointer-arith
CFLAGS  +=	-Wcast-align -Wshadow -Wredundant-decls
CFLAGS  +=	-Winit-self -Wswitch-default -Wswitch-enum
CFLAGS  +=	-Wundef -Wlogical-op -Winline -Wdouble-promotion

LFLAGS  =	-Llib/my -lmy

NAME    =	navy

RM      =	rm -f

SRC     =	src/main.c

OBJ     =       $(SRC:.c=.o)

all:	libs $(NAME)

libs:
	$(MAKE) -C lib/my all

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAGS)

clean:
	$(MAKE) -C lib/my clean
	$(RM) $(OBJ)

fclean:
	$(MAKE) -C lib/my fclean
	$(RM) $(OBJ)
	$(RM) $(NAME)

re:	fclean all
