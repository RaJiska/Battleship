/*
** my_putnstr.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 16 11:47:36 2017 Corlouer Doriann
** Last update Wed Jan 18 17:33:32 2017 Corlouer Doriann
*/

#include <my.h>

void	my_putnstr(const char *s, int sz)
{
  while (*s != '\0' && sz > 0)
    {
      my_putchar(*s);
      s++;
      sz--;
    }
}
