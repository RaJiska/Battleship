/*
** print_maps.c for navy in /home/rajiska/Epitech/PSU_2016_navy
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 18:47:06 2017 Corlouer Doriann
** Last update Tue Jan 31 18:51:11 2017 Corlouer Doriann
*/

#include "../include/navy.h"

void	print_maps(const t_map *p1, const t_map *p2)
{
  my_putstr("my positions:\n");
  map_show(p1);
  my_putstr("\nenemy's positions:\n");
  map_show(p2);
  my_putchar('\n');
}
