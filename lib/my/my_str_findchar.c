/*
** my_str_findchar.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 16 15:24:40 2017 Corlouer Doriann
** Last update Mon Jan 16 15:25:48 2017 Corlouer Doriann
*/

#include "my.h"

int	my_str_findchar(const char *s, char c)
{
  int	it;

  it = 0;
  while (s[it] != '\0')
    {
      if (s[it] == c)
	return TRUE;
    }
  return FALSE;
}
