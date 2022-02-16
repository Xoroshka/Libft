/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:20 by clovella          #+#    #+#             */
/*   Updated: 2022/02/16 03:29:54 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H
# include <stddef.h>

typedef struct s_str
{
	char	*data;
	size_t	len;
	size_t	cap;
}	t_str;

t_str	ft_str_with_cap(size_t cap);
int		ft_str_trim(t_str *str);
int		ft_str_overcap(t_str *str, size_t overcap);
int		ft_str_upcap(t_str *str, size_t upcap);
int		ft_str_append(t_str *str, char *apnd, size_t apnd_size);
int		ft_str_join(t_str *to, t_str from);
int		ft_str_push(t_str *str, char c);
t_str	ft_i2str(int n);
t_str	ft_l2str(long int n);
#endif