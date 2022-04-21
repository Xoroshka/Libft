/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:07:24 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_std.h"

void	ft_combsort(void *base, size_t num, size_t size,
int (*compare) (const void *, const void *))
{
	const double	factor = 1.2473309;
	size_t			step;
	void			*l;
	void			*r;

	step = num - 1;
	while (step >= 1)
	{
		l = base;
		r = l + step * size;
		while (r < base + size * num)
		{
			if (compare(l, r) > 0)
				ft_memswap(l, r, size);
			l += size;
			r += size;
		}
		step /= factor;
	}
}
