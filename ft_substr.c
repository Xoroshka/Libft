/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:05:27 by clovella          #+#    #+#             */
/*   Updated: 2021/10/12 01:06:37 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*ss;

	if (s == NULL)
		slen = 0;
	else
		slen = ft_strlen(s);
	if (slen < len + start)
		len = slen - start;
	if (slen <= start)
		len = 0;
	ss = malloc(len + 1);
	if (ss == NULL)
		return (NULL);
	ft_memcpy(ss, s + start, len);
	ss[len] = '\0';
	return (ss);
}
