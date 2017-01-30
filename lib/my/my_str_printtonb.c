/*
** my_str_printtonb.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Nov  3 09:03:08 2016 Corlouer Doriann
** Last update Thu Nov  3 09:11:39 2016 Corlouer Doriann
*/

#include <my.h>

void	my_str_printtonb(char *s)
{
  int	it;

  it = 0;
  while (*(s + it) != '\0')
    {
      if (it != 0)
	my_putchar(' ');
      my_put_nbr(*(s + it));
      it++;
    }
  my_putchar('\n');
}
