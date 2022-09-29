/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:35 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 05:31:25 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types_base.h"

int	ft_memcmp(const void *s1, const void *s2, t_u64 n)
{
	const t_u8	*c1 = s1;
	const t_u8	*c2 = s2;

	while (n--)
		if (*c1++ != *c2++)
			return ((int) *--c1 - (int) *--c2);
	return (0);
}
