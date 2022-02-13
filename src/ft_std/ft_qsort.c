/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:24:40 by clovella          #+#    #+#             */
/*   Updated: 2022/02/13 17:37:22 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_std.h"

struct s_worker
{
	void	*l;
	void	*r;
};

static void	*ft_qsort_med(void *base, size_t num, size_t size,
	int (*compare) (const void *, const void *))
{
	const size_t	lo = (size_t)base;
	const size_t	mid = (size_t)base + size * ((num >> 1) + 1);
	const size_t	hi = (size_t)base + size * (num - 1);

	if (compare((void *)mid, (void *)hi) <= 0)
	{
		if (compare((void *)lo, (void *)mid) <= 0)
			return ((void *)mid);
		else if (compare((void *)lo, (void *)hi) <= 0)
			return ((void *)lo);
		else
			return ((void *)hi);
	}
	else
	{
		if (compare((void *)lo, (void *)hi) <= 0)
			return ((void *)hi);
		else if (compare((void *)lo, (void *)mid) <= 0)
			return ((void *)lo);
		else
			return ((void *)mid);
	}
}

static struct s_worker	ft_qsort_worker(struct s_worker data, void *m,
	size_t size, int (*compare) (const void *, const void *))
{
	while (1)
	{
		while (compare(data.l, m) < 0)
			data.l += size;
		while (compare(data.r, m) > 0)
			data.r -= size;
		if (data.l <= data.r)
		{
			if (m == data.l || m == data.r)
				m = (void *)((size_t)m ^ (size_t) data.l ^ (size_t) data.r);
			ft_memswap(data.l, data.r, size);
			data.l += size;
			data.r -= size;
		}
		else
			break ;
	}
	return (data);
}

void	ft_qsort(void *base, size_t num, size_t size,
	int (*compare) (const void *, const void *))
{
	struct s_worker	data;
	void			*m;

	if (num < 16)
	{
		ft_combsort(base, num, size, compare);
		return ;
	}
	data.l = base;
	data.r = base + size * (num - 1);
	if (num > 64)
		m = ft_qsort_med(base, num, size, compare);
	else
		m = base + size * (num >> 1);
	data = ft_qsort_worker(data, m, size, compare);
	if (data.r > base)
		ft_qsort(base, (data.r - base) / size + 1, size, compare);
	if (data.l < base + size * (num - 1))
		ft_qsort(data.l, num - (data.l - base) / size, size, compare);
}
