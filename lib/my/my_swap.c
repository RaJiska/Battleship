/*
** my_swap.c for Task02 in /home/corlouer_d/Development/Epitech/CPool_Day04
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct  6 07:08:37 2016 Corlouer Doriann
** Last update Thu Oct  6 07:08:59 2016 Corlouer Doriann
*/

int	my_swap(int *a, int *b)
{
  int	tmpVal;

  tmpVal = *a;
  *a = *b;
  *b = tmpVal;
  return 0;
}
