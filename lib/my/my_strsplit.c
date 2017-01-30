/*
** my_strsplit.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct 20 11:15:58 2016 Corlouer Doriann
** Last update Thu Jan 19 11:40:33 2017 Corlouer Doriann
*/

#include <stdlib.h>
#include <my.h>

static int	count_delims_in_str(const char *str, const char *delims)
{
  int		it_str;
  int		it_del;
  int		counter;

  it_str = 0;
  counter = 0;
  while (*(str + it_str) != '\0')
    {
      it_del = 0;
      while (*(delims + it_del) != '\0')
	{
	  if (*(str + it_str) == *(delims + it_del))
	    counter++;
	  it_del++;
	}
      it_str++;
    }
  return counter;
}

static int	param_is_in_list(char cur_c, const char *delims)
{
  while (*delims != '\0')
    {
      if (*delims == cur_c)
	return 1;
      delims++;
    }
  return 0;
}

/*
** L:68 Workaround Memset For File Reading - Needs Proper Fix
*/

static void	fix_file_readon(char **s, unsigned int sz)
{
  *s = malloc(sizeof(char) * (sz));
  my_memset(*s, '\0', sizeof(char) * (sz - 1));
}

char	**my_strsplit(const char *str, const char *delims)
{
  int	it;
  int	result_it;
  int	last_pos;
  char	**result;
  int	op_var;

  it = result_it = last_pos = 0;
  result = malloc(sizeof(char *) * (count_delims_in_str(str, delims) + 2));
  while (*(str + it) != '\0')
    {
      if (*(str + it + 1) == '\0' || param_is_in_list(*(str + it), delims))
	{
	  fix_file_readon(&result[result_it], (it - last_pos + 3));
	  op_var = (it - last_pos) + ((*(str + it + 1) == '\0') ? 1 : 0);
	  my_strncpy(result[result_it], (str + last_pos), op_var);
	  result[result_it][op_var + 1] = '\0';
	  last_pos = (it + 1);
	  result_it++;
	}
      it++;
    }
  result[result_it] = 0;
  return result;
}
