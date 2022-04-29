/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_reserve_exact.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:42:41 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 09:35:45 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_std.h"

t_res	ft_vec_reserve_exact(t_vec *vec, t_u64 additional)
{
	t_u64	cur_data_size;
	t_u64	new_data_size;
	t_u8	*new_data;

	if (vec == err)
		return (err);
	cur_data_size = vec->cap * vec->elm_size;
	new_data_size = (vec->len + additional) * vec->elm_size;
	if (cur_data_size >= new_data_size)
		return (ok);
	new_data = ft_memchsize(vec->data, cur_data_size, new_data_size);
	if (new_data)
	{
		vec->data = new_data;
		vec->cap += additional;
		return (ok);
	}
	else if (vec->err_handl)
		vec->on_err(vec->on_err_ctx);
	return (err);
}
