/*
** network_cli_connect.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 16:09:20 2017 Corlouer Doriann
** Last update Thu Feb  2 17:25:46 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int	network_cli_connect(t_network *net, const char *addr, int port)
{
  memset(&net->srv, 0, sizeof(t_sockaddr));
  net->srv.sin_family = AF_INET;
  net->srv.sin_port = htons(port);
  if (inet_pton(AF_INET, addr, &net->srv.sin_addr) <= 0)
  if (connect(net->srv_sck,
	      (struct sockaddr *)&net->srv,
	      sizeof(t_sockaddr)) < 0)
    return FALSE;
  return TRUE;
}
