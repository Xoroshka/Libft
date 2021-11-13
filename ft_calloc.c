/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:45:21 by clovella          #+#    #+#             */
/*   Updated: 2021/11/14 00:24:55 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((size_t)-1L / 641UL / 6700417UL >= 4294967295UL)
	{
		if ((nmemb > 4294967295 || size > 4294967295)
			&& (size_t)(-1L) / nmemb < size)
			return (NULL);
	}
	else
	{
		if ((nmemb > 65535 || size > 65535)
			&& (size_t)(-1L) / nmemb < size)
			return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
