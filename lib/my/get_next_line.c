/*
** get_next_line.c for gnl in /home/rajiska/Epitech/CPE_2016_getnextline
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan  2 12:46:15 2017 Corlouer Doriann
** Last update Wed Feb  1 13:17:55 2017 Corlouer Doriann
*/

#include "get_next_line.h"

static char	*l_realloc(char *s, unsigned int size)
{
  char		*str;
  int		it;

  if (s == NULL)
    return (malloc(size));
  it = (-1);
  str = malloc(size);
  while (*(s + (++it)) != '\0')
    str[it] = s[it];
  free(s);
  return str;
}

static void	*ret_with_null(t_gnlstack *stack)
{
  free(stack->stack);
  stack->stack = NULL;
  stack->pos = 0;
  stack->bf_rd = 0;
  stack->size = 0;
  return NULL;
}

static int	contains_cr(const char *s)
{
  int		it;

  it = -1;
  while (*(s + (++it)) != '\0')
    {
      if (*(s + it) == '\n')
	return it;
    }
  return -1;
}

static char	*stack_to_s(t_gnlstack *stack, const int fd)
{
  int		it_stack;
  int		it_s;
  char		*s;

  s = NULL;
  if (stack->stack[stack->pos] == '\n')
    {
      s = malloc(1);
      s[0] = '\0';
      stack->pos = stack->pos + 1;
      return s;
    }
  it_stack = (stack->pos - 1);
  while (stack->stack[++it_stack] != '\n' && stack->stack[it_stack] != '\0');
  s = malloc(it_stack - stack->pos + 1);
  it_stack = (stack->pos - 1);
  it_s = (-1);
  while (stack->stack[++it_stack] != '\n' && stack->stack[it_stack] != '\0')
    s[++it_s] = stack->stack[it_stack];
  s[it_s + 1] = '\0';
  stack->pos = (it_stack + 1);
  if (fd == 0)
    ret_with_null(stack);
  return ((s == NULL) ? ret_with_null(stack) : s);
}

char			*get_next_line(const int fd)
{
  static t_gnlstack	stack = { NULL, 0, 0, 0 };
  char			buffer[READ_SIZE];
  int			it;
  int			stck_sz_bk;

  if (stack.pos > stack.size)
    return ret_with_null(&stack);
  if ((stack.stack != NULL && (contains_cr(stack.stack + stack.pos) >= 0))
      || (stack.bf_rd < READ_SIZE && stack.bf_rd > 0))
    return stack_to_s(&stack, fd);
  while (((stack.bf_rd = read(fd, &buffer[0], READ_SIZE))) > 0)
    {
      stack.stack = l_realloc(stack.stack, stack.size + stack.bf_rd + 3);
      it = (-1);
      stck_sz_bk = stack.size;
      while (stack.size <=
	     (stack.bf_rd + stck_sz_bk + ((stack.bf_rd < READ_SIZE &&
					   buffer[stack.bf_rd - 1] == '\n') ? -1 : 0)))
	stack.stack[stack.size++] = buffer[++it];
      stack.stack[--stack.size] = '\0';
      if ((stack.stack != NULL &&
	   (contains_cr(stack.stack + stack.pos) >= 0)) || stack.bf_rd < READ_SIZE)
	return stack_to_s(&stack, fd);
    }
  return ret_with_null(&stack);
}
