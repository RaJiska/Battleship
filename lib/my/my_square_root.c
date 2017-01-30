/*
** my_square_root.c for Task05 in /home/rajiska/Epitech/CPool_Day05
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:58:54 2016 Corlouer Doriann
** Last update Fri Oct 14 09:02:32 2016 Corlouer Doriann
*/

#include <my.h>

int	my_square_root(int nb)
{
  int	iterator;
  float	guess;

  guess = 1.0;
  iterator = 0;
  if (nb == 0)
    return 0;
  while (iterator != 150000)
    {
      guess = (float)guess - (((guess * guess) - nb) / (2 * nb));
      iterator = iterator + 1;
    }
  if (nb == my_power_rec((int)(guess), 2))
    {
      return (int)guess;
    }
  if (nb == my_power_rec((int)(guess + 0.01f), 2))
    {
      return (int)(guess + 0.01f);
    }
  if (nb == my_power_rec((int)(guess - 0.01f), 2))
    {
      return (int)(guess - 0.01f);
    }
  return 0;
}
