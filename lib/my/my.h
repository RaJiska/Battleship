/*
** my.h for Task02 in /home/rajiska/Epitech/CPool_Day09/task02
** 
** Made by Corlouer Doriann
** Login   <corlouer_d@epitech.net>
** 
** Started on  Thu Oct 13 09:56:10 2016 Corlouer Doriann
** Last update Sun Jan 22 15:18:45 2017 Corlouer Doriann
*/

#ifndef _MY_H
#define _MY_H

#include <stdarg.h>
#include "get_next_line.h"

#define LARGER_NB(x, y)	(((x) >= (y)) ? (x) : (y))
#define ABS(x)		(((x) < 0) ? (x * (-1)) : (x))
#define TRUE		1
#define FALSE		0

void	my_putchar(char c);
void	my_putchar_err(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(const char *str);
int	my_putstr_err(const char *str);
int	my_strlen(const char *str);
int	my_getnbr(const char *str);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int number);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, const char *src);
char	*my_strncpy(char *dest, const char *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, const char *to_find);
int	my_strcmp(const char *s1, const char *s2);
int	my_strncmp(const char *s1, const char *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(const char *str);
int	my_str_isnum(const char *str);
int	my_str_islower(const char *str);
int	my_str_isupper(const char *str);
int	my_str_isprintable(const char *str);
char	*my_strcat(char *dest, const char *str);
char	*my_strncat(char *dest, const char *src, int nb);
void	my_wordtab_show(const char **arr);
char	*my_strdup(const char *src);
char	**my_strsplit(const char *str, const char *delims);
void	my_wordtab_free(char **wordtab);
void	my_inttohex(unsigned long hex, char *buffer);
void	my_puttohex(unsigned long hex);
char	*my_str_shiftleft(char *str);
char	*my_str_shiftright(char *str);
char	*my_str_stripchar(char *str, char c);
char	*my_str_nbstripzeros(char *str);
int	my_str_cmpnb(const char *s1, const char *s2);
char	*my_str_extractbychar(char *s1, char *s2, char delim1, char delim2);
char	*my_str_excludebychar(char *s1, char *s2, char delim1, char delim2);
char	*my_str_append(char *s, char c);
char	*my_itoa(int nb, char *s);
char	**my_wordtab_shiftleft(char **tab);
void	my_str_printtonb(char *s);
void	my_memset(char *s, char c, int len);
void	my_ltobase(long value, int base, int capital, char *buff);
void	my_put_unbr(unsigned int nb);
void	my_put_lnbr(long nb);
int	my_printf(const char *format, ...);
char	*my_realloc(char *s, unsigned int size);
char	*my_realloc_clean(char *s, unsigned int size);
void	*my_memcpy(void *dest, const void *src, unsigned int size);
int	my_wordtab_count(char **arr);
char	*my_fetch_env(char **env, const char *var);
void	my_str_replace(char *s, const char *from, const char *to);
void	my_putnstr(const char *s, int sz);
int	my_str_findchar(const char *s, char c);

#endif
