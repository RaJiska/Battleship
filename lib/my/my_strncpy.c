/*
** my_strncpy.c for Task03 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:53:22 2016 Corlouer Doriann
** Last update Sat Dec 17 22:39:01 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_strncpy(char *dest, const char *src, int n)
{
  int	iterator;
  int	str_len;

  iterator = 0;
  str_len = my_strlen(src);
  while (iterator < n)
    {
      *(dest + iterator) = *(src + iterator);
      iterator = iterator + 1;
    }
  *(dest + iterator) = (n > str_len) ? '\0' : *(dest + iterator);
  return dest;
}
