/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:23:39 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_std.h"
#include "libft_str.h"
#include "libft_types.h"

t_bool	ft_str_push_int(t_str *str, int n)
{
	unsigned int	abs;
	unsigned int	mod;
	int				i;

	abs = ft_abs(n);
	mod = 1;
	i = 0;
	while (++i && abs / mod > 9)
		mod *= 10;
	if (ft_str_reserve_exact(str, i + (n < 0)) == false)
		return (false);
	*str->data = '-';
	str->len = (n < 0);
	while (mod)
	{
		ft_str_push(str, (abs / mod) + '0');
		abs %= mod;
		mod /= 10;
	}
	return (true);
}
