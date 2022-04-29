/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:35 by clovella          #+#    #+#             */
/*   Updated: 2022/04/28 09:50:22 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_push(t_vec *vec, void *item)
{
	if (ft_vec_reserve(vec, 1))
	{
		ft_memcpy(vec->data + (vec->len * vec->elm_size), item, vec->elm_size);
		vec->len++;
		return (ok);
	}
	return (err);
}
