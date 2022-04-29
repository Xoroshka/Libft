/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:43:05 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 13:23:14 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_insert(t_vec *vec, t_u64 index, const void *item)
{
	void *const	elm_addr = vec->data + index * vec->elm_size;

	if (index > vec->len || ft_vec_reserve(vec, 1) == err)
		return (err);
	if (index == vec->len)
		return (ft_vec_push(vec, item));
	ft_memmove(elm_addr + vec->elm_size, elm_addr,
		(vec->len - index) * vec->elm_size);
	ft_fmemcpy(ft_vec_elm(vec, index), item, vec->elm_size);
	vec->len++;
	return (ok);
}
