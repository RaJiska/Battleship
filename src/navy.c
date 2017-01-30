/*
** navy.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 11:15:30 2017 Corlouer Doriann
** Last update Mon Jan 30 18:35:59 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static void	get_consequences(t_map *p1, t_map *p2)
{
  while (!signal_msg_iscorrect())
    usleep(10000);
}

static void	send_input(pid_t pid)
{
  char		*line;
  t_2DVector	pos;

  while (!map_pos_isvalid(line = get_next_line(0)))
    {
      my_putstr_err("wrong position\n");
      free(line);
    }
  my_printf("attack: %s\n", line);
  map_pos_toint(line, &pos);
  signal_send(pid, NAVY_SIG_ATCK, pos.x);
  signal_send(pid, NAVY_SIG_ATCK, pos.y);
  free(line);
}

static int	end_game(int end_val)
{
  if (end_val == 1)
    my_putstr("I won\n");
  else if (end_val == 2)
    my_putstr("Ennemy won\n");
  return (end_val - 1);
}

int	navy(t_map *p1, t_map *p2, pid_t pid)
{
  int	res;
  char	turn;

  turn = ((p1->player_no == 1) ? 1 : 2);
  my_printf("my_pid: %d\n", getpid());
  ((pid > (-1)) ? signal_send(pid, 1, 0) : wait_connection(&p2->pid));
  while (!(res = game_ended(p1, p2)))
    {
      if (turn == p1->player_no)
	send_input(pid);
      else
	my_putstr("waiting for enemy's attack...\n");
      get_consequences(p1, p2);
      turn = ((turn == 1) ? 2 : 1);
    }
  return (end_game(res));
}
