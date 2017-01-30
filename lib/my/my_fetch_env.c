/*
** my_fetch_env.c for LibMy in /home/rajiska/Epitech/Libs/lib/my
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Sat Jan  7 21:19:57 2017 Corlouer Doriann
** Last update Sun Jan  8 00:46:31 2017 Corlouer Doriann
*/

#include <my.h>
#include <stdlib.h>

static int	get_var_bound(const char *var)
{
  int		it;

  it = 0;
  while (*(var + it) != '\0' && *(var + it) != '=')
    it++;
  return it;
}

char	*my_fetch_env(char **env, const char *var)
{
  int	it;
  int	end;
  char	*val_tmp;
  char	*val;

  if (*env == NULL)
    return NULL;
  it = (-1);
  while (env[++it] != NULL)
    {
      if ((end = get_var_bound(env[it])) == 0)
	return NULL;
      if (!my_strncmp(env[it], var, end))
	break;
      if (env[it + 1] == NULL)
	return NULL;
    }
  val_tmp = my_strstr(env[it], "=");
  if (val_tmp == NULL || *(val_tmp + 1) == '\0')
    return NULL;
  val = malloc(sizeof(char) * (my_strlen(val_tmp + 1) + 1));
  my_strcpy(val, val_tmp + 1);
  return val;
}
