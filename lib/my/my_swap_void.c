/*
** my_swap_void.c for Libmy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 10:49:26 2017 Corlouer Doriann
** Last update Tue Jan 31 10:50:31 2017 Corlouer Doriann
*/

void	my_swap_void(void **a, void **b)
{
  void	*bak;

  bak = *a;
  *a = *b;
  *b = bak;
}
