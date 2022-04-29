/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:25:57 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 12:46:46 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_remove(t_vec *vec, t_u64 index)
{
	if (index >= vec->len)
		return (err);
	vec->len--;
	if (index == vec->len)
		return (ok);
	ft_memmove(
		vec->data + index * vec->elm_size,
		vec->data + (index + 1) * vec->elm_size,
		(vec->len - index) * vec->elm_size);
	return (ok);
}
