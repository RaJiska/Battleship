/*
** wait_connection.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 13:53:44 2017 Corlouer Doriann
** Last update Tue Jan 31 18:45:29 2017 Corlouer Doriann
*/

#include "../include/navy.h"

void	wait_connection(pid_t *pid, pid_t role)
{
  if (role <= (-1))
    my_putstr("waiting for enemy connexion...\n");
  else
    kill(role, SIGUSR2);
  while (g_sigvalue == (-1))
    usleep(50000);
  if (role > (-1))
    my_putstr("successfully connected\n\n");
  else
    {
      my_putstr("enemy connected\n\n");
      kill(g_sigvalue, SIGUSR2);
    }
  *pid = ((role <= (-1)) ? g_sigvalue : role);
  g_sigvalue = 0;
}
