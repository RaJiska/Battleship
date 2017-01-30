/*
** my_str_isprintable.c for Task15 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:52:11 2016 Corlouer Doriann
** Last update Sat Dec 17 22:42:53 2016 Corlouer Doriann
*/

int	my_str_isprintable(const char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (*(str + 1) <= 31)
	return 0;
      iterator++;
    }
  return 1;
}
