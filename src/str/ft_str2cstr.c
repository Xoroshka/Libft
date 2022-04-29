/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2cstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:32:12 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 10:04:14 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_types.h"
#include "libft_std.h"

char	*ft_str2cstr(t_str str)
{
	char	*cstr;

	cstr = ft_memcpy(
			malloc(str.len + 1),
			str.data,
			str.len);
	if (cstr)
		cstr[str.len] = '\0';
	return (cstr);
}
