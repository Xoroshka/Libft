/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_reserve_exact.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 07:22:51 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_std.h"

t_res	ft_vec_reserve_exact(t_vec *vec, t_u64 additional)
{
	const t_i64	elm_add = vec->len + additional - vec->cap;
	t_u8		*new_data;

	if (elm_add <= 0)
		return (ok);
	new_data = ft_memchsize(vec->data, vec->len * vec->elm_size,
			(vec->cap + elm_add) * vec->elm_size);
	if (new_data)
	{
		vec->data = new_data;
		vec->cap += elm_add;
		return (ok);
	}
	else if (vec->on_err)
		vec->on_err(vec->on_err_ctx);
	return (err);
}
