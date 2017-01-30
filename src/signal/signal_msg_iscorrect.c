/*
** signal_msg_iscorrect.c for navy in /home/PSU_2016_navy/src/signal
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 18:07:26 2017 Corlouer Doriann
** Last update Mon Jan 30 18:28:51 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int	signal_msg_iscorrect(void)
{
  if (g_sigvalue == 0 ||
      !(g_sigvalue >= (NAVY_SIG_ATCK * 100)
       && g_sigvalue < (NAVY_SIG_ATCK * 100 * 2)) ||
      !(g_sigvalue >= (NAVY_SIG_HIT * 100)
       && g_sigvalue < (NAVY_SIG_HIT * 100 * 2)) ||
      !(g_sigvalue >= (NAVY_SIG_MISS * 100)
	&& g_sigvalue < (NAVY_SIG_MISS * 100 * 2)))
    return FALSE;
  return TRUE;
}
