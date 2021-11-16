/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:55:18 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 02:52:41 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	if (dest == src)
		return (dest);
	if (dest < src)
	{
		d = dest;
		s = src;
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d = dest + n - 1;
		s = src + n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
/*Compile with -O2 for use SIMD*/