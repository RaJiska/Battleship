/*
** my_is_prime.c for Task06 in /home/rajiska/Epitech/CPool_Day05
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:57:57 2016 Corlouer Doriann
** Last update Mon Oct 10 21:14:17 2016 Corlouer Doriann
*/

int	my_is_prime(int nb)
{
  int	nb_cpy;

  nb_cpy = nb;
  if (nb <= 1)
    {
      return 0;
    }
  while (nb_cpy != 1)
    {
      if (nb != nb_cpy && nb % nb_cpy == 0)
	{
	  return 0;
	}
      nb_cpy = nb_cpy - 1;
    }
  return 1;
}
