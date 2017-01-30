/*
** my_puttohex.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Oct 21 19:25:43 2016 Corlouer Doriann
** Last update Sat Oct 22 09:39:54 2016 Corlouer Doriann
*/

#include <my.h>

void	my_puttohex(unsigned long hex)
{
  char	buffer[30];

  my_inttohex(hex, &buffer[0]);
  my_putstr(&buffer[0]);
}
