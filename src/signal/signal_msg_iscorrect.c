/*
** signal_msg_iscorrect.c for navy in /home/PSU_2016_navy/src/signal
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 18:07:26 2017 Corlouer Doriann
** Last update Sat Feb 11 11:55:51 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int		signal_msg_iscorrect(void)
{
  return (g_sigvalue >= NAVY_SIG_MAX);
}
