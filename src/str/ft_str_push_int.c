/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i2str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:23:39 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 19:24:27 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"
#include "str.h"
#include "types.h"

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
