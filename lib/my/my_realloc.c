/*
** my_realloc.c for Libmy in /home/rajiska/Epitech/CPE_2016_BSQ/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Dec 15 12:56:52 2016 Corlouer Doriann
** Last update Thu Jan 12 12:12:57 2017 Corlouer Doriann
*/

#include <stdlib.h>
#include <my.h>

char	*my_realloc(char *s, unsigned int size)
{
  char	*str;

  str = malloc(sizeof(char) * size);
  if (s == NULL)
    return str;
  my_strcpy(str, s);
  free(s);
  return str;
}
