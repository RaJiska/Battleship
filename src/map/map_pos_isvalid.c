/*
** map_pos_isvalid.c for navy in /home/rajiska/Epitech/PSU_2016_navy/src/map
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan 30 10:00:47 2017 Corlouer Doriann
** Last update Fri Feb  3 22:58:02 2017 Corlouer Doriann
*/

#include "../../include/navy.h"

int	map_pos_isvalid(char *pos)
{
  if (my_strlen(pos) < 2)
    return FALSE;
  my_str_stripchar(pos + (sizeof(char) * 2), ' ');
  my_str_stripchar(pos + (sizeof(char) * 2), '\t');
  if (my_strlen(pos) < 2)
    return FALSE;
  if ((pos[0] >= '1' && pos[0] <= '8') &&
      (pos[1] >= 'A' && pos[1] <= (('A') + NAVY_MAP_W - 1)))
    my_swap((int *) &pos[0], (int *) &pos[1]);
  my_strcapitalize(pos);
  if (pos[0] < 'A' || pos[0] > (('A') + NAVY_MAP_W - 1))
    return FALSE;
  if (pos[1] < '1' || pos[1] > '8')
    return FALSE;
  return TRUE;
}
