/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:00:41 by clovella          #+#    #+#             */
/*   Updated: 2021/11/13 05:42:15 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	const size_t	len = ft_strlen(s);
	char			*ds;

	ds = malloc(len + 1);
	if (ds == NULL)
		return (NULL);
	ft_memcpy(ds, s, len + 1);
	return (ds);
}
