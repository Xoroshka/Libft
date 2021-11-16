/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:05:27 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 03:42:28 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
