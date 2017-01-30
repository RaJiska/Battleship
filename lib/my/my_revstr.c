/*
** my_revstr.c for Task04 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:49:47 2016 Corlouer Doriann
** Last update Tue Oct 25 20:50:04 2016 Corlouer Doriann
*/

#include <my.h>
#include <stdlib.h>

char	*my_revstr(char *str)
{
  int	iterator;
  int	str_len;
  char	*buffer;

  iterator = 0;
  str_len = my_strlen(str);
  buffer = malloc(sizeof(char) * (str_len + 1));
  my_strcpy(buffer, str);
  while (iterator < str_len)
    {
      str[iterator] = *(buffer + str_len - (iterator + 1));
      iterator++;
    }
  free(buffer);
  str[iterator] = '\0';
  return str;
}
