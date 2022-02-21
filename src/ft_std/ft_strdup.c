/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:00:41 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 04:35:49 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ds;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	ds = malloc(len + 1);
	if (!ds)
		return (0);
	ft_memcpy(ds, s, len + 1);
	return (ds);
}
