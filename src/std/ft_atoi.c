/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:43:16 by clovella          #+#    #+#             */
/*   Updated: 2021/11/17 08:40:14 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static int	pop_sign(const char **ss)
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
	const long		long_max = (long)(((unsigned long)(-1L)) >> 1);
	long int		acc;
	unsigned char	c;
	int				sign;

	sign = pop_sign(&s);
	acc = 0;
	while (*s >= '0' && *s <= '9')
	{
		c = *s++ - '0';
		if (acc > long_max / 10
			|| (acc == long_max / 10 && (unsigned long int)c > long_max % 10))
		{
			if (sign == 1)
				return (long_max);
			else
				return (~long_max);
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
