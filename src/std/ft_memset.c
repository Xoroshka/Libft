/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 03:56:37 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 04:33:51 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cp;

	if (b == 0)
		return (0);
	cp = b;
	while (len--)
		*cp++ = (unsigned char) c;
	return (b);
}
