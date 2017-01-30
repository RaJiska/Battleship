/*
** my_strcat.c for Task02 in /home/rajiska/Epitech/CPool_Day07
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 11 18:00:52 2016 Corlouer Doriann
** Last update Sat Dec 17 22:43:23 2016 Corlouer Doriann
*/

char	*my_strcat(char *dest, const char *src)
{
  int	it_dest;
  int	it_src;

  it_dest = 0;
  it_src = 0;
  while (*(dest + it_dest) != '\0')
    it_dest = it_dest + 1;
  while (*(src + it_src) != '\0')
    {
      *(dest + it_dest) = *(src + it_src);
      it_src = it_src + 1;
      it_dest = it_dest + 1;
    }
  *(dest + it_dest) = '\0';
  return dest;
}
