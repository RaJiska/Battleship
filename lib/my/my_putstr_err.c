/*
** my_putstr.c for Task03 in /home/corlouer_d/Development/Epitech/CPool_Day04
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct  6 07:30:01 2016 Corlouer Doriann
** Last update Tue Dec  6 08:47:10 2016 Corlouer Doriann
*/

#include <my.h>

int	my_putstr_err(const char *str)
{
  while (*str != '\0')
    {
      my_putchar_err(*str);
      str = str + 1;
    }
  return 0;
}
