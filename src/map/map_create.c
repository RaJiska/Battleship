/*
** map_create.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 09:54:28 2017 Corlouer Doriann
** Last update Mon Jan 30 14:00:30 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

static void	init_ships(int *ships)
{
  ships[0] = FALSE;
  ships[1] = FALSE;
  ships[2] = FALSE;
  ships[3] = FALSE;
}

static void	draw_ship(t_map **map, int nb,
			  const t_2DVector *a, const t_2DVector *b)
{
  int		i;
  int		j;

  i = a->x;
  j = a->y;
  while ((i != b->x) || (j != b->y))
    {
      if ((*map)->map[j][i] == '.')
	{
	  map_destroy(map);
	  return;
	}
      (*map)->map[j][i] = nb + 48;
      if (i == b->x)
	j++;
      else
	i++;
    }
  if ((*map)->map[j][i] == '.')
    {
      map_destroy(map);
      return;
    }
  (*map)->map[j][i] = nb + 48;
}

static int	data_isvalid(char **wt, int *ships, t_2DVector *a, t_2DVector *b)
{
  if (my_wordtab_count(wt) != 3 || my_strlen(wt[0]) != 1 ||
      my_strlen(wt[1]) != 2 || my_strlen(wt[2]) != 2 ||
      !map_pos_isvalid(wt[1]) || !map_pos_isvalid(wt[2]) ||
      (wt[0][0] - 48) < NAVY_SHIP_XS || (wt[0][0] - 48) > NAVY_SHIP_L ||
      ships[(wt[0][0] - 48 - 2)] == TRUE ||
      (wt[1][0] != wt[2][0] && wt[1][1] != wt[2][1]))
    {
      my_wordtab_free(wt);
      return FALSE;
    }
  map_pos_toint(wt[1], a);
  map_pos_toint(wt[2], b);
  if (((b->x + b->y) - (a->x + a->y) + 1) != (wt[0][0] - 48))
    {
      my_wordtab_free(wt);
      return FALSE;
    }
  ships[(wt[0][0] - 48 - 2)] = TRUE;
  return TRUE;
}

static void	place_ships(t_map **map, const int fd)
{
  char		*line;
  char		**wt;
  int		ships[4];
  t_2DVector	a;
  t_2DVector	b;

  init_ships(&ships[0]);
  while ((line = get_next_line(fd)) != NULL)
    {
      wt = my_strsplit(line, ":");
      if (!data_isvalid(wt, &ships[0], &a, &b))
	{
	  free(line);
	  map_destroy(map);
	  return;
	}
      free(line);
      draw_ship(map, (wt[0][0] - 48), &a, &b);
      my_wordtab_free(wt);
      if (*map == NULL)
	return;
    }
}

t_map	*map_create(const int fd, int player_no, pid_t pid)
{
  t_map	*map;
  int	it;

  it = 0;
  map = malloc(sizeof(t_map));
  map->map = malloc(sizeof(char *) * NAVY_MAP_H);
  while (it < NAVY_MAP_H)
    {
      map->map[it] = malloc(sizeof(char) * (NAVY_MAP_W + 1));
      my_memset(map->map[it], '.', NAVY_MAP_W - 1);
      map->map[it][NAVY_MAP_W] = '\0';
      it++;
    }
  if (fd >= 0)
    place_ships(&map, fd);
  map->pid = ((fd < 0) ? pid : getpid());
  map->player_no = player_no;
  return map;
}
