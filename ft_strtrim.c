/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:05:18 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 03:03:31 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	in_set(const char *set, const char c)
{
	while (*set != '\0' && *set != c)
		set++;
	if (*set == c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ts;

	if (!s1 || !set)
		return (0);
	while (in_set(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && in_set(set, *(s1 + len - 1)))
		len--;
	ts = malloc(len + 1);
	if (!ts)
		return (0);
	ft_memcpy(ts, s1, len);
	ts[len] = '\0';
	return (ts);
}
