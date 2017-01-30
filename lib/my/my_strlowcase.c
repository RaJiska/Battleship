/*
** my_strlowcase.c for Task09 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:52:43 2016 Corlouer Doriann
** Last update Mon Oct 10 20:52:45 2016 Corlouer Doriann
*/

char	*my_strlowcase(char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (*(str + iterator) >= 65 && *(str + iterator) <= 90)
	*(str + iterator) = (*(str + iterator)) + 32;
      iterator = iterator + 1;
    }
  return str;
}
