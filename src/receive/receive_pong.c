/*
** receive_pong.c for navy in /home/PSU_2016_navy/src/receive
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Sat Feb 11 11:17:16 2017 Corlouer Doriann
** Last update Sat Feb 11 13:22:10 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

void	receive_pong(void)
{
  while (g_sigvalue != 1)
    usleep(NAVY_CHK_DELAY);
  --g_sigvalue;
}
