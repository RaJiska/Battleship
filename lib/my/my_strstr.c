/*
** my_strstr.c for Task05 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:53:38 2016 Corlouer Doriann
** Last update Mon Jan 16 09:59:31 2017 Corlouer Doriann
*/

#include <my.h>

static int	matches(const char *str, const char *to_find, int index)
{
  int		iterator;

  iterator = 0;
  while (*(to_find + iterator) != '\0')
    {
      if (my_strlen(to_find + iterator) > my_strlen(str + index + iterator))
	return 0;
      if (!(*(to_find + iterator) == *(str + index + iterator)))
	return 0;
      iterator++;
    }
  return 1;
}

char	*my_strstr(char *s, const char *to_find)
{
  int	iterator;

  iterator = 0;
  while (*(s + iterator) != '\0')
    {
      if (matches(s, to_find, iterator))
	return (s + iterator);
      iterator++;
    }
  return ((char *)0);
}
