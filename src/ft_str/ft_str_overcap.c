/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_overcap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.school-21.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/02/15 20:42:42 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_std.h"
#include "libft_str.h"

int	ft_str_overcap(t_str *str, size_t overcap)
{
	char	*new_data;

	if (str->cap - str->len >= overcap)
		return (0);
	new_data = malloc(str->len + overcap);
	if (!ft_memcpy(new_data, str->data, str->len))
		return (-1);
	free(str->data);
	str->data = new_data;
	str->cap = str->len + overcap;
	return (0);
}