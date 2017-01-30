/*
** my_putchar.c for LibMy in /home/rajiska/Epitech/CPool_Day07/lib/tmp
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Wed Oct 12 12:12:42 2016 Corlouer Doriann
** Last update Sat Oct 15 17:43:27 2016 Corlouer Doriann
*/

#include <unistd.h>

void	my_putchar_err(char c)
{
  write(2, &c, 1);
}
