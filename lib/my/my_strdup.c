/*
** my_strdup.c for Task01 in /home/rajiska/Epitech/CPool_Day08/task01
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Wed Oct 12 09:14:04 2016 Corlouer Doriann
** Last update Sat Dec 17 22:44:20 2016 Corlouer Doriann
*/

#include <my.h>
#include <stdlib.h>

char	*my_strdup(const char *src)
{
  char	*dest;
  int	str_len;

  str_len = my_strlen(src);
  dest = malloc(sizeof(char) * (str_len + 1));
  my_strcpy(dest, src);
  return dest;
}
