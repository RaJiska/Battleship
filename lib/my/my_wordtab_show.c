/*
** my_show_wordtab.c for Task06 in /home/rajiska/Epitech/CPool_Day08
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Wed Oct 12 10:56:00 2016 Corlouer Doriann
** Last update Fri Jan  6 15:21:01 2017 Corlouer Doriann
*/

#include <my.h>

void	my_wordtab_show(const char **arr)
{
  int	iterator;

  iterator = 0;
  while (arr[iterator] != 0)
    {
      my_putstr(arr[iterator]);
      my_putchar('\n');
      iterator++;
    }
}
