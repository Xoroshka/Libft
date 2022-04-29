/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:56:54 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 13:29:52 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"

static void	internal_ft_memswap(char *p1, char *p2, t_u64 size)
{
	char	tmp;
	t_u64	i;

	i = 0;
	while (i < size)
	{
		tmp = p1[i];
		p1[i] = p2[i];
		p2[i] = tmp;
		i++;
	}
}

void	ft_memswap(void *ptr1, void *ptr2, t_u64 size)
{
	if (ptr1 != ptr2 && ptr1 != 0 && ptr2 != 0)
		internal_ft_memswap((char *)ptr1, (char *)ptr2, size);
}
