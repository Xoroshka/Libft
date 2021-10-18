/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:43:16 by clovella          #+#    #+#             */
/*   Updated: 2021/10/13 04:58:36 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static int	ft_skpspsign(const char **ss)
{
	const char	*s;
	int			sign;

	s = *ss;
	while (ft_isspace(*s))
		s++;
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else
		if (*s == '+')
			s++;
	*ss = s;
	return (sign);
}

static long int	ft_atol(const char *s)
{
	long int		acc;
	unsigned char	c;
	int				sign;

	sign = ft_skpspsign(&s);
	acc = 0;
	while (*s >= '0' && *s <= '9')
	{
		c = *s++ - '0';
		if (acc > LONG_MAX / 10
			|| (acc == LONG_MAX / 10 && (unsigned long int)c > LONG_MAX % 10))
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		acc *= 10;
		acc += c;
	}
	return (acc * sign);
}

int	ft_atoi(const char *str)
{
	return (ft_atol(str));
}
