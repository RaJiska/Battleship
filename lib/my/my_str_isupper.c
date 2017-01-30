/*
** my_str_isupper.c for Task14 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:52:28 2016 Corlouer Doriann
** Last update Sat Dec 17 22:42:23 2016 Corlouer Doriann
*/

int	my_str_isupper(const char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (!(*(str + iterator) >= 'A' && *(str + iterator) <= 'Z'))
	return 0;
      iterator++;
    }
  return 1;
}
