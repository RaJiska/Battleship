/*
** my_str_islower.c for Task13 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:51:37 2016 Corlouer Doriann
** Last update Sat Dec 17 22:42:36 2016 Corlouer Doriann
*/

int	my_str_islower(const char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (!(*(str + iterator) >= 'a' && *(str + iterator) <= 'z'))
	return 0;
      iterator++;
    }
  return 1;
}
