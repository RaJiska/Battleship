/*
** receive_hit.c for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 18:58:01 2017 Corlouer Doriann
** Last update Sat Feb 11 12:59:25 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void		receive_hit(t_map *p2)
{
  t_2DVector	pos;
  char		buffer[10];

  g_sigvalue /= 10;
  pos.y = g_sigvalue % 10;
  g_sigvalue /= 10;
  pos.x = g_sigvalue % 10;
  g_sigvalue = 0;
  map_int_topos(&buffer[0], &pos);
  p2->map[pos.y][pos.x] = NAVY_MAP_HIT;
  my_strcpy(&buffer[2], ": hit\n\n");
  my_putstr(&buffer[0]);
}
