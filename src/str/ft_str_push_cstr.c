/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_push_cstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:37 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 20:18:34 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "std.h"
#include "str.h"

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
