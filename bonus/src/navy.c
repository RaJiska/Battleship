/*
** navy.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 11:15:30 2017 Corlouer Doriann
** Last update Thu Feb  2 17:05:27 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static void	get_consequences(t_map *p1, t_map *p2)
{
  while (!signal_msg_iscorrect())
    usleep(NAVY_MSG_DELAY);
  if ((g_sigvalue / NAVY_SIG_MAX) == NAVY_SIG_ATCK)
    receive_atck(p1, p2->pid);
  else if ((g_sigvalue / NAVY_SIG_MAX) == NAVY_SIG_HIT)
    receive_hit(p2);
  else if ((g_sigvalue / NAVY_SIG_MAX) == NAVY_SIG_MISS)
    receive_miss(p2);
  g_sigvalue = 0;
}

static void	send_input(pid_t pid)
{
  char		*line;
  t_2DVector	pos;

  my_putstr("attack: ");
  while (!map_pos_isvalid(line = get_next_line(0)))
    {
      my_putstr_err("wrong position\n");
      my_putstr("attack: ");
      free(line);
    }
  map_pos_toint(line, &pos);
  signal_send(pid, NAVY_SIG_ATCK, &pos);
  free(line);
}

static int	end_game(int end_val)
{
  if (end_val == 1)
    my_putstr("I won\n");
  else if (end_val == 2)
    my_putstr("Enemy won\n");
  return (end_val - 1);
}

int		navy(t_map *p1, t_map *p2, const char *addr, int port)
{
  int		res;
  char		turn;
  t_network	net;

  turn = ((p1->player_no == 1) ? 1 : 0);
  my_printf("my_pid: %d\n", getpid());
  if (wait_connection(p1->player_no, &net, addr, port) != 0)
    return 84;
  while (!(res = game_ended(p1, p2)))
    {
      if (turn == 1 || turn == 0)
	print_maps(p1, p2);
      if (turn == p1->player_no)
	send_input(p2->pid);
      else
	my_putstr("waiting for enemy's attack...\n");
      get_consequences(p1, p2);
      turn = ((turn == 1 || turn == 0) ? 2 : 1);
    }
  print_maps(p1, p2);
  return (end_game(res));
}
