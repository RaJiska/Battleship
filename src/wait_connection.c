/*
** wait_connection.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 13:53:44 2017 Corlouer Doriann
** Last update Mon Jan 30 17:39:52 2017 Corlouer Doriann
*/

#include "../include/navy.h"

void	wait_connection(pid_t *pid)
{
  my_putstr("waiting for enemy connexion...\n");
  while (g_sigvalue == (-1))
    usleep(50000);
  my_putstr("enemy connected\n\n");
  *pid = g_sigvalue;
  g_sigvalue = 0;
}
