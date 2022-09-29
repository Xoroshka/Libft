/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:43:05 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 04:32:38 by clovella         ###   ########.fr       */
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
	ft_memmove(elm_addr + vec->elm_size, elm_addr,
		(vec->len - index) * vec->elm_size);
	ft_memcpy(elm_addr, item, vec->elm_size);
	vec->len++;
	return (ok);
}
