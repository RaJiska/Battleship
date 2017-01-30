/*
** my_tohex.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Oct 21 08:40:03 2016 Corlouer Doriann
** Last update Sat Dec 17 23:06:25 2016 Corlouer Doriann
*/

#include <my.h>

static int	number_to_letter(long nb, int capital)
{
  int		letter;

  letter = ((capital) ? 'A' : 'a');
  while ((letter - ((capital) ? 55 : 87)) != nb)
    letter++;
  return letter;
}

void	my_ltobase(long value, int base, int capital, char *buff)
{
  int	remain;
  int	index;

  remain = -1;
  index = 0;
  while (value > 0)
    {
      remain = value % base;
      value = value / base;
      if (remain >= 10)
	buff[index] = number_to_letter(remain, capital);
      else
	buff[index] = remain + 48;
      index++;
    }
  my_revstr(&buff[0]);
}
