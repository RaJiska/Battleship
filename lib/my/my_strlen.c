/*
** my_strlen.c for Task04 in /home/corlouer_d/Development/Epitech/CPool_Day04
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct  6 07:45:55 2016 Corlouer Doriann
** Last update Fri Jan 20 20:26:50 2017 Corlouer Doriann
*/

#include <stdlib.h>

int	my_strlen(const char *str)
{
  int	it;

  if (str == NULL)
    return 0;
  it = 0;
  while (*(str + it) != '\0')
    it++;
  return it;
}
