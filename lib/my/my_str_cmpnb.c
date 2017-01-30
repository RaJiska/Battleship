/*
** my_str_isnblarger.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Wed Oct 26 08:35:38 2016 Corlouer Doriann
** Last update Sat Dec 17 22:46:14 2016 Corlouer Doriann
*/

#include <my.h>

int	my_str_cmpnb(const char *s1, const char *s2)
{
  int	i;
  int	str1_len;
  int	str2_len;

  i = 0;
  str1_len = my_strlen(s1);
  str2_len = my_strlen(s2);
  if (str1_len > str2_len)
    return 1;
  else if (str1_len < str2_len)
    return 2;
  else
    {
      while (i < LARGER_NB(str1_len, str2_len))
	{
	  if (s1[i] > s2[i])
	    return 1;
	  else if (s1[i] < s2[i])
	    return 2;
	  i++;
	}
      return 3;
    }
}
