/*
** navy.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 11:15:30 2017 Corlouer Doriann
** Last update Sat Feb  4 16:24:18 2017 Corlouer Doriann
*/

#include "../include/navy.h"

static void	get_consequences(t_map *p1, t_map *p2)
{
  char		*msg;

  if ((msg = network_receive(p1->sck)) == NULL)
    {
      printf("Err Rcv: '%s'\n", strerror(errno));
      return;
    }
  if ((msg[0] - 48) == NAVY_SIG_ATCK)
    receive_atck(msg, p1, p1->sck);
  else if ((msg[1] - 48) == NAVY_SIG_HIT)
    receive_hit(msg, p2);
  else if ((msg[2] - 48) == NAVY_SIG_MISS)
    receive_miss(msg, p2);
  free(msg);
}

static void	send_input(int sck)
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
  network_send(sck, NAVY_SIG_ATCK, &pos);
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
  if (!wait_connection(p1->player_no, &net, addr, port))
    return 84;
  p1->sck = ((p1->player_no == 1) ? net.cli_sck : net.srv_sck);
  p2->sck = ((p2->player_no == 1) ? net.cli_sck : net.srv_sck);
  while (!(res = game_ended(p1, p2)))
    {
      if (turn == 1 || turn == 0)
	print_maps(p1, p2);
      if (turn == p1->player_no)
	send_input(p1->sck);
      else
	my_putstr("waiting for enemy's attack...\n");
      get_consequences(p1, p2);
      turn = ((turn == 1 || turn == 0) ? 2 : 1);
    }
  print_maps(p1, p2);
  return (end_game(res));
}
