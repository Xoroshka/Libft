/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_combsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:07:24 by clovella          #+#    #+#             */
/*   Updated: 2022/10/07 04:59:30 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_std.h"

void	ft_combsort(void *base, size_t num, size_t size,
int (*compare) (const void *, const void *))
{
	const double	factor = 1.247330950103979;
	double			fstep;
	size_t			step;
	void			*l;
	void			*r;

	fstep = (double)(num - 1);
	step = (size_t)fstep * size;
	while (step >= size)
	{
		l = base;
		r = base + step;
		while (r < base + size * num)
		{
			if (compare(l, r) > 0)
				ft_memswap(l, r, size);
			l += size;
			r += size;
		}
		fstep /= factor;
		step = (size_t)(fstep + 0.5) * size;
	}
}
