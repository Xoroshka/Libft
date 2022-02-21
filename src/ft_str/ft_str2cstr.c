/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2cstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:32:12 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 10:37:07 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_str.h"
#include "libft_std.h"

char	*ft_str2cstr(t_str str)
{
	char	*cstr;

	cstr = ft_memcpy(
			malloc(str.len + 1),
			str.data,
			str.len);
	if (cstr != 0)
		cstr[str.len] = '\0';
	return (cstr);
}
