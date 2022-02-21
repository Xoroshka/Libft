/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l2str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:23:39 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:46:38 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"
#include "str.h"

t_str	ft_l2str(long int n)
{
	t_str				str;
	unsigned long int	abs;
	unsigned long int	mod;

	abs = ft_absl(n);
	mod = 1;
	str.len = 0;
	while (++str.len && abs / mod > 9)
		mod *= 10;
	str = ft_str_with_cap(str.len + (n < 0));
	if (!str.data)
		return (str);
	*str.data = '-';
	str.len = (n < 0);
	while (mod)
	{
		str.data[str.len++] = (char)((abs / mod) + '0');
		abs %= mod;
		mod /= 10;
	}
	return (str);
}
