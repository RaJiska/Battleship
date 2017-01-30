/*
** my_itoa.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Oct 31 10:34:53 2016 Corlouer Doriann
** Last update Thu Nov 17 13:46:32 2016 Corlouer Doriann
*/

#include <my.h>

static int	get_base_divisor(int nb)
{
  int		coeff;

  coeff = 1;
  while ((nb / coeff) > 9)
    coeff = coeff * 10;
  return coeff;
}

char	*my_itoa(int nb, char *s)
{
  int	d_coeff;
  int	m_coeff;
  int	tmp_val;

  m_coeff = 10;
  if (nb < 0)
    {
      nb = nb * (-1);
      s = my_str_append(s, '-');
    }
  d_coeff = get_base_divisor(nb);
  while (d_coeff >= 1)
    {
      tmp_val = nb / d_coeff % m_coeff;
      d_coeff = d_coeff / 10;
      s = my_str_append(s, tmp_val + 48);
    }
  return s;
}
