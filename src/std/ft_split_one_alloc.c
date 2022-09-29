/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_one_alloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:59:53 by clovella          #+#    #+#             */
/*   Updated: 2022/07/24 15:55:32 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

typedef struct s_substr {
	char	*ptr;
	size_t	len;
}	t_substr;

static size_t	alloc_size(char const *s, char c)
{
	size_t	size;
	char	prev;

	prev = c;
	size = 0;
	while (*s != '\0')
	{
		if (*s != c)
			size++;
		if (*s != c && prev == c)
			size += sizeof(char *) + 1;
		prev = *s++;
	}
	return (size + sizeof(char *));
}

static t_substr	getsub(const char **ss, char c)
{
	t_substr	sub;
	const char	*s;

	s = *ss;
	while (*s == c)
		s++;
	sub.ptr = (char *) s;
	sub.len = 0;
	while (*s != '\0' && *s != c)
	{
		sub.len++;
		s++;
	}
	*ss = s + 1;
	return (sub);
}

char	**ft_split_one_alloc(char const *s, char c)
{
	size_t		size;
	char		*tail;
	t_substr	sub;
	char		**arr;
	int			i;

	if (s == NULL)
		size = sizeof(char *);
	else
		size = alloc_size(s, c);
	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	tail = ((char *) arr) + size;
	i = 0;
	while ((void *)(arr + i + 1) < (void *) tail)
	{
		sub = getsub(&s, c);
		*--tail = '\0';
		ft_memcpy(tail -= sub.len, sub.ptr, sub.len);
		arr[i] = tail;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
