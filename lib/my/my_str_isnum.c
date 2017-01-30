/*
** my_str_isnum.c for Task12 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:51:53 2016 Corlouer Doriann
** Last update Sat Dec 17 22:42:09 2016 Corlouer Doriann
*/

#include <my.h>

static int	handle_dot(int *dot, char c)
{
  if (c == '.')
    {
      if (!(*dot))
	(*dot)++;
      else
	return FALSE;
    }
  return TRUE;
}

int	my_str_isnum(const char *str)
{
  int	it;
  int	dot;

  it = dot = 0;
  if (*(str + it) == '\0')
    return FALSE;
  if (*(str + it) == '-')
    it++;
  if (*(str + it) == '.')
    return FALSE;
  while (*(str + it) != '\0')
    {
      if (!(*(str + it) >= '0' && *(str + it) <= '9') && *(str + it) != '.')
	return FALSE;
      else
	{
	  if (!handle_dot(&dot, *(str + it)))
	    return FALSE;
	}
      it++;
    }
  return TRUE;
}
