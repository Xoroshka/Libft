/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:51:19 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 04:32:12 by clovella         ###   ########.fr       */
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
		if (*ss++ == cc)
			return ((void *)--ss);
	return (0);
}
