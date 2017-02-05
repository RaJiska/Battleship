##
## Makefile for navy in /home/rajiska/Epitech/PSU_2016_navy
## 
## Made by Corlouer Doriann
## Login   <corlouer_d@epitech.net>
## 
## Started on  Mon Jan 30 09:34:42 2017 Corlouer Doriann
## Last update Sun Feb  5 16:32:23 2017 Corlouer Doriann
##

CC      =	gcc

CFLAGS	=	-I../
CFLAGS  +=	-ansi -pedantic -ggdb -Wall -Wextra -Wfloat-equal
CFLAGS  +=	-DDEBUG -Wwrite-strings -Wpointer-arith
CFLAGS  +=	-Wcast-align -Wshadow -Wredundant-decls
CFLAGS  +=	-Winit-self -Wswitch-default -Wswitch-enum
CFLAGS  +=	-Wundef -Wlogical-op -Winline -Wdouble-promotion

LFLAGS  =	-L../lib/my -lmy

NAME    =	navy

SRC     =	src/main.c				\
		src/navy.c				\
		src/game_ended.c			\
		src/wait_connection.c			\
		src/print_maps.c			\
		src/receive/receive_atck.c		\
		src/receive/receive_hit.c		\
		src/receive/receive_miss.c		\
		src/network/network_srv_accept.c	\
		src/network/network_cli_connect.c	\
		src/network/network_send.c		\
		src/network/network_receive.c		\
		src/map/map_create.c			\
		src/map/map_show.c                      \
		src/map/map_pos_isvalid.c               \
		src/map/map_pos_toint.c                 \
		src/map/map_int_topos.c			\
		src/map/map_destroy.c

OBJ     =       $(SRC:.c=.o)

ifeq ($(OS), Windows_NT)
  RM	=	del /f /Q
  CP	=	copy /Y
  CFLAGS	+=	-DEPITECH_WINDOWS
  OBJ	:=	$(subst /,\\, $(OBJ))
  LFLAGS	+=	-lws2_32
  NAME	:=	$(addsuffix .exe, $(NAME))
else
  RM	=	rm -f
  CP	=	cp -p
endif

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAGS)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all $(NAME) clean fclean re
