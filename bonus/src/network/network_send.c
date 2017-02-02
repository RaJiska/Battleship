/*
** network_send.c for navy in /home/PSU_2016_navy/bonus/src/network
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Feb  2 15:37:32 2017 Corlouer Doriann
** Last update Thu Feb  2 18:25:10 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static void	assemble_msg(char *buf, int msg_type, const t_2DVector *vec)
{
  char		buffer[11];

  my_itoa(msg_type, buf);
  buf[strlen(buf)] = '|';
  memset(&buffer[0], 0, 11);
  my_itoa(vec->x, &buffer[0]);
  strcat(buf, &buffer[0]);
  memset(&buffer[0], 0, 11);
  my_itoa(vec->y, &buffer[0]);
  strcat(buf, &buffer[0]);
}

int	network_send(int sck, int msg_type, const t_2DVector *vec)
{
  char	buffer[32];
  int	len;

  assemble_msg(&buffer[0], msg_type, vec);
  memset(&buffer[0], 0, 31);
  len = strlen(buffer);
  if (send(sck, &buffer[0], len, 0) < 0)
    return FALSE;
  return TRUE;
}
