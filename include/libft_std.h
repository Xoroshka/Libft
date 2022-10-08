/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_std.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:09:10 by clovella          #+#    #+#             */
/*   Updated: 2022/10/08 07:46:49 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STD_H
# define LIBFT_STD_H
# include <stddef.h>
# include "libft_types.h"

int		ft_atoi(const char *str);
t_u32	ft_abs(t_i32 n);
t_u64	ft_absl(t_i64 n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *p, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	**ft_split_one_alloc(char const *s, char c);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
int		ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s, const char *find, size_t slen);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_u64	ft_tee(t_u64 *var, t_u64 data);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_memswap(void *ptr1, void *ptr2, size_t size);
void	ft_combsort(void *base, size_t num, size_t size,
			int (*compare) (const void *, const void *));
void	ft_qsort(void *base, size_t num, size_t size,
			int (*compare) (const void *, const void *));
t_i64	ft_min(t_i64 a, t_i64 b);
t_i64	ft_max(t_i64 a, t_i64 b);
t_u64	ft_umin(t_u64 a, t_u64 b);
t_u64	ft_umax(t_u64 a, t_u64 b);
void	*ft_memchsize(void *data, t_u64 cur_size, t_u64 new_size);
#endif