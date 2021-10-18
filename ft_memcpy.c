/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:51 by clovella          #+#    #+#             */
/*   Updated: 2021/10/12 00:08:31 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	if (!dest && !src)
		return (NULL);
	s = src;
	d = dest;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*Compile with -O2 for use SIMD*/