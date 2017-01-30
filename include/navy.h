/*
** navy.h for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:47:42 2017 Corlouer Doriann
** Last update Mon Jan 30 15:51:15 2017 Corlouer Doriann
*/

#ifndef NAVY_H_
# define NAVY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include "my.h"

#define NAVY_VERSION	"1.0"
#define NAVY_PLAYERNR	2
#define NAVY_SIG_HIT	100
#define	NAVY_SIG_MISS	200
#define NAVY_MAP_H	8
#define NAVY_MAP_W	8
#define NAVY_SHIP_XS	2
#define NAVY_SHIP_S	3
#define NAVY_SHIP_M	4
#define NAVY_SHIP_L	5

typedef struct	s_map
{
  pid_t		pid;
  int		player_no;
  char		**map;
}		t_map;

typedef struct	s_2DVector
{
  int		x;
  int		y;
}		t_2DVector;

int	g_sigvalue;

int	navy(t_map *p1, t_map *p2);
int	game_ended(const t_map *p1, const t_map *p2);
void	wait_connection(pid_t *pid);
int	signal_setup(int is_server);
void	signal_send(pid_t pid, int count_usr1, int count_usr2);
t_map	*map_create(const int fd, int player_no, pid_t pid);
void	map_show(const t_map *map);
int	map_pos_isvalid(const char *pos);
void	map_pos_toint(const char *coord, t_2DVector *pos);
void	map_destroy(t_map **map);

#endif
