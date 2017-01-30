/*
** navy.h for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:47:42 2017 Corlouer Doriann
** Last update Mon Jan 30 10:08:10 2017 Corlouer Doriann
*/

#ifndef NAVY_H_
# define NAVY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "my.h"

#define NAVY_VERSION	"1.0"
#define NAVY_MAP_H	8
#define NAVY_MAP_W	8
#define NAVY_SHIP_XS	2
#define NAVY_SHIP_S	3
#define NAVY_SHIP_M	4
#define NAVY_SHIP_L	5

typedef struct	s_map
{
  int		player_no;
  char		**map;
}		t_map;

typedef struct	s_2DVector
{
  int		x;
  int		y;
}		t_2DVector;

t_map	*map_create(const int fd);
void	map_show(const t_map *map);
int	map_pos_isvalid(const char *pos);
void	map_pos_toint(const char *coord, t_2DVector *pos);
void	map_destroy(t_map **map);

#endif
