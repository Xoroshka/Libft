/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/04/21 23:51:50 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"
#include "libft_utils.h"

t_bool	ft_str_reserve(t_str *str, size_t additional)
{
	size_t	new_size;

	if (str == 0)
		return (false);
	new_size = ft_select_mem_size(str->cap, additional);
	return (ft_str_reserve_exact(str, new_size - (str->len)));
}
