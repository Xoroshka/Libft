/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 20:18:17 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include "utils.h"

t_bool	ft_str_reserve(t_str *str, size_t additional)
{
	size_t	new_size;

	if (str == 0)
		return (false);
	new_size = ft_select_mem_size(str->cap, additional);
	return (ft_str_reserve_exact(str, new_size - (str->len)));
}
