/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:58:22 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 13:21:07 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_shrink_to_fit(t_vec *vec)
{
	if (vec->len == 0)
		free(vec->data);
	else if (ft_memchsize(
			vec->data,
			vec->cap * vec->elm_size,
			vec->len * vec->elm_size
		) == err)
	{
		if (vec->err_handl)
			vec->on_err(vec->on_err_ctx);
		return (err);
	}
	vec->cap = vec->len;
	return (ok);
}
