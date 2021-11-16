/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:09 by clovella          #+#    #+#             */
/*   Updated: 2021/11/16 03:01:16 by clovella         ###   ########.fr       */
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

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	so = malloc(len + 1);
	if (!so)
		return (0);
	i = 0;
	while (s[i])
	{
		so[i] = f(i, s[i]);
		i++;
	}
	so[i] = '\0';
	return (so);
}
