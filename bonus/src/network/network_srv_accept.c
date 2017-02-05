/*
** network_srv_accept.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 14:32:48 2017 Corlouer Doriann
** Last update Sat Feb  4 16:46:25 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static int	exit_on_err(const char *title)
{
  my_putstr_err(title);
  my_putstr_err(": ");
	#ifndef EPITECH_WINDOWS
  my_putstr_err(strerror(errno));
	#else
	fprintf(stderr, "%d", WSAGetLastError());
	#endif
  my_putchar('\n');
  return FALSE;
}

#ifndef EPITECH_WINDOWS
int	network_srv_accept(t_network *net, int port)
{
  net->sck_sz = sizeof(t_sockaddr);
  memset(&net->srv, 0, sizeof(t_sockaddr));
  net->srv.sin_family = AF_INET;
  net->srv.sin_addr.s_addr = htonl(INADDR_ANY);
  net->srv.sin_port = htons(port);
  net->srv_sck = socket(AF_INET, SOCK_STREAM, 0);
  if (bind(net->srv_sck,
	   (struct sockaddr *)&net->srv,
	   sizeof(struct sockaddr)) < 0)
    return (exit_on_err("Network Error"));
  if (listen(net->srv_sck, 1) < 0)
    return (exit_on_err("Network Error"));
  net->cli_sck = accept(net->srv_sck,
			(struct sockaddr *) &net->cli,
			&net->sck_sz);
  if (net->cli_sck >= 0)
    printf("Client connected with address %s\n", inet_ntoa(net->cli.sin_addr));
  else
    return (exit_on_err("Network Error"));
  return TRUE;
}
#else
int network_srv_accept(t_network *net, int port)
{
	net->sck_sz = sizeof(t_sockaddr);
	if (WSAStartup(MAKEWORD(2, 2), &net->wsadata) != 0)
		return (exit_on_err("Network Error"));
	memset(&net->srv, 0, sizeof(t_sockaddr));
	if ((net->srv_sck = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
		return (exit_on_err("Socket Error"));
	net->srv.sin_family = AF_INET;
	net->srv.sin_addr.s_addr = INADDR_ANY;
	net->srv.sin_port = htons(port);
	if (bind(net->srv_sck, (struct sockaddr *) &net->srv, sizeof(struct sockaddr))
		== SOCKET_ERROR)
		return (exit_on_err("ANetwork Error"));
	if (listen(net->srv_sck, 1) == SOCKET_ERROR)
		return (exit_on_err("Network Error"));
	net->cli_sck = accept(net->srv_sck,
		(struct sockaddr *) &net->cli,
			&net->sck_sz);
	if (net->cli_sck == INVALID_SOCKET)
		return (exit_on_err("Network Error"));
	return TRUE;
}
#endif