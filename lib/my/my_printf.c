/*
** printf.c for Printf in /home/rajiska/Epitech/printf
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct 20 15:38:05 2016 Corlouer Doriann
** Last update Mon Nov 21 16:19:46 2016 Corlouer Doriann
*/

#include <my.h>

static void	put_extended_string(const char *s)
{
  int		it;

  it = 0;
  while (*(s + it) != '\0')
    {
      if (*(s + it) < 32 || *(s + it) >= 127)
	{
	  my_putchar('\\');
	  my_putchar(((*(s + it) < 100) ? '0' : (*(s + it) / 100 + 48)));
	  my_putchar(((*(s + it) < 10) ? '0' : (*(s + it) / 10 % 10 + 48)));
	  my_putchar((*(s + it) % 10) + 48);
	}
      else
	my_putchar(*(s + it));
      it++;
    }
}

static void	pt_base(long addr, int capital, int flag, int base)
{
  char		addr_to_print[66];

  my_memset(&addr_to_print[0], '\0', 66);
  my_ltobase(addr, base, capital, &addr_to_print[0]);
  if (flag)
    my_putstr("0x");
  my_putstr(&addr_to_print[0]);
}

static void	handle_type(va_list *ap, void (* f) (), char t, long arg)
{
  if (t == 's' || t == 'S')
    f(va_arg(*ap, char *));
  else if (t == 'd')
    f(va_arg(*ap, int));
  else if (t == 'p')
    f(va_arg(*ap, long), FALSE, TRUE, arg);
  else if (t == 'c')
    f(va_arg(*ap, int));
  else if (t == 'u')
    f(va_arg(*ap, unsigned int));
  else if (t == 'l')
    f(va_arg(*ap, long));
  else if (t == 'o')
    f(va_arg(*ap, long), FALSE, FALSE, arg);
  else if (t == 'X' || t == 'x')
    f(va_arg(*ap, long), ((t == 'X') ? TRUE : FALSE), FALSE, arg);
  else if (t == 'b')
    f(va_arg(*ap, unsigned long), FALSE, FALSE, arg);
}

static void	get_type(const char *fmt, va_list *ap, int *it)
{
  if (*(fmt + 1) == 's')
    handle_type(ap, (void (*)()) &my_putstr, 's', 0);
  else if (*(fmt + 1) == 'd' || *(fmt + 1) == 'i' || *(fmt + 1) == 'h')
    handle_type(ap, (void (*)()) &my_put_nbr, 'd', 0);
  else if (fmt[1] == 'p' || fmt[1] == 'x' || fmt[1] == 'X' || fmt[1] == 'b')
    handle_type(ap, (void (*)()) &pt_base, fmt[1], (fmt[1] == 'b') ? 2 : 16);
  else if (*(fmt + 1) == 'c')
    handle_type(ap, (void (*)()) &my_putchar, 'c', 0);
  else if (*(fmt + 1) == 'u')
    handle_type(ap, (void (*)()) &my_put_unbr, 'u', 0);
  else if (*(fmt + 1) == 'l')
    handle_type(ap, (void (*)()) &my_put_lnbr, 'l', 0);
  else if (*(fmt + 1) == 'o')
    handle_type(ap, (void (*)()) &pt_base, 'o', 8);
  else if (*(fmt + 1) == 'S')
    handle_type(ap, (void (*)()) &put_extended_string, 'S', 0);
  else if (*(fmt + 1) == '%')
    my_putchar('%');
  else
    {
      my_putchar(*(fmt));
      return;
    }
  *it = *it + 1;
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  int		it;

  va_start(ap, format);
  it = 0;
  while (*(format + it) != '\0')
    {
      if (*(format + it) == '%')
	get_type((format + it), &ap, &it);
      else
	my_putchar(*(format + it));
      it++;
    }
  va_end(ap);
  return 0;
}
