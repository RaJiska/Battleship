/*
** my_str_append.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 31 10:43:45 2016 Corlouer Doriann
** Last update Mon Oct 31 10:51:40 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_append(char *s, char c)
{
  int	slen;

  slen = my_strlen(s);
  s[slen] = c;
  s[slen + 1] = '\0';
  return s;
}
