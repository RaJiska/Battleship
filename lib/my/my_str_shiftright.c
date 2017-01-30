/*
** my_str_shiftright.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 25 10:14:03 2016 Corlouer Doriann
** Last update Wed Oct 26 08:33:14 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_shiftright(char *str)
{
  int	it;
  int	str_len;

  str_len = my_strlen(str);
  it = str_len;
  if (str_len <= 0)
    return str;
  while (it >= 0)
    {
      *(str + it + 1) = *(str + it);
      it--;
    }
  return str;
}
