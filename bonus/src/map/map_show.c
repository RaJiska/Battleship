/*
** map_show.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:51:27 2017 Corlouer Doriann
** Last update Mon Jan 30 15:51:46 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static void	print_header()
{
  int		it;

  it = 0;
  my_putstr(" |");
  while (it < NAVY_MAP_H)
    {
      if (it > 0)
	my_putchar(' ');
      my_putchar('A' + it);
      it++;
    }
  my_putchar('\n');
  my_putstr("-+");
  it = 0;
  while (it < (NAVY_MAP_H * 2 - 1))
    {
      my_putchar('-');
      it++;
    }
  my_putchar('\n');
}

static void	print_line(const char *s)
{
  int		it;

  it = 0;
  while (s[it] != 0)
    {
      if (it > 0)
	my_putchar(' ');
      my_putchar(s[it]);
      it++;
    }
}

void	map_show(const t_map *map)
{
  int	it;

  it = 0;
  print_header(map);
  while (it < NAVY_MAP_H)
    {
      my_putchar(it + 48 + 1);
      my_putchar('|');
      print_line(map->map[it]);
      my_putchar('\n');
      it++;
    }
}
