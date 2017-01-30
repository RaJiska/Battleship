/*
** my_getnbr.c for Task06 in /home/rajiska/Epitech/CPool_Day07/tests
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Tue Oct 11 09:34:53 2016 Corlouer Doriann
** Last update Fri Jan  6 16:05:45 2017 Corlouer Doriann
*/

#include <my.h>
#include <stdlib.h>

static void	set_val_plus_end(char *dest, const char *src)
{
  *dest = *src;
  *(dest + 1) = '\0';
}

static int	cut_clean_buffer(int buf_i, char *buffer)
{
  if (buf_i > 1)
    return 1;
  else
    {
      buffer[1] = '0';
      buffer[2] = '\0';
      return 1;
    }
  return 0;
}

static void	clean_buffer(const char *str, char *buffer)
{
  int	str_i;
  int	buf_i;

  str_i = 0;
  buf_i = 1;
  while (*(str + str_i) != '\0')
    {
      if ((str[str_i] == '+' || str[str_i] == '-'))
	{
	  if (buf_i > 1)
	    return;
	}
      else if ((str[str_i] >= 'a' && str[str_i] <= 'z')
	       || (str[str_i] >= 'A' && str[str_i] <= 'Z'))
	{
	  if (cut_clean_buffer(buf_i, buffer))
	    return;
	}
      else
	{
	  set_val_plus_end((buffer + buf_i), (str + str_i));
	  buf_i = buf_i + 1;
	}
      str_i = str_i + 1;
    }
}

static char	*set_sign(const char *str)
{
  int	str_i;
  int	sign;
  char	*buffer;

  str_i = 0;
  sign = 0;
  buffer = malloc(sizeof(char) * (my_strlen(str) + 2));
  while (*(str + str_i) != '\0')
    {
      if ((*(str + str_i) == '+' || *(str + str_i) == '-'))
	sign = sign + ((*(str + str_i) == '+') ? 1 : (-1));
      else
	{
	  buffer[0] = (sign >= 0) ? '+' : '-';
	  break;
	}
      str_i = str_i + 1;
    }
  return &buffer[0];
}

int	my_getnbr(const char *str)
{
  char	*buffer;
  int	buf_i;
  int	coeff;
  int	result;
  int	max_val;

  coeff = 1;
  result = 0;
  buffer = set_sign(str);
  clean_buffer(str, buffer);
  buf_i = (my_strlen(buffer) - 1);
  while (buf_i > 0)
    {
      max_val = (2147483647 - result);
      if (((buffer[buf_i] - 48) * coeff) > max_val)
	return 0;
      else
	result = result + ((buffer[buf_i] - 48) * coeff);
      coeff = coeff * 10;
      buf_i = buf_i - 1;
    }
  if (buffer[0] == '-')
    result = result * (-1);
  free(buffer);
  return result;
}
