/*
** my_swap_2dvec.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Jan 31 11:13:31 2017 Corlouer Doriann
** Last update Tue Jan 31 11:17:17 2017 Corlouer Doriann
*/

#include "my.h"

void		my_swap_2dvec(t_2DVector *a, t_2DVector *b)
{
  t_2DVector	bak;

  bak.x = a->x;
  bak.y = a->y;
  a->x = b->x;
  a->y = b->y;
  b->x = bak.x;
  b->y = bak.y;
}
