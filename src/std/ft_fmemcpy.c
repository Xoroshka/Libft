/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmemcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:51 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 15:37:43 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_fmemcpy(void *restrict dest, const void *restrict src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dest || !src)
		return (0);
	s = src;
	d = dest;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
/*Compile with -O2 for use SIMD*/