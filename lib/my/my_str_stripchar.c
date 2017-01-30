/*
** my_str_stripchar.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 25 10:11:45 2016 Corlouer Doriann
** Last update Tue Oct 25 10:58:28 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_stripchar(char *str, char c)
{
  int	it;

  it = 0;
  while (*(str + it) != '\0')
    {
      if (*(str + it) == c)
	{
	  str = my_str_shiftleft(str + it);
	  it = -1;
	}
      it++;
    }
  return str;
}
