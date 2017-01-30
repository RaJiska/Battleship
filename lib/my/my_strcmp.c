/*
** my_strcmp.c for LibMy in /home/rajiska/Epitech/Libs
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:50:29 2016 Corlouer Doriann
** Last update Tue Jan 17 10:11:56 2017 Corlouer Doriann
*/

#include <my.h>

int	my_strcmp(const char *s1, const char *s2)
{
  int	iterator;
  int	result;
  int	max_len;

  if (s1 == NULL && s2 == NULL)
    return 0;
  else if ((s1 == NULL && s2 != NULL) || (s1 != NULL && s2 == NULL))
    return 1;
  iterator = 0;
  max_len = (my_strlen(s1) <= my_strlen(s2)) ? my_strlen(s1) : my_strlen(s2);
  while (iterator < max_len)
    {
      if (*(s1 + iterator) > *(s2 + iterator))
	return 1;
      else if (*(s1 + iterator) < *(s2 + iterator))
	return -1;
      iterator = iterator + 1;
    }
  if (my_strlen(s1) > my_strlen(s2))
    result = 1;
  else if (my_strlen(s1) < my_strlen(s2))
    result = -1;
  else
    result = 0;
  return result;
}
