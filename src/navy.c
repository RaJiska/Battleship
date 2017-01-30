/*
** navy.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 11:15:30 2017 Corlouer Doriann
** Last update Mon Jan 30 16:41:01 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static int	end_game(int end_val)
{
  if (end_val == 1)
    my_putstr("I won\n");
  else if (end_val == 2)
    my_putstr("Ennemy won\n");
  return (end_val - 1);
}

int	navy(t_map *p1, t_map *p2)
{
  int	res;

  wait_connection(&p2->pid);
  while (!(res = game_ended(p1, p2)))
    {
      
    }
  return (end_game(res));
}
