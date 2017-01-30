/*
** my_str_shiftleft.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 25 10:14:03 2016 Corlouer Doriann
** Last update Tue Oct 25 10:20:27 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_shiftleft(char *str)
{
  int	it;
  int	str_len;

  it = 0;
  str_len = my_strlen(str);
  if (str_len <= 0)
    return str;
  while (it < str_len)
    {
      *(str + it) = *(str + it + 1);
      it++;
    }
  return str;
}
