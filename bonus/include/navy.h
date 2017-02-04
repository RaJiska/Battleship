/*
** navy.h for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:47:42 2017 Corlouer Doriann
** Last update Sat Feb  4 21:56:34 2017 Corlouer Doriann
*/

#ifndef NAVY_H_
# define NAVY_H_

# ifdef NAVY_WINDOWS
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
# else
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
# endif
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "my.h"

#define NAVY_VERSION	"1.0"
#define NAVY_SIG_MIN	100
#define NAVY_SIG_ATCK	1
#define NAVY_SIG_HIT	2
#define	NAVY_SIG_MISS	3
#define NAVY_SIG_MAX	1000
#define NAVY_MAP_H	8
#define NAVY_MAP_W	8
#define NAVY_SHIP_XS	2
#define NAVY_SHIP_S	3
#define NAVY_SHIP_M	4
#define NAVY_SHIP_L	5
#define NAVY_MSG_DELAY	10000
#define NAVY_MAP_VOID	'.'
#define	NAVY_MAP_HIT	'x'
#define NAVY_MAP_MISS	'o'
#define	NAVY_NET_RFRSH	50000
#define	NAVY_NET_MXSZ	128
#define NAVY_NET_PORT	1111

typedef struct sockaddr_in t_sockaddr;

typedef struct	s_map
{
  int		sck;
  int		player_no;
  char		**map;
}		t_map;

typedef struct	s_network
{
  t_sockaddr	srv;
  t_sockaddr	cli;
  socklen_t	sck_sz;
  int		srv_sck;
  int		cli_sck;
  int		active_sck;
}		t_network;

int	navy(t_map *p1, t_map *p2, const char *addr, int port);
int	game_ended(const t_map *p1, const t_map *p2);
int	wait_connection(int pno, t_network *net, const char *addr, int port);
void	print_maps(const t_map *p1, const t_map *p2);
void	receive_atck(const char *msg, t_map *p1, pid_t sendback);
void	receive_hit(const char *msg, t_map *p2);
void	receive_miss(const char *msg, t_map *p2);
int	network_srv_accept(t_network *net, int port);
int	network_cli_connect(t_network *net, const char *addr, int port);
int	network_send(int sck, int msg_type, const t_2DVector *vec);
char	*network_receive(int sck);
int	signal_setup(void);
void	signal_send(pid_t pid, int msg_type, t_2DVector *vec);
int	signal_msg_iscorrect(void);
t_map	*map_create(const int fd, int player_no);
void	map_show(const t_map *map);
int	map_pos_isvalid(char *pos);
void	map_pos_toint(const char *coord, t_2DVector *pos);
void	map_int_topos(char *buffer, const t_2DVector *pos);
void	map_destroy(t_map **map);

#endif
