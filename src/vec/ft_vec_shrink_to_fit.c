/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_shrink_to_fit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:58:22 by clovella          #+#    #+#             */
/*   Updated: 2022/09/29 07:22:59 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

t_res	ft_vec_shrink_to_fit(t_vec *vec)
{
	void	*new_mem;

	if (vec->len == 0)
		free(vec->data);
	new_mem = ft_memchsize(
			vec->data,
			vec->len * vec->elm_size,
			vec->len * vec->elm_size
			);
	if (new_mem == 0 && vec->len != 0)
	{
		if (vec->on_err != 0)
			vec->on_err(vec->on_err_ctx);
		return (err);
	}
	vec->cap = vec->len;
	vec->data = new_mem;
	return (ok);
}
