/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:20 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 20:09:25 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H
# include <stddef.h>
# include "types.h"

typedef struct s_str
{
	char	*data;
	size_t	len;
	size_t	cap;
}	t_str;

t_str	ft_str_new(void);
t_bool	ft_str_reserve(t_str *str, size_t additional);
t_bool	ft_str_reserve_exact(t_str *str, size_t additional);
t_bool	ft_str_push_cstr(t_str *str, char *cstr, size_t size);
t_bool	ft_str_push_str(t_str *to, t_str from);
t_bool	ft_str_push(t_str *str, char c);
t_bool	ft_str_shrink_to_fit(t_str *str);
char	*ft_str2cstr(t_str str);
t_bool	ft_str_push_int(t_str *str, int n);
t_bool	ft_str_push_long(t_str *str, long n);
#endif