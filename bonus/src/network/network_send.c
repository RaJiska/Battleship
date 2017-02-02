/*
** network_send.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 15:37:32 2017 Corlouer Doriann
** Last update Thu Feb  2 15:52:27 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int	network_send(int sck, int msg_type, char *msg)
{
  char	*to_send;
  char	buffer[15];
  int	len;

  memset(&buffer[0], 0, 15);
  my_itoa(msg_type, &buffer[0]);
  len = strlen(msg) + strlen(&buffer[0]);
  to_send = malloc(sizeof(char) * (len + 1));
  if (send(sck, to_send, len + 1, 0) < 0)
    {
      free(to_send);
      return FALSE;
    }
  free(to_send);
  return TRUE;
}
