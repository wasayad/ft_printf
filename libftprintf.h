/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libftprintf.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 13:40:10 by wasayad      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 19:36:19 by wasayad     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stddef.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <time.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>

typedef struct	s_printf
{
	int		flag_point;
	int		flag_star;
	int		flag_neg;
	int		flag_zero;
	int		accu;
	int		width;
	int		i;
	int		len;
	char	*d;
	char	*str;
	char	*actual;
	char	*temp;
	char	*conv;
	char	*addsymb;
	int		addcheck;
	int		*index_0;
}				t_printf;

char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_atoi_width(const char *str);
void			ft_init_flag(t_printf *b);
int				ft_type_arg(va_list ap, t_printf *b);
int				ft_resolve(char *fmt, va_list ap, t_printf *b);
void			ft_write_str(char *str, t_printf *b);
int				ft_check_arg(char *fmt, va_list ap, t_printf *b);
int				ft_printf(const char *fmt, ...);
size_t			ft_strlen(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s1);
char			*ft_itoa(long nbr);
char			*ft_itoa_base(long long n, char *base);
char			*ft_strchr(const char *str, int c);
int				ft_atoi(const char *str);
int				ft_atoi_base(char *str, char *base);
void			*ft_calloc(size_t count, size_t size);
void			ft_bzero(void *b, size_t len);
size_t			ft_strcpy(char *dst, const char *src);
char			*ft_strjoinchar(char const *s1, char const s2);
int				ft_realloc_c(t_printf *b, char c);
char			*ft_itoa_base_address(unsigned long long n, char *base);
t_printf		*init_struct(void);
char			*ft_strjoinf(char *s1, const char *s2);
int				ft_init_pr(t_printf *b);
int				ft_init_c(t_printf *b, va_list ap);
int				ft_init_s(t_printf *b, va_list ap);
int				ft_init_di(t_printf *b, va_list ap);
int				ft_init_x(t_printf *b, va_list ap);
int				ft_init_xx(t_printf *b, va_list ap);
int				ft_init_p(t_printf *b, va_list ap);
int				ft_init_u(t_printf *b, va_list ap);
void			ft_replace_star_by_number(va_list ap, t_printf *b);
void			ft_check_point(t_printf *b);
int				ft_check_number(t_printf *b);
int				manage_neg(t_printf *b);
int				manage_zero(t_printf *b);
int				manage_no_flag(t_printf *b);
int				ft_add_string_to_render(t_printf *b);
int				ft_check_tab(t_printf *b, int j);
int				ft_realloc_tab_int(t_printf *b, int index);

#endif
