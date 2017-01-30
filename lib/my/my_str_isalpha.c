/*
** my_str_isalpha.c for Task11 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:51:13 2016 Corlouer Doriann
** Last update Sat Dec 17 22:41:54 2016 Corlouer Doriann
*/

#include <my.h>

int	my_str_isalpha(const char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      if (!((*(str + i) >= 'a' && *(str + i) <= 'z')
	    || (*(str + i) >= 'A' && *(str + i) <= 'Z')))
	return 0;
      i = i + 1;
    }
  return 1;
}
