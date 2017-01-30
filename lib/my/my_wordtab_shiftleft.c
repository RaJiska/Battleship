/*
** my_wordtab_shiftleft.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Oct 28 17:38:41 2016 Corlouer Doriann
** Last update Fri Oct 28 17:41:35 2016 Corlouer Doriann
*/

char	**my_wordtab_shiftleft(char **tab)
{
  int	it;

  it = 0;
  if (tab[0] == 0)
    return tab;
  while (tab[it] != 0)
    {
      tab[it] = tab[it + 1];
      it++;
    }
  return tab;
}
