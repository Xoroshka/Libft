/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_retain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovella <clovella@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 08:49:21 by clovella          #+#    #+#             */
/*   Updated: 2022/04/29 11:04:35 by clovella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_types.h"
#include "libft_vec.h"
#include "libft_std.h"

void	ft_vec_retain(t_vec *vec, t_bool (*f)(void *))
{
	const t_u64	element_size = vec->elm_size;
	const void	*end_of_vec = vec->data + element_size * vec->len;
	void		*cur;
	void		*part;
	t_u64		offset;

	cur = vec->data;
	offset = 0;
	while (cur != end_of_vec)
	{
		part = cur;
		while (f(cur) == true && cur != end_of_vec)
			cur += vec->elm_size;
		ft_memmove(part - offset, part, cur - part);
		while (f(cur) == false && cur != end_of_vec)
		{
			cur += element_size;
			offset += element_size;
		}
	}
	vec->len -= offset / element_size;
}
