/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:04:19 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 13:46:38 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "std.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char		c;
	size_t		len;

	c = *find++;
	if (c == '\0')
		return ((char *) s);
	len = ft_strlen(find);
	while (1)
	{
		while (1)
		{
			if (slen-- < 1 || *s == '\0')
				return (0);
			if (*s++ == c)
				break ;
		}
		if (len > slen)
			return (0);
		if (ft_strncmp(s, find, len) == 0)
			break ;
	}
	return ((char *)--s);
}
