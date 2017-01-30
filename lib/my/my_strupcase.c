/*
** my_strupcase.c for Task08 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:53:57 2016 Corlouer Doriann
** Last update Mon Oct 10 20:53:59 2016 Corlouer Doriann
*/

char	*my_strupcase(char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (*(str + iterator) >= 97 && *(str + iterator) <= 122)
	*(str + iterator) = (*(str + iterator)) - 32;
      iterator = iterator + 1;
    }
  return str;
}
