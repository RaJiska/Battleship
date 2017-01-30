/*
** my_strcapitalize.c for Task10 in /home/rajiska/Epitech/CPool_Day06
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:50:13 2016 Corlouer Doriann
** Last update Mon Oct 10 20:50:16 2016 Corlouer Doriann
*/

int	entitled_for_upper(char c)
{
  if (c == ' ' || c == '+' || c == '-')
    return 1;
  return 0;
}

char	char_to_upper(char c)
{
  if (c >= 'a' && c <= 'z')
    c = (c - 32);
  return c;
}

char	*my_strcapitalize(char *str)
{
  int	iterator;

  iterator = 0;
  while (*(str + iterator) != '\0')
    {
      if (iterator == 0 || entitled_for_upper(*(str + iterator - 1)))
	*(str + iterator) = char_to_upper(*(str + iterator));
      iterator = iterator + 1;
    }
  return str;
}
