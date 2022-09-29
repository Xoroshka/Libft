/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:51 by clovella          #+#    #+#             */
/*   Updated: 2022/07/24 15:54:07 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
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
/*Compile with -O1 or higher for use builtin memcpy*/