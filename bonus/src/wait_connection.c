/*
** wait_connection.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 13:53:44 2017 Corlouer Doriann
** Last update Thu Feb  2 17:06:35 2017 Corlouer Doriann
*/

#include "../include/navy.h"

int	wait_connection(int pno, t_network *net, const char *addr, int port)
{
  if (pno == 1)
    return network_srv_accept(net, port);
  return network_cli_connect(net, addr, port);
}
