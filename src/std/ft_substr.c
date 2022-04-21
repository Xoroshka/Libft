/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:05:27 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*ss;

	if (!s)
		slen = 0;
	else
		slen = ft_strlen(s);
	if (slen < len + start)
		len = slen - start;
	if (slen <= start)
		len = 0;
	ss = malloc(len + 1);
	if (!ss)
		return (0);
	ft_memcpy(ss, s + start, len);
	ss[len] = '\0';
	return (ss);
}
