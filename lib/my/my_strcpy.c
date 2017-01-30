/*
** my_strcpy.c for Task02 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:50:57 2016 Corlouer Doriann
** Last update Sat Dec 17 22:38:51 2016 Corlouer Doriann
*/

char	*my_strcpy(char *dest, const char *src)
{
  int	iterator;

  iterator = 0;
  while (*(src + iterator) != '\0')
    {
      *(dest + iterator) = *(src + iterator);
      iterator = iterator + 1;
    }
  *(dest + iterator) = '\0';
  return dest;
}
