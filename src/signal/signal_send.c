/*
** signal_send.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 15:09:07 2017 Corlouer Doriann
** Last update Sat Feb 11 16:35:00 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static void	send_kill(int pid, int sig)
{
  kill(pid, sig);
  receive_pong();
}

void		signal_send(pid_t pid, int msg_type, t_2DVector *vec)
{
  t_2DVector	vec_cpy;

  while (msg_type-- > 0)
    send_kill(pid, SIGUSR2);
  send_kill(pid, SIGUSR1);
  if (vec != NULL)
    {
      vec_cpy.x = vec->x;
      vec_cpy.y = vec->y;
      while (vec_cpy.x-- > 0)
	send_kill(pid, SIGUSR2);
      send_kill(pid, SIGUSR1);
      while (vec_cpy.y-- > 0)
	send_kill(pid, SIGUSR2);
    }
  else
    send_kill(pid, SIGUSR1);
  send_kill(pid, SIGUSR1);
}
