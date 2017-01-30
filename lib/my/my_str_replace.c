/*
** my_str_replace.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Sun Jan  8 19:05:51 2017 Corlouer Doriann
** Last update Mon Jan 16 10:00:44 2017 Corlouer Doriann
*/

#include "my.h"

void	my_str_replace(char *s, const char *from, const char *to)
{
  int	len_f;
  int	len_t;
  int	it;

  if ((s = my_strstr(s, from)) == NULL)
    return;
  len_f = my_strlen(from);
  len_t = my_strlen(to);
  it = 0;
  while (it < len_f)
    {
      if (it < len_t)
	s[it] = to[it];
      else
	my_str_shiftleft((s + 1));
      it++;
    }
  while (it < len_t)
    {
      my_str_shiftright((s + it));
      s[it] = to[it];
      it++;
    }
}
