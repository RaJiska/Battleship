/*
** my_str_excludebychar.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Oct 28 08:52:00 2016 Corlouer Doriann
** Last update Fri Oct 28 08:55:58 2016 Corlouer Doriann
*/

#include <my.h>

char	*my_str_excludebychar(char *s1, char *s2, char delim1, char delim2)
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
  my_strncpy(s2, s1, beg);
  my_strcat(s2, s1 + end + 1);
  return s2;
}
