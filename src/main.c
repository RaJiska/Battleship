/*
** main.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:38:07 2017 Corlouer Doriann
** Last update Mon Jan 30 10:55:51 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static int	exit_on_err(int fd, const char *s)
{
  my_putstr_err(s);
  if (fd > (-1))
    close(fd);
  return 84;
}

static int	needs_help(int argc, char **argv)
{
  int		it;

  it = 1;
  while (it < argc)
    {
      if (my_strcmp(argv[it], "-h") == 0)
	{
	  my_printf("USAGE\n\t%s [first_player_pid] navy_positions\n", argv[0]);
	  my_printf("DESCRIPTION\n\tfirst_player_pid\tonly for the 2nd player.");
	  my_printf(" pid of the first player.\n\tnavy_positions\t\t");
	  my_printf("file representing the positions of the ships.\n");
	  return TRUE;
	}
      it++;
    }
  return FALSE;
}

int	main(int argc, char **argv)
{
  int	fd;
  t_map	*map;

  if (argc > 3 || argc < 2)
    return (exit_on_err((-1), "Arg Error.\n"));
  if (needs_help(argc, argv))
    return 0;
  fd = open(((argc == 3) ? argv[2] : argv[1]), O_RDONLY);
  close(fd);
  return 0;
}
