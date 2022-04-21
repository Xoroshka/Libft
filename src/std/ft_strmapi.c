/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:03:09 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"

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
