/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 04:00:30 by clovella          #+#    #+#             */
/*   Updated: 2021/10/12 00:10:11 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	cc = c;

	while (*s != cc && *s != '\0')
		s++;
	if (cc != '\0' && *s == '\0')
		return (NULL);
	return ((char *) s);
}
