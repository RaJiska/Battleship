/*
** my_find_prime_sup.c for Task07 in /home/rajiska/Epitech/CPool_Day05
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 10 20:57:44 2016 Corlouer Doriann
** Last update Mon Oct 10 21:42:03 2016 Corlouer Doriann
*/

int	my_is_prime2(int nb)
{
  int	nb_cpy;

  nb_cpy = nb;
  if (nb == 1 || nb == 0)
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

int	my_find_prime_sup(int nb)
{
  while (!my_is_prime2(nb))
    {
      nb = nb + 1;
    }
  return nb;
}
