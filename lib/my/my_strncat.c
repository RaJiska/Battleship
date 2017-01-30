/*
** my_strcat.c for Task02 in /home/rajiska/Epitech/CPool_Day07
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 11 18:00:52 2016 Corlouer Doriann
** Last update Sat Dec 17 22:43:33 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_strncat(char *dest, const char *src, int nb)
{
  int	dest_len;
  int	i;

  dest_len = my_strlen(dest);
  i = 0;
  while (i < nb && src[i] != '\0')
    {
      dest[dest_len + i] = src[i];
      i = i + 1;
    }
  dest[dest_len + i] = '\0';
  return dest;
}
