/*
** my_free_wordtab.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct 20 11:43:15 2016 Corlouer Doriann
** Last update Fri Jan  6 15:18:07 2017 Corlouer Doriann
*/

#include <stdlib.h>

void	my_wordtab_free(char **wordtab)
{
  int	it;

  it = 0;
  while (wordtab[it] != 0)
    {
      free(wordtab[it]);
      wordtab[it] = NULL;
      it++;
    }
  free(wordtab);
  wordtab = NULL;
}
