/*
** network_receive.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 16:07:22 2017 Corlouer Doriann
** Last update Fri Feb  3 10:53:50 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

char	*network_receive(int sck)
{
  int	len;
  char	*buffer;

  buffer = malloc(sizeof(char) * (NAVY_NET_MXSZ + 1));
  if ((len = recv(sck, &buffer[0], NAVY_NET_MXSZ, 0)) < 0)
    return NULL;
  buffer[len] = 0;
  return NULL;
}
