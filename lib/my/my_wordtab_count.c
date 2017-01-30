/*
** my_wordtab_count.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Jan  6 15:21:27 2017 Corlouer Doriann
** Last update Tue Jan 17 18:32:27 2017 Corlouer Doriann
*/

int	my_wordtab_count(char **arr)
{
  int	it;

  it = (-1);
  while (arr[++it] != 0);
  return it;
}
