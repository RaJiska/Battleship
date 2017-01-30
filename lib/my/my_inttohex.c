/*
** my_tohex.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Fri Oct 21 08:40:03 2016 Corlouer Doriann
** Last update Sat Oct 22 09:38:41 2016 Corlouer Doriann
*/

#include <my.h>

static void	reverse_hex_buffer(char *hex)
{
  char		buffer[30];
  int		it_buf;
  int		it_hex;

  my_strcpy(&buffer[0], &hex[0]);
  it_buf = my_strlen(&buffer[0]);
  it_hex = 2;
  while ((it_buf - 1) > 1)
    {
      hex[it_hex] = buffer[(it_buf - 1)];
      it_buf--;
      it_hex++;
    }
}

static int	number_to_letter(int nb)
{
  int		letter;

  letter = 'a';
  while ((letter - 87) != nb)
    letter++;
  return letter;
}

void	my_inttohex(unsigned long value, char *buff)
{
  int	remain;
  int	index;

  remain = -1;
  index = 2;
  while (value > 0)
    {
      remain = value % 16;
      value = value / 16;
      buff[index] = (remain >= 10) ? number_to_letter(remain) : (remain + 48);
      index++;
    }
  buff[0] = '0';
  buff[1] = 'x';
  if (remain == -1)
    {
      buff[index] = '0';
      index++;
    }
  buff[index] = '\0';
  reverse_hex_buffer(&buff[0]);
}
