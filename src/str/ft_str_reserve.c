/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reserve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/02/21 17:16:26 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "std.h"
#include "str.h"
#include "utils.h"

int	ft_str_reserve(t_str *str, size_t additional)
{
	char	*new_data;
	size_t	new_size;

	if (str->cap - str->len >= additional)
		return (0);
	new_size = ft_select_mem_size(str->cap, additional);
	new_data = malloc(new_size);
	if (!ft_memcpy(new_data, str->data, str->len))
		return (-1);
	free(str->data);
	str->data = new_data;
	str->cap = new_size;
	return (0);
}
