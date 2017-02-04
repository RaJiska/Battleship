/*
** receive_atck.c for navy in /home/PSU_2016_navy/src/receive
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 15:02:16 2017 Corlouer Doriann
** Last update Sat Feb  4 16:24:39 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void		receive_atck(const char *msg, t_map *p1, int sendback)
{
  t_2DVector	pos;
  char		buffer[13];

  pos.y = msg[2] - 48;
  pos.x = msg[1] - 48;
  map_int_topos(&buffer[0], &pos);
  if (p1->map[pos.y][pos.x] != NAVY_MAP_VOID &&
      p1->map[pos.y][pos.x] != NAVY_MAP_MISS &&
      p1->map[pos.y][pos.x] != NAVY_MAP_HIT)
    {
      network_send(sendback, NAVY_SIG_HIT, &pos);
      p1->map[pos.y][pos.x] = NAVY_MAP_HIT;
      my_strcpy(&buffer[2], ": hit\n\n");
    }
  else
    {
      network_send(sendback, NAVY_SIG_MISS, &pos);
      p1->map[pos.y][pos.x] = NAVY_MAP_MISS;
      my_strcpy(&buffer[2], ": missed\n\n");
    }
  my_putstr(&buffer[0]);
}
