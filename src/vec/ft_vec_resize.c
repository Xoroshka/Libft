/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:17:53 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 13:28:16 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_resize(t_vec *vec, t_u64 size, const void *placeholder)
{
	void	*cur;

	if (size < vec->len)
	{
		vec->len = size;
		return (ok);
	}
	if (ft_vec_reserve(vec, size - vec->len) == err)
		return (err);
	cur = vec->data + vec->len * vec->elm_size;
	while (vec->len < size)
	{
		ft_fmemcpy(cur, placeholder, vec->elm_size);
		cur += vec->elm_size;
		vec->len++;
	}
	return (ok);
}
