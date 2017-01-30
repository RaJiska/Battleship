/*
** my_str_extractbychar.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct 27 14:08:41 2016 Corlouer Doriann
** Last update Thu Oct 27 14:23:56 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_extractbychar(char *s1, char *s2, char delim1, char delim2)
{
  int	it;
  int	beg;
  int	end;

  it = end = 0;
  beg = -1;
  while (*(s1 + it) != '\0')
    {
      if (*(s1 + it) == delim1)
	beg = it;
      else if (beg >= 0 && *(s1 + it) == delim2)
	{
	  end = it;
	  break;
	}
      it++;
    }
  my_strncpy(s2, (s1 + beg), (end - beg + 1));
  return s2;
}
