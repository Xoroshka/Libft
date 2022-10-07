/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:56:54 by clovella          #+#    #+#             */
/*   Updated: 2022/10/07 05:55:59 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	ft_memswap(void *restrict ptr1, void *restrict ptr2, const t_u64 size)
{
	unsigned char	tmp;
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	*p1_end;

	p1 = ptr1;
	p2 = ptr2;
	p1_end = p1 + size;
	while (p1 < p1_end)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
