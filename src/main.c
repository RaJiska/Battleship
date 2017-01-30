/*
** main.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:38:07 2017 Corlouer Doriann
** Last update Mon Jan 30 09:49:42 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static int	exit_on_err(int fd, const char *s)
{
  my_putstr_err(s);
  if (fd > (-1))
    close(fd);
  return 84;
}

int	main(int argc, char **argv)
{
  int	fd;
  t_map	*map;

  if (argc > 3 || argc < 2)
    return (exit_on_err((-1), "Arg Error.\n"));
  fd = open(((argc == 3) ? argv[2] : argv[1]), O_RDONLY);
  close(fd);
  return 0;
}
