/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndidenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:04:12 by ndidenko          #+#    #+#             */
/*   Updated: 2018/05/02 16:04:13 by ndidenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>
# include <locale.h>

typedef enum	e_size
{
	no_size = -1,
	hh = 0,
	h = 1,
	l = 2,
	ll = 3,
	j = 4,
	z = 5
}				t_size;

typedef struct	s_parsing
{
	int			flag_sharp;
	int			flag_zero;
	int			flag_minus;
	int			flag_plus;
	int			flag_space;
	int			width;
	int			precision;
	t_size		size;
	char		letter;
	int			len;
}				t_parsing;

char			*ft_itoa_max(intmax_t n);
char			*ft_itoa_base(uintmax_t n, int base);
int				ft_2to10(char *bin);

int				ft_printf(char *str, ...);
int				ft_print_conv(char *conv, va_list ap);

size_t			ft_search_conversion_letter(char *str);
int				ft_myprint(char *str, va_list ap);
void			ft_struct_init(t_parsing *parsing);
int				ft_printf(char *str, ...);
int				ft_validconv(char *conv);
int				ft_validchar(char *str);
int				ft_valid_flag(const char c);
int				ft_valid_modifier(char c);
int				ft_is_digit(char c);
int				ft_parse_flags(char *conv, t_parsing *parsing);
int				ft_parse_width(char *conv, t_parsing *parsing);
void			ft_detect_precision(char *conv, t_parsing *parsing);
int				ft_parse_precision(char *conv, t_parsing *parsing);
int				ft_parse_size(char *conv, t_parsing *parsing);

void			processing_c(t_parsing *parsing, va_list ap);
void			processing_letter(t_parsing *parsing, va_list ap);

void			processing_s(t_parsing *parsing, va_list ap);

void			processing_d(t_parsing *parsing, va_list ap);
char			*ft_make_str_d(char *str, t_parsing *parsing, intmax_t n);
char			*ft_d1(char *str, t_parsing *parsing, int len, intmax_t nbr);
char			*ft_d2(char *str, t_parsing *parsing, int len, intmax_t nbr);
char			*ft_d2_2(char *str, t_parsing *parsing, int len, intmax_t nbr);
char			*ft_d3(char *str, t_parsing *parsing, int len, intmax_t nbr);
char			*ft_d3_1(char *str, t_parsing *parsing, int len);
char			*ft_d4(char *str, t_parsing *parsing, int len, intmax_t nbr);

void			processing_u(t_parsing *parsing, va_list ap);
char			*ft_make_str_u(char *str, t_parsing *parsing, uintmax_t nbr);

void			processing_o(t_parsing *parsing, va_list ap);
char			*ft_make_str_o(char *str, t_parsing *parsing, uintmax_t nbr);

void			processing_x(t_parsing *parsing, va_list ap);
char			*ft_make_str_x(char *str, t_parsing *parsing, uintmax_t nbr);
char			*ft_x2(char *str, t_parsing *parsing, int len, uintmax_t nbr);
char			*ft_x3(char *str, t_parsing *parsing, int len);

void			processing_p(t_parsing *parsing, va_list ap);

void			processing_unicode(t_parsing *parsing, va_list ap);

void			processing_pct(t_parsing *parsing);
void			processing_invalid(t_parsing *parsing);

char			*ft_left(char *s, int width, int precision, char c);
char			*ft_right(char *s, int width, int precision, char c);

void			*ft_memalloc(size_t size);
void			*ft_memset(void *destination, int c, size_t n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *str, int c);
char			*ft_strcpy(char *cpyto, const char *src);
void			ft_strdel(char **as);
char			*ft_strdup(const char *string);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *s);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
int				ft_atoi(const char *str);

#endif
