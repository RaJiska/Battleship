/*
** my_str_nbstripzeros.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 25 18:42:16 2016 Corlouer Doriann
** Last update Wed Oct 26 09:31:10 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_nbstripzeros(char *str)
{
  int	it;

  it = 0;
  while (*(str + it) != '\0')
    {
      if (*(str + it) == '0' && *(str + it + 1) != '\0')
	{
	  my_str_shiftleft(str);
	  it = -1;
	}
      else
	return str;
      it++;
    }
  return str;
}
