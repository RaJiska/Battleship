/*
** map_int_topos.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 17:38:32 2017 Corlouer Doriann
** Last update Tue Jan 31 18:20:38 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	map_int_topos(char *buffer, const t_2DVector *pos)
{
  buffer[0] = pos->x + 'A';
  buffer[1] = pos->y + '0' + 1;
}
