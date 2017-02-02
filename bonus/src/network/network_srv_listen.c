/*
** network_srv_listen.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 14:32:48 2017 Corlouer Doriann
** Last update Thu Feb  2 15:33:03 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int	network_srv_listen(t_network *net, int port)
{
  net->sck_sz = sizeof(t_sockaddr);
  memset(&net->srv, 0, sizeof(t_sockaddr));
  net->srv.sin_family = AF_INET;
  net->srv.sin_addr.s_addr = htonl(INADDR_ANY);
  net->srv.sin_port = port;
  net->srv_sck = socket(AF_INET, SOCK_STREAM, 0);
  if (bind(net->srv_sck,
	   (struct sockaddr *)&net->srv,
	   sizeof(struct sockaddr)) < 0)
    return FALSE;
  if (listen(net->srv_sck, 1) < 0)
    return FALSE;
  net->cli_sck = accept(net->srv_sck,
			(struct sockaddr *)&net->cli,
			&net->sck_sz);
  if (net->cli_sck >= 0)
    printf("Client connected with address %s\n", inet_ntoa(net->cli.sin_addr));
  else
    return FALSE;
  return TRUE;
}
