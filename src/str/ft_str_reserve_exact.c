/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reserve_exact.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"
#include "libft_utils.h"

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
