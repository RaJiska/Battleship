/*
** my_put_nbr.c for Task07 in /home/rajiska/Epitech/CPool_Day07
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 11 10:25:10 2016 Corlouer Doriann
** Last update Fri Oct 14 09:08:57 2016 Corlouer Doriann
*/

#include <my.h>

int	get_base_divisor(int nb)
{
  int	coeff;

  coeff = 1;
  while ((nb / coeff) > 9)
    {
      coeff = coeff * 10;
    }
  return coeff;
}

int	my_put_nbr(int nb)
{
  int	d_coeff;
  int	m_coeff;
  int	tmp_val;

  m_coeff = 10;
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  d_coeff = get_base_divisor(nb);
  while (d_coeff >= 1)
    {
      tmp_val = nb / d_coeff % m_coeff;
      d_coeff = d_coeff / 10;
      my_putchar(tmp_val + 48);
    }
  return 0;
}
