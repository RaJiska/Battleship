/*
** signal_send.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 15:09:07 2017 Corlouer Doriann
** Last update Mon Jan 30 16:56:35 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	signal_send(pid_t pid, int count_usr1, int count_usr2)
{
  while (count_usr2-- > 0)
    kill(pid, SIGUSR2);
  while (count_usr1-- > 0)
    kill(pid, SIGUSR1);
}
