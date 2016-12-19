/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <slee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 21:49:28 by slee              #+#    #+#             */
/*   Updated: 2016/11/01 23:48:06 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>
# include "get_next_line.h"

# define ALPHANUMS	"0123456789abcdefghijklmnopqrstuvwxyz"
# define HEXNUMS	"0123456789ABCDEF"
# define DIGITS		"0123456789"

# define RED		31
# define GREEN		32
# define YELLOW		33
# define BLUE		34
# define MAGENTA	35
# define CYAN		36
# define GREY		37
# define DEFAULT	39
# define C_NONE         "\033[0m"
# define C_BOLD         "\033[1m"
# define C_BLACK        "\033[30m"
# define C_RED          "\033[31m"
# define C_GREEN        "\033[32m"
# define C_BROWN        "\033[33m"
# define C_BLUE         "\033[34m"
# define C_MAGENTA      "\033[35m"
# define C_CYAN         "\033[36m"
# define C_GRAY         "\033[37m"
# define BUFF_SIZE 1

# define FT_ABS(n) (n < 0) ? -n : n
# define FT_MAX(a,b) (a > b) ? a : b
# define FT_MIN(a, b) (a < b) ? a : b

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_vec3
{
	double			x;
	double			y;
	double			z;
}					t_vec3;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(char const *str);
char				*ft_strdup(const char *s1);
char				*ft_strcdup(const char *str, char c);
char				*ft_strndup(const char *str, size_t len);
char				*ft_strdup_till(char *str, char c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dst, char const *src, size_t max);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isvisible(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinf(char const *s1, char const *s2, int p);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
int					ft_tabsize(char **tab);
char				*ft_itoa(int n);
char				*ft_itoa_base(int value, int base);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_puttab(char **tab);
void				ft_puttabint(int **tab, int len, int spaces);
void				ft_putnbr(int n);
void				ft_putnbrn(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_printf(const char *format, ...);
int					ft_dprintf(int fd, const char *format, ...);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				sort_int_tab(int *tab, unsigned int size);
int					count_char_str(char *str, char c);
size_t				ft_strclen(const char *str, char c);
int					get_next_line(const int fd, char **line);
long				ft_strtol(char *str, char **endptr, int base);
double				ft_clamp(double x, double min, double max);
double				ft_mix(double x, double y, double a);
double				ft_smoothstep(double edge1, double edge2, double x);
double				veclength(t_vec3 *vec);
void				vecnorm(t_vec3 *vec);
double				vecdot(t_vec3 *a, t_vec3 *b);
t_vec3				veccross(t_vec3 *a, t_vec3 *b);
t_vec3				vecsub(t_vec3 *a, t_vec3 *b);
t_vec3				vecopplus(t_vec3 *a, double x);
t_vec3				vecopdiv(t_vec3 *a, double x);
t_vec3				vecdiv(t_vec3 *a, t_vec3 *b);
t_vec3				vecreflect(t_vec3 *i, t_vec3 *n);
void				vecclamp(t_vec3 *vec, double a, double b);
t_vec3				vecadd(t_vec3 *a, t_vec3 *b);
t_vec3				vecprod(t_vec3 *a, t_vec3 *b);
t_vec3				vecopx(t_vec3 *a, double x);
double				vecdistance(t_vec3 *a, t_vec3 *b);

#endif
