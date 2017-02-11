/*
** signal_setup.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/signal
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 14:22:03 2017 Corlouer Doriann
** Last update Sat Feb 11 16:35:08 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static void	signal_handle(int signo, siginfo_t *info, void *cntx)
{
  (void)cntx;
  if (signo == SIGUSR1)
    g_sigvalue *= 10;
  else if (signo == SIGUSR2)
    {
      if (g_sigvalue == (-1))
	g_sigvalue = info->si_pid;
      else
	g_sigvalue += 1;
    }
}

int			signal_setup(void)
{
  struct sigaction	sa;

  g_sigvalue = (-1);
  sigemptyset(&sa.sa_mask);
  sa.sa_sigaction = &signal_handle;
  sa.sa_flags = SA_NODEFER | SA_SIGINFO;
  if (sigaction(SIGUSR1, &sa, NULL) == (-1))
    return FALSE;
  if (sigaction(SIGUSR2, &sa, NULL) == (-1))
    return FALSE;
  return TRUE;
}
