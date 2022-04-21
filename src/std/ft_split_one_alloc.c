/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_one_alloc.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:59:53 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

typedef struct s_str {
	char	*ptr;
	size_t	len;
}	t_str;

static size_t	alloc_size(char const *s, char c)
{
	size_t	size;

	while (*s != '\0' && *s == c)
		s++;
	size = sizeof(char *);
	while (*s != '\0')
	{
		if (*s++ != c)
			size++;
		else
		{
			size += sizeof(char *) + 1;
			while (*s == c)
				s++;
		}
	}
	if (size > sizeof(char *))
		if (*--s != c)
			size += sizeof(char *) + 1;
	return (size);
}

static t_str	getsub(const char **ss, char c)
{
	t_str		sub;
	const char	*s;

	s = *ss;
	while (*s == c && *s != '\0')
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
	t_str		sub;
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
