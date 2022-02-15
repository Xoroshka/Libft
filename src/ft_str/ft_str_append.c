/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:37 by clovella          #+#    #+#             */
/*   Updated: 2022/02/16 02:06:32 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft_std.h"
#include "libft_str.h"

int	ft_str_append(t_str *str, char *apnd, size_t apnd_size)
{
	size_t	new_cap;
	
	if (str->cap < str->len + apnd_size)
	{
		new_cap = str->cap + str->cap / 2;
		while (new_cap < str->len + apnd_size)
			new_cap += new_cap / 2;
		if (ft_str_upcap(str, new_cap))
			return (-1);
	}
	ft_memcpy(str->data + str->len, apnd, apnd_size);
	str->len += apnd_size;
	return (0);
}
