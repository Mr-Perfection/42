/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:34:27 by slee              #+#    #+#             */
/*   Updated: 2017/01/23 18:49:50 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

/*
** memory
*/
int				ft_memcmp(const void *original, const void *new, size_t len);
void			*ft_memcpy(void *dest, const void *source, size_t len);
void			*ft_memccpy(void *dest, const void *source, int c, size_t len);
void			*ft_memmove(void *dest, const void *source, size_t len);
void			*ft_memset(void *destination, int int_value, size_t len);
void			*ft_memchr(const void *haystack, int needle, size_t len);
void			ft_bzero(void *string, size_t len);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **pointer);
char			*ft_strnew(size_t size);
void			ft_strdel(char **pointer);

/*
** character
*/
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);

/*
** string
*/
size_t			ft_strlen(const char *source);
size_t			ft_strnlen(const char *source, size_t max);
char			*ft_strchr(const char *haystack, int needle);
char			*ft_strchr_last(const char *haystack, int needle);
char			*ft_strrchr(const char *haystack, int needle);
int				ft_strcmp(const char *first, const char *second);
int				ft_strequ(const char *first, const char *second);
int				ft_strnequ(const char *first, const char *second, size_t len);
int				ft_strncmp(const char *first, const char *second, size_t max);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *haystack, const char *needle
							, size_t len);
char			*ft_strcpy(char *dest, const char *source);
char			*ft_strncpy(char *dest, const char *source, size_t max);
char			*ft_strdup(const char *source);
char			*ft_strcat(char *first, const char *second);
char			*ft_strncat(char *first, const char *second, size_t len);
size_t			ft_strlcat(char *first, const char *second, size_t size);
void			ft_strclr(char *string);
void			ft_striter(char *string, void (*func)(char *));
void			ft_striteri(char *string, void (*func)(unsigned int, char *));
char			*ft_strmap(const char *string, char (*func)(char));
char			*ft_strmapi(const char *string
							, char (*func)(unsigned int, char));
char			*ft_strsub(char const *string, size_t start, size_t len);
char			*ft_strjoin(char const *first, char const *second);
char			*ft_strjoinn(size_t n, void(*free_str)(), ...);
char			*ft_strtrim(char const *string);
char			**ft_strsplit(char const *string, char c);
void			ft_strsplit_free(char **thing);
char			*ft_strjoinreplace(char const *s1, char const *s2);

/*
** printing
*/

typedef void	(*t_printer)(const void*);

void			ft_putchar(char c);
void			ft_putchar_fd(char c, int file_descriptor);
void			ft_putchar_if(int boolean, char yes, char no);
void			ft_putcharn(char c, size_t number);
void			ft_putcharn_fd(char c, size_t number, int file_descriptor);
void			ft_putstr(char const *source);
void			ft_putstr_fd(char const *source, int file_descriptor);
void			ft_putstr_literal(char const *source);
void			ft_putstr_justify_right(char *string
										, size_t total
										, char fill);
void			ft_putstr_justify_left(char *string
										, size_t total
										, char fill);
void			ft_putstrn(char const *source, size_t max_length);
void			ft_putstrn_fd(char const *source, size_t max_length
								, int file_descriptor);
void			ft_putendl(char const *source);
void			ft_putendl_fd(char const *source, int file_descriptor);
void			ft_putendl_exit(char const *source, int exit_code);
void			ft_putnbr(int number);
void			ft_putnbr_justify_right(int number
										, size_t total
										, char fill);
void			ft_putnbr_fd(int number, int file_descriptor);
void			ft_putulonglong(unsigned long long number);
void			ft_putstrarr(char const **source, size_t length);
void			ft_putarr(void const **source, size_t length
							, t_printer printer);

/*
** array functions
*/

size_t			ft_arrlen(char **array);
int				ft_foreach_p(void *array, size_t length, size_t width
								, int (*check_this)(void *this));
int				ft_foreach_char_p(char *string, int (*check_char)(int));

/*
** regular arrays that are good
*/

typedef struct	s_intarr
{
	int		**data;
	int		height;
	int		width;
}				t_intarr;

/*
** other
*/
void			ft_swap(void *a, void *b);
void			ft_putnbrnl(int n);
int				ft_atoi(const char *str);
void			ft_atoi_add_digit(const char c, int *number);
void			ft_atoi_add_digit_max(const char c, intmax_t *number);
int				ft_atoibase(const char *str, int b);
void			ft_itoa_write(char *last_digit, uintmax_t number);
char			*ft_itoa(int number);
char			*ft_itoa_large(intmax_t number);
char			*ft_itoa_ularge(unsigned long long number);
char			*ft_itoabase(unsigned long n, unsigned int b);
int				ft_count_digits(int number);
int				ft_count_digits_umax(uintmax_t number);
int				ft_abs(int number);
intmax_t		ft_abs_max(intmax_t number);
int				ft_min(int a, int b);
uintmax_t		ft_min_umax(uintmax_t a, uintmax_t b);
int				ft_max(int a, int b);
void			ft_ptrswp(void **first, void **second);
int				ft_ptrequ(const void *first, const void *second);
int				ft_wstrlen(const wchar_t *s);
wchar_t			*ft_wstrnew(size_t size);
wchar_t			*ft_wstrcat(wchar_t *s1, const wchar_t *s2);
wchar_t			*ft_wstrcpy(wchar_t *dst, const wchar_t *src);
void			*ft_wset(int *b, int c, size_t len);
void			ft_wctouni(wchar_t wide, char *tmp);
char			*ft_wstouni(wchar_t *wstr);

/*
** get_next_line
*/

# define BUF_SIZE							1
# define SPILL_MULT							2
# define MAX_FD								100

typedef struct	s_stock
{
	char	*spill;
	long	length;
	long	lu;
	int		read_ret;
	char	*line_end;
}				t_stock;

int				get_next_line(int fd, char **line);

/*
** linked lists
*/

typedef struct	s_list
{
	struct s_list		*next;
	void				*data;
}				t_list;

t_list			*ft_list_create_elem(void *data);
t_list			*ft_list_at(t_list *begin_list, unsigned int nbr);
void			ft_list_clear(t_list **begin_list, void (*free_inside)());
t_list			*ft_list_find(t_list *begin_list,
								void *data_ref,
								int (*cmp)());
t_list			*ft_list_find_end(t_list *list);
void			ft_list_foreach(t_list *list, void (*function)(void *));
void			ft_list_foreach_if(t_list *list
								, void (*function)(void *)
								, void *data_ref
								, int (*cmp)());
t_list			*ft_list_last(t_list *begin_list);
void			ft_list_push_back(t_list **begin_list, void *data);
void			ft_list_push_front(t_list **begin_list, void *data);
t_list			*ft_list_push_params(int ac, char **av);
void			ft_list_remove_if(t_list **begin_list, void *data_ref
									, int (*cmp)());
void			ft_list_remove_node(t_list **original
									, t_list *to_remove
									, void(*free_inside)(void*));
void			ft_list_reverse(t_list **begin_list);
size_t			ft_list_size(t_list *begin_list);
void			ft_list_sort(t_list **first, int (*compare)(void*, void*));

#endif
