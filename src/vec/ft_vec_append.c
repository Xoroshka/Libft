/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:30:35 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 11:15:39 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_append(t_vec *to, const t_vec *from)
{
	if (to->elm_size != from->elm_size)
		return (err);
	if (ft_vec_reserve(to, from->len))
	{
		ft_fmemcpy(to->data + (to->len * to->elm_size),
			from->data, from->len * from->elm_size);
		to->len += from->len;
		return (ok);
	}
	return (err);
}
