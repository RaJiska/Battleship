/*
** wait_connection.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 13:53:44 2017 Corlouer Doriann
** Last update Mon Jan 30 15:50:56 2017 Corlouer Doriann
*/

#include "../include/navy.h"

void	wait_connection(pid_t *pid)
{
  while (g_sigvalue == (-1))
    usleep(50000);
  *pid = g_sigvalue;
}
