/*
** receive_miss.c for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 19:03:06 2017 Corlouer Doriann
** Last update Sat Feb  4 20:57:29 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	receive_miss(t_map *p2)
{
  t_2DVector	pos;
  char		buffer[13];

  g_sigvalue /= 10;
  pos.y = g_sigvalue % 10;
  g_sigvalue /= 10;
  pos.x = g_sigvalue % 10;
  map_int_topos(&buffer[0], &pos);
  if (p2->map[pos.y][pos.x] != NAVY_MAP_HIT)
    p2->map[pos.y][pos.x] = NAVY_MAP_MISS;
  my_strcpy(&buffer[2], ": missed\n\n");
  my_putstr(&buffer[0]);
}
