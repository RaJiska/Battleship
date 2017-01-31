/*
** map_pos_toint.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 10:01:47 2017 Corlouer Doriann
** Last update Tue Jan 31 11:34:28 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	map_pos_toint(const char *coord, t_2DVector *pos)
{
  pos->x = (coord[0] - 65);
  pos->y = (coord[1] - 48 - 1);
}
