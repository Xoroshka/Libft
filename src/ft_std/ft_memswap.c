/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:56:54 by clovella          #+#    #+#             */
/*   Updated: 2022/02/13 19:56:59 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memswap(void *ptr1, void *ptr2, size_t size)
{
	char			*a;
	char			*b;
	char			tmp;
	const size_t	a_end = (size_t)ptr1 + size;

	if (ptr1 == ptr2)
		return ;
	a = ptr1;
	b = ptr2;
	while ((size_t)a < a_end)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
	return ;
}
