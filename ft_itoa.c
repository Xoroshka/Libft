/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:46:06 by clovella          #+#    #+#             */
/*   Updated: 2021/10/23 01:38:00 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	ft_abs(int n)
{
	unsigned int	abs;

	if (n < 0)
		abs = -n;
	else
		abs = n;
	return (abs);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	abs;
	unsigned int	mod;
	int				i;

	abs = ft_abs(n);
	mod = 1;
	i = 0;
	while (++i && abs / mod > 9)
		mod *= 10;
	str = malloc(i + (n < 0) + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	i = (n < 0);
	while (mod)
	{
		str[i++] = (char)((abs / mod) + '0');
		abs %= mod;
		mod /= 10;
	}
	str[i] = '\0';
	return (str);
}
