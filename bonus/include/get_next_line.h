/*
** get_next_line.h for gnl in /home/rajiska/Epitech/CPE_2016_getnextline
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Mon Jan  2 12:57:09 2017 Corlouer Doriann
** Last update Fri Jan  6 15:55:58 2017 Corlouer Doriann
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#include <stdlib.h>
#include <unistd.h>

# ifndef READ_SIZE
#  define READ_SIZE 30
# endif /* READ_SIZE */

typedef struct	gnlstack
{
  char		*stack;
  long		pos;
  long		bf_rd;
  long		size;
}		t_gnlstack;

char	*get_next_line(const int fd);

#endif /* GET_NEXT_LINE_H_ */
