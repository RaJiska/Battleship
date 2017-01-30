/*
** game_ended.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 11:19:38 2017 Corlouer Doriann
** Last update Mon Jan 30 16:41:28 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static char	max_hits_reached(int count)
{
  if (count >= (NAVY_SHIP_XS + NAVY_SHIP_S + NAVY_SHIP_M + NAVY_SHIP_L))
    return TRUE;
  return FALSE;
}

static int	count_hits(const t_map *map)
{
  int		count;
  int		i;
  int		j;

  count = i = 0;
  while (i < NAVY_MAP_H)
    {
      j = 0;
      while (j < NAVY_MAP_W)
	{
	  if (map->map[i][j] == 'x')
	    count++;
	  j++;
	}
      i++;
    }
  return count;
}

int	game_ended(const t_map *p1, const t_map *p2)
{
  int	count_p1;
  int	count_p2;

  count_p1 = count_hits(p1);
  count_p2 = count_hits(p2);
  if (max_hits_reached(count_p1) || max_hits_reached(count_p2))
    {
      if (count_p1 < count_p2)
	return 1;
      else if (count_p1 > count_p2)
	return 2;
    }
  return FALSE;
}
