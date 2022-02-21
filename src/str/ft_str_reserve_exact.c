/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reserve_exact.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 19:17:34 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "utils.h"

t_bool	ft_str_reserve_exact(t_str *str, size_t additional)
{
	char	*new_data;
	size_t	new_size;

	if (str == 0)
		return (false);
	if (str->cap - str->len >= additional)
		return (true);
	new_size = str->len + additional;
	new_data = ft_phony_realloc(str->data, str->cap, new_size);
	if (new_data)
	{
		str->data = new_data;
		str->cap = new_size;
		return (true);
	}
	return (false);
}
