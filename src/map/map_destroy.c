/*
** map_destroy.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:57:46 2017 Corlouer Doriann
** Last update Mon Jan 30 10:20:46 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	map_destroy(t_map **map)
{
  int	it;

  it = 0;
  while (it < NAVY_MAP_H)
    {
      free((*map)->map[it]);
      it++;
    }
  free((*map)->map);
  free(*map);
  *map = NULL;
}
