/*
** my_isneg.c for Task04 in /home/rajiska/Epitech/CPool_Day03
** 
** Made by Doriann "Ra'Jiska" Corlouër
** Login   <doriann.corlouer@epitech.eu>
** 
** Started on  Sun Oct  9 22:39:48 2016 Doriann "Ra'Jiska" Corlouër
** Last update Sat Oct 15 21:37:16 2016 Corlouer Doriann
*/

#include <my.h>

int my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return 0;
}
