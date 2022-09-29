/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:19 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 05:41:56 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss = s;
	const unsigned char	cc = c;

	if (s == 0)
		return (0);
	while (n--)
	{
		if (*ss == cc)
			return ((void *)ss);
		ss++;
	}
	return (0);
}
