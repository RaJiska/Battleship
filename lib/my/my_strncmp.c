/*
** my_strncmp.c for Task07 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:53:05 2016 Corlouer Doriann
** Last update Tue Jan 17 10:11:37 2017 Corlouer Doriann
*/

#include <my.h>

/*
** Needs Proper Fix (-1, 1)
*/

int	my_strncmp(const char *s1, const char *s2, int n)
{
  int	it;
  int	s1_sz;
  int	s2_sz;

  if (s1 == NULL && s2 == NULL)
    return 0;
  else if ((s1 == NULL && s2 != NULL) || (s1 != NULL && s2 == NULL))
    return 1;
  it = 0;
  s1_sz = my_strlen(s1);
  s2_sz = my_strlen(s2);
  if (s2_sz > s1_sz && s2_sz <= n)
    return 1;
  while (s1[it] != 0 && s2[it] != 0 && it < n)
    {
      if (s1[it] > s2[it])
	return 1;
      else if (s1[it] < s2[it])
	return (-1);
      it++;
    }
  if (it != n &&
      ((s1[it] == 0 && s2[it] != 0) || (s2[it] == 0 && s1[it] != 0)))
    return 1;
  return 0;
}
