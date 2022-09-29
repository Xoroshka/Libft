/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:56:54 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 05:29:20 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

void	ft_memswap(void *restrict ptr1, void *restrict ptr2, t_u64 size)
{
	char	tmp;
	char	*p1;
	char	*p2;

	p1 = ptr1;
	p2 = ptr2;
	while (size--)
	{
		tmp = p1[size];
		p1[size] = p2[size];
		p2[size] = tmp;
	}
}
