/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_i32.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:23:39 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 09:27:40 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"
#include "libft_str.h"

t_res	ft_str_push_i32(t_str *str, t_i32 n)
{
	t_u32	abs;
	t_u32	mod;
	t_i32	i;

	abs = ft_abs(n);
	mod = 1;
	i = 0;
	while (++i && abs / mod > 9)
		mod *= 10;
	if (ft_vec_reserve_exact(str, i + (n < 0)) == err)
		return (err);
	*str->data = '-';
	str->len = (n < 0);
	while (mod)
	{
		ft_str_push(str, (abs / mod) + '0');
		abs %= mod;
		mod /= 10;
	}
	return (ok);
}
