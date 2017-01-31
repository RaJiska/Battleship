/*
** receive_atck.c for navy in /home/PSU_2016_navy/src/receive
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 15:02:16 2017 Corlouer Doriann
** Last update Tue Jan 31 18:24:32 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void		receive_atck(t_map *p1, pid_t sendback)
{
  t_2DVector	pos;
  char		buffer[13];

  g_sigvalue /= 10;
  pos.y = g_sigvalue % 10;
  g_sigvalue /= 10;
  pos.x = g_sigvalue % 10;
  map_int_topos(&buffer[0], &pos);
  if (p1->map[pos.y][pos.x] != '.')
    {
      signal_send(sendback, NAVY_SIG_HIT, &pos);
      p1->map[pos.y][pos.x] = NAVY_MAP_HIT;
      my_strcpy(&buffer[2], ": hit\n\n");
    }
  else
    {
      signal_send(sendback, NAVY_SIG_MISS, &pos);
      p1->map[pos.y][pos.x] = NAVY_MAP_MISS;
      my_strcpy(&buffer[2], ": missed\n\n");
    }
  my_putstr(&buffer[0]);
}
