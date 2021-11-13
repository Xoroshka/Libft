/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:59:53 by clovella          #+#    #+#             */
/*   Updated: 2021/11/14 00:09:18 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_parts(char const *s, char d)
{
	int	parts;

	parts = 0;
	while (1)
	{
		while (*s == d && *s != '\0')
			s++;
		if (*s == '\0')
			return (parts);
		parts++;
		while (*s != d)
		{
			if (*s++ == '\0')
				return (parts);
		}
	}
}

char	*substrdup(char const **sc, char d)
{
	const char	*s;
	char		*substr;
	size_t		size;

	s = *sc;
	size = 0;
	while (*s == d)
		s++;
	while (s[size] != '\0' && s[size] != d)
		size++;
	substr = malloc(size + 1);
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, s, size);
	substr[size] = '\0';
	*sc = s + size;
	return (substr);
}

char	**empty_array(void)
{
	char	**empty;

	empty = malloc(sizeof(char *));
	if (empty != NULL)
		empty[0] = NULL;
	return (empty);
}

char	**ft_split(char const *s, char d)
{
	char	**split;
	size_t	size;
	size_t	iter;

	if (s == NULL)
		return (empty_array());
	size = count_parts(s, d);
	split = malloc(sizeof(char *) * (size + 1));
	if (split == NULL)
		return (NULL);
	iter = 0;
	while (iter < size)
	{
		split[iter] = substrdup(&s, d);
		if (split[iter] == NULL)
		{
			while (iter-- > 0)
				free(split[iter]);
			free(split);
			return (NULL);
		}
		iter++;
	}
	split[size] = NULL;
	return (split);
}
