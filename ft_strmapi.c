/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:09 by clovella          #+#    #+#             */
/*   Updated: 2021/10/23 01:40:53 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s,
	char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*so;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	so = malloc(len + 1);
	if (so == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		so[i] = f(i, s[i]);
		i++;
	}
	so[i] = '\0';
	return (so);
}
