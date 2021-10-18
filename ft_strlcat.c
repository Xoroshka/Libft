/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:01:46 by clovella          #+#    #+#             */
/*   Updated: 2021/10/12 17:53:21 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	slen;
	size_t	dlen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (n <= dlen)
		return (n + slen);
	if (slen < n - dlen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, n - dlen - 1);
		dst[n - 1] = 0;
	}
	return (dlen + slen);
}
