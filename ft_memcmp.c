/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:35 by clovella          #+#    #+#             */
/*   Updated: 2021/10/11 23:55:08 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1 = s1;
	const unsigned char	*c2 = s2;

	while (n--)
		if (*c1++ != *c2++)
			return ((int) *--c1 - (int) *--c2);
	return (0);
}
