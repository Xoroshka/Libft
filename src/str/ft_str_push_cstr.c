/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_cstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:37 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"
#include "libft_str.h"

t_bool	ft_str_push_cstr(t_str *str, char *cstr, size_t size)
{
	if (ft_str_reserve(str, size)
		&& ft_memcpy(str->data + str->len, cstr, size))
	{
		str->len += size;
		return (true);
	}
	return (false);
}
