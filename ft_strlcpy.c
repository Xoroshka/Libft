/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:02:20 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 03:00:40 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst || !n)
		return (slen);
	if (slen + 1 < n)
		ft_memmove(dst, src, slen + 1);
	else
	{
		ft_memmove(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (slen);
}
