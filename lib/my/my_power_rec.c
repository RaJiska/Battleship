/*
** my_power_rec.c for Task03 in /home/rajiska/Epitech/CPool_Day05
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:58:40 2016 Corlouer Doriann
** Last update Mon Oct 10 20:58:42 2016 Corlouer Doriann
*/

int	my_power_rec(int nb, int p)
{
  int	result;

  result = 0;
  if (result == 0 && p == 0)
    {
      return 1;
    }
  if (result == 0 && p < 0)
    {
      return 0;
    }
  if (p != 0)
    {
      result = result + my_power_rec(nb, p - 1) * nb;
    }
  return result;
}
